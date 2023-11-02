
@interface SSVFamilyContentDeletionEvent : NSObject {
    NSArray * _deletedAccounts;
}

@property (nonatomic, readonly) NSArray *deletedAccounts;

+ (id)notificationPayloadWithAccountPairs:(id)arg1;
+ (void)postDistributedNotificationWithAccountPairs:(id)arg1;

- (void).cxx_destruct;
- (id)deletedAccounts;
- (id)initWithNotificationUserInfo:(id)arg1;
- (id)initWithXPCEventStreamEvent:(id)arg1;

@end
