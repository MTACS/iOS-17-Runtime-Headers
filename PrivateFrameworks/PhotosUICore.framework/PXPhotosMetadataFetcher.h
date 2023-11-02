
@interface PXPhotosMetadataFetcher : NSObject <PXPhotoLibraryUIInternalChangeObserver> {
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _queue_OIDsByDerivedFacts;
    NSMutableDictionary * _queue_fetchResultByFetchedFact;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

+ (id)sharedFetcherForPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (id)_predicateForFact:(unsigned long long)arg1;
- (id)_queue_fetchResultForFact:(unsigned long long)arg1 allowFetch:(bool)arg2;
- (id)_queue_oidsForFacts:(unsigned long long)arg1 allowFetch:(bool)arg2;
- (bool)getAssetCounts:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg1 guestAssetCounts:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg2 forFetchResult:(id)arg3 allowFetch:(bool)arg4;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)photoLibrary;
- (void)photoLibraryWillChange:(id)arg1;

@end
