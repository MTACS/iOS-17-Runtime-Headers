
@interface PLCTMPairingProcessor : PLPairingProcessor {
    bool  _deferredProcessingNeeded;
}

@property (nonatomic) bool deferredProcessingNeeded;

- (bool)_copyResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 error:(id*)arg3;
- (void)_installSocResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 referencedResourceURLs:(id)arg3;
- (id)_mapResourcesFromSoc:(id)arg1 toPrimary:(id)arg2 error:(id*)arg3;
- (id)combinePair:(id)arg1 error:(id*)arg2;
- (id)ctmFetchRequestWithPredicate:(id)arg1;
- (bool)deferredProcessingNeeded;
- (id)fetchRequestForLibrary;
- (id)fetchRequestForSortedGroupIDs:(id)arg1;
- (id)firstGroupFromAssets:(id)arg1;
- (id)groupIDForAsset:(id)arg1;
- (void)setDeferredProcessingIfNescessaryForAsset:(id)arg1;
- (void)setDeferredProcessingNeeded:(bool)arg1;

@end
