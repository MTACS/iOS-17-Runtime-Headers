
@interface CNDowntimeWhitelist : NSObject {
    CNContactStore * _contactStore;
    <NSObject> * _contactStoreDidChangeNotificationToken;
    <CNDowntimeWhitelistContainerFetching> * _containerFetcher;
    NSNotificationCenter * _notificationCenter;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) <NSObject> *contactStoreDidChangeNotificationToken;
@property (nonatomic, readonly) <CNDowntimeWhitelistContainerFetching> *containerFetcher;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;

+ (bool)anyContactIsWhitelisted:(id)arg1;
+ (bool)isWhitelistedContact:(id)arg1;
+ (id)keyDescriptor;
+ (id)os_log;

- (void).cxx_destruct;
- (id)allWhitelistedContacts:(id*)arg1;
- (id)allWhitelistedHandleStrings;
- (id)allWhitelistedHandleStrings:(id*)arg1;
- (void)beginObservingChangeNotifications;
- (id)contactStore;
- (id)contactStoreDidChangeNotificationToken;
- (id)containerFetcher;
- (void)dealloc;
- (id)init;
- (id)initWithContactStore:(id)arg1;
- (id)initWithContactStore:(id)arg1 accountStore:(id)arg2 notificationCenter:(id)arg3;
- (id)initWithContactStore:(id)arg1 notificationCenter:(id)arg2;
- (bool)isHandleStringWhitelisted:(id)arg1;
- (bool)isHandleStringWhitelisted:(id)arg1 error:(id*)arg2;
- (id)notificationCenter;
- (id)requestForContactsInPermittedContainers;
- (id)requestForContactsInPermittedContainersWithHandles:(id)arg1;
- (id)requestForNonUnifiedContacts;
- (void)setTestContainerFetcher:(id)arg1;
- (id)whitelistedHandleStringsFromHandleStrings:(id)arg1;
- (id)whitelistedHandleStringsFromHandleStrings:(id)arg1 error:(id*)arg2;

@end
