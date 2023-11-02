
@interface PLLivePhotoPairingProcessor : PLPairingProcessor

- (id)combinePair:(id)arg1 error:(id*)arg2;
- (id)fetchRequestForLibrary;
- (id)fetchRequestForSortedGroupIDs:(id)arg1;
- (id)firstGroupFromAssets:(id)arg1;
- (id)groupIDForAsset:(id)arg1;
- (id)livePhotoFetchRequestWithPredicate:(id)arg1;

@end
