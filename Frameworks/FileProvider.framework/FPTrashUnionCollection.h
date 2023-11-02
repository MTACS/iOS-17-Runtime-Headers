
@interface FPTrashUnionCollection : FPUnionCollection {
    id  _providerDomainChangesToken;
    NSObject<OS_dispatch_queue> * _queue;
    FPQueryCollection * _trashQueryCollection;
}

@property (readonly) FPQueryCollection *trashQueryCollection;

- (void).cxx_destruct;
- (void)fetchTrashItemsFromProvider:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)filterDomains:(id)arg1;
- (id)initWithQueryCollection:(id)arg1;
- (id)scopedSearchQuery;
- (void)setAllowedFileTypes:(id)arg1;
- (void)setDesiredNumberOfItems:(id)arg1;
- (void)setExcludedFileTypes:(id)arg1;
- (id)trashQueryCollection;
- (void)updateCollectionsForDomains:(id)arg1;

@end
