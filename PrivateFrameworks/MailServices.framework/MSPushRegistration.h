
@interface MSPushRegistration : MSMailDefaultService {
    NSString * _accountIdentifier;
    NSString * _bundleIdentifier;
    NSArray * _mailboxNames;
    NSString * _notificationNamePrefix;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSArray *mailboxNames;
@property (nonatomic, copy) NSString *notificationNamePrefix;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)bundleIdentifier;
- (id)init;
- (id)mailboxNames;
- (id)notificationNamePrefix;
- (void)registerForPush:(id /* block */)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setMailboxNames:(id)arg1;
- (void)setNotificationNamePrefix:(id)arg1;

@end
