
@interface NTKPeopleComplicationContactsCache : NSObject {
    NSLock * _allContactsEntriesLock;
    CNContactStore * _contactStore;
    CNFavorites * _favorites;
    NSLock * _favoritesEntriesLock;
    NSDictionary * _favoritesMapping;
    NSLock * _favoritesMappingLock;
    bool  _hasSetupNotifications;
    NSLock * _hasSetupNotificationsLock;
    NSArray * _nonFavoriteValidAllContacts;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_contactKeysToFetchWithThumbnail;
- (id)_contactKeysToFetchWithoutThumbnail;
- (void)_didReceiveContactStoreChangedNotification;
- (void)_didReceiveDeviceLockStateDidChangeNotification;
- (void)_didReceiveFavoritesChangeRelatedNotification;
- (void)_favoritesEntriesChangedExternally;
- (id)_favoritesMappingLocked;
- (id)_fetchContactForId:(id)arg1;
- (void)_locked_createFavorites;
- (id)_mappedFavoriteContacts;
- (void)_queue_findContactWithFullName:(id)arg1 block:(id /* block */)arg2;
- (void)_queue_flushCNFavoritesReload;
- (void)_queue_reloadContacts;
- (void)_queued_flushCNFavorites;
- (void)_queued_loadAllContacts;
- (void)_queued_loadFavoriteContacts;
- (void)_setupNotifications;
- (void)_tearDownNotifications;
- (id)abbreviatedNameForContact:(id)arg1;
- (bool)checkValidityOfContact:(id)arg1 block:(id /* block */)arg2;
- (id)computeNonFavoriteAllContactsWithCount:(unsigned long long)arg1;
- (id)contactForId:(id)arg1;
- (bool)contactIdentifierIsFavorited:(id)arg1;
- (void)dealloc;
- (id)favoriteContacts;
- (void)findContactWithFullName:(id)arg1 block:(id /* block */)arg2;
- (id)firstNonFavoriteAllContact;
- (id)fullNameForContact:(id)arg1;
- (id)init;
- (id)nonFavoriteAllContactsWithCount:(unsigned long long)arg1;
- (void)setupNotificationsIfNecessary;
- (id)shortNameForContact:(id)arg1;

@end
