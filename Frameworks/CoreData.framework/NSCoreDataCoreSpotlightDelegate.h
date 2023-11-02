
@interface NSCoreDataCoreSpotlightDelegate : NSObject {
    int  __enqueuedOperationCount;
    int  __indexerThrottle;
    NSString * _bundleIdentifier;
    NSManagedObjectContext * _context__;
    NSPersistentStoreCoordinator * _coordinator;
    NSPersistentStoreDescription * _description;
    NSString * _domainIdentifier;
    bool  _enabled;
    NSString * _indexName;
    PFCSSearchableIndexProvider * _indexProvider;
    NSURL * _indexURL;
    NSDictionary * _indexedPropertyNamesByEntity;
    NSString * _protectionClass;
    NSString * _storeIdentifier;
    bool  _usesPrivateIndex;
}

@property (nonatomic, retain) PFCSSearchableIndexProvider *indexProvider;
@property (copy) NSURL *indexURL;
@property (getter=isIndexingEnabled, readonly) bool indexingEnabled;

+ (void)initialize;

- (int)_indexerThrottle;
- (id)attributeSetForObject:(id)arg1;
- (id)bundleIdentifier;
- (void)dealloc;
- (void)deleteSpotlightIndexWithCompletionHandler:(id /* block */)arg1;
- (id)domainIdentifier;
- (id)indexName;
- (id)indexProvider;
- (void)indexSearchableItemsToCurrentHistoryToken;
- (id)indexURL;
- (id)indexedPropertyNamesByEntityNameUsingModel:(id)arg1;
- (id)init;
- (id)initForStoreWithDescription:(id)arg1 coordinator:(id)arg2;
- (id)initForStoreWithDescription:(id)arg1 model:(id)arg2;
- (bool)isIndexingEnabled;
- (id)protectionClass;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (void)setIndexProvider:(id)arg1;
- (void)setIndexURL:(id)arg1;
- (void)startSpotlightIndexing;
- (void)stopSpotlightIndexing;
- (bool)usePrivateIndex;

@end
