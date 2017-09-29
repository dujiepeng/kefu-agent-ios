//
//  ChatViewController.h
//  EMCSApp
//
//  Created by EaseMob on 15/4/15.
//  Copyright (c) 2015年 easemob. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum{
    ChatViewTypeChat,
    ChatViewTypeNoChat,
    ChatViewTypeCallBackChat
}ChatViewType;

@protocol ChatViewControllerDelegate <NSObject>
- (void)refreshConversationList;
@end

@interface ChatViewController : EMBaseViewController
@property(nonatomic,assign) id<ChatViewControllerDelegate> delegate;
@property (strong, nonatomic) HDConversation * conversationModel;
@property(nonatomic,strong) NSMutableArray *allConversations;
@property (copy, nonatomic) NSString *notifyNumber;
@property(nonatomic,copy) NSString *unreadBadgeValue;
- (instancetype)initWithtype:(ChatViewType)type;

+ (BOOL)isExistFile:(HDMessage *)model;

@end