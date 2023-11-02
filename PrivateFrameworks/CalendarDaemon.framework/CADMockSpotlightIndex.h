
@interface CADMockSpotlightIndex : NSObject <CADSpotlightIndex> {
    double  _maxArtificialDelay;
    double  _minArtificialDelay;
    CADMockSpotlightIndexProvider * _provider;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_artificialDelay;
- (void)deleteAllSearchableItemsForBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)indexSearchableItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithMinArtificialDelay:(double)arg1 maxArtificialDelay:(double)arg2 provider:(id)arg3;

@end
