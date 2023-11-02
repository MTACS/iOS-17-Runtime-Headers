
@interface CHSharedAddressBook : CHSynchronizedLoggable {
    NSMutableDictionary * _addressBookCache;
}

@property (retain) NSMutableDictionary *addressBookCache;

+ (id)get;

- (void).cxx_destruct;
- (id)addressBookCache;
- (unsigned long long)cachedCount;
- (void)cleanUpAddressBookCache_sync;
- (void)dealloc;
- (id)fetchAddressBookInfoFromCacheForKey:(id)arg1;
- (id)init;
- (void)insertAddressBookInfoDictionaryIntoCache:(id)arg1;
- (void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2;
- (void)registerForContactsNotifications;
- (void)revertAddressBook:(id)arg1;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)arg1;
- (void)setAddressBookCache:(id)arg1;

@end
