
@interface ICCDCSIReindexer : NSObject <ICReindexing> {
    NSMutableArray * _registeredDelegates;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *registeredDelegates;
@property (readonly) Class superclass;

+ (id)searchableIndex;
+ (id)sharedReindexer;

- (void).cxx_destruct;
- (void)_reindexSearchableItemsWithIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteAllSearchableItemsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)registerCoreDataCoreSpotlightDelegate:(id)arg1;
- (id)registeredDelegates;
- (void)reindexAllSearchableItemsWithCompletionHandler:(id /* block */)arg1;
- (void)reindexSearchableItemsWithObjectIDURIs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setRegisteredDelegates:(id)arg1;
- (void)stopIndexing;
- (void)unregisterCoreDataCoreSpotlightDelegate:(id)arg1;

@end
