
@interface CNDowntimeWhitelistContainerFetcher : NSObject <CNDowntimeWhitelistContainerFetching> {
    ACAccountStore * _accountStore;
    <NSObject> * _accountStoreDidChangeNotificationToken;
    CNContactStore * _contactStore;
    NSNotificationCenter * _notificationCenter;
    CNContainer * _primaryiCloudContainer;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly) <NSObject> *accountStoreDidChangeNotificationToken;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNContainer *downtimeWhitelistContainer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) CNContainer *primaryiCloudContainer;
@property (readonly) Class superclass;

+ (id)os_log;

- (void).cxx_destruct;
- (id)accountStore;
- (id)accountStoreDidChangeNotificationToken;
- (void)beginObservingChangeNotifications;
- (id)contactStore;
- (void)dealloc;
- (id)downtimeWhitelistContainer;
- (id)fetchPrimaryiCloudCardDAVAccountIdentifier;
- (id)fetchPrimaryiCloudCardDAVContainer;
- (id)init;
- (id)initWithContactStore:(id)arg1 accountStore:(id)arg2 notificationCenter:(id)arg3;
- (id)notificationCenter;
- (id)primaryiCloudContainer;

@end
