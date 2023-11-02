
@interface TPFavoritesController : NSObject <TUCallProviderManagerDelegate> {
    TUCallProviderManager * _callProviderManager;
    NSObject<OS_dispatch_queue> * _completionDispatchQueue;
    NSCache * _contactCache;
    CNContactStore * _contactStore;
    NSArray * _favoritesEntries;
    CNFavorites * _favoritesManager;
    unsigned long long  _prefetchCount;
    NSObject<OS_dispatch_queue> * _serialDispatchQueue;
    NSCache * _transportNameCache;
}

@property (nonatomic, readonly) TUCallProviderManager *callProviderManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (nonatomic, readonly) NSCache *contactCache;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *favoritesEntries;
@property (nonatomic, readonly) CNFavorites *favoritesManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long prefetchCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSCache *transportNameCache;

- (void).cxx_destruct;
- (unsigned long long)absoluteIndexForIndex:(unsigned long long)arg1;
- (void)addEntry:(id)arg1;
- (id)callProviderManager;
- (bool)canAddEntry;
- (id)completionDispatchQueue;
- (id)contactCache;
- (id)contactCacheKeyForFavoritesEntry:(id)arg1;
- (id)contactForFavoritesEntry:(id)arg1;
- (id)contactForFavoritesEntry:(id)arg1 keyDescriptors:(id)arg2;
- (id)contactStore;
- (void)dealloc;
- (id)favoritesEntries;
- (id)favoritesManager;
- (id)fetchContactForFavoritesEntry:(id)arg1;
- (id)fetchContactForFavoritesEntry:(id)arg1 keyDescriptors:(id)arg2;
- (id)fetchFavoritesEntries;
- (id)fetchTransportNameForFavoritesEntry:(id)arg1;
- (void)handleContactsFavoritesDidChangeNotification:(id)arg1;
- (id)init;
- (id)initWithContactStore:(id)arg1 prefetchCount:(unsigned long long)arg2;
- (void)moveEntryAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (unsigned long long)prefetchCount;
- (void)providersChangedForProviderManager:(id)arg1;
- (void)removeEntriesAtIndexes:(id)arg1;
- (id)serialDispatchQueue;
- (void)setFavoritesEntries:(id)arg1;
- (id)transportNameCache;
- (id)transportNameCacheKeyForFavoritesEntry:(id)arg1;
- (id)transportNameForFavoritesEntry:(id)arg1;

@end
