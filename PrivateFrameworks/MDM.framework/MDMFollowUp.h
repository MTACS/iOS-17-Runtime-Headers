
@interface MDMFollowUp : NSObject {
    NSString * _clientIdentifier;
    FLFollowUpController * _followUpController;
    NSString * _itemIdentifier;
    NSString * _notificationInfo;
    long long  _style;
    NSString * _title;
    NSURL * _url;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, retain) FLFollowUpController *followUpController;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (nonatomic, retain) NSString *notificationInfo;
@property (nonatomic) long long style;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (void)clearFollowUpWithClientID:(id)arg1;

- (void).cxx_destruct;
- (id)_constructFollowUp;
- (void)clearFollowUp;
- (id)clientIdentifier;
- (id)followUpController;
- (id)initWithStyle:(long long)arg1 clientIdentifier:(id)arg2 itemIdentifier:(id)arg3 url:(id)arg4 title:(id)arg5 notificationInfo:(id)arg6 userInfo:(id)arg7;
- (id)itemIdentifier;
- (id)notificationInfo;
- (void)presentFollowUp;
- (void)setClientIdentifier:(id)arg1;
- (void)setFollowUpController:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setNotificationInfo:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (long long)style;
- (id)title;
- (id)url;
- (id)userInfo;

@end
