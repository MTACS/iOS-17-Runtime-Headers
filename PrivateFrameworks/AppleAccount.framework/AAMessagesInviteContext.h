
@interface AAMessagesInviteContext : NSObject {
    NSString * _action;
    NSURL * _inviteURL;
    NSString * _messageBody;
    NSArray * _recipients;
    NSString * _secondaryTitle;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, copy) NSString *action;
@property (nonatomic, copy) NSURL *inviteURL;
@property (nonatomic, copy) NSString *messageBody;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, copy) NSString *secondaryTitle;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)action;
- (id)description;
- (id)inviteURL;
- (id)messageBody;
- (id)recipients;
- (id)secondaryTitle;
- (void)setAction:(id)arg1;
- (void)setInviteURL:(id)arg1;
- (void)setMessageBody:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
