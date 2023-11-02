
@interface CADCoreSpotlightIndex : NSObject <CADSpotlightIndex> {
    CSSearchableIndex * _index;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)deleteAllSearchableItemsForBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)indexSearchableItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithBundleID:(id)arg1;

@end
