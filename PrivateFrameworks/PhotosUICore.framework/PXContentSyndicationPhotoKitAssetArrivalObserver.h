
@interface PXContentSyndicationPhotoKitAssetArrivalObserver : NSObject <PHPhotoLibraryChangeObserver> {
    PHFetchResult * _assetsFetchResult;
    id /* block */  _completionHandler;
    NSSet * _expectedUUIDs;
    PHPhotoLibrary * _photoLibrary;
    NSDate * _waitStartTimestamp;
}

@property (nonatomic, readonly) PHFetchResult *assetsFetchResult;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *expectedUUIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *waitStartTimestamp;

- (void).cxx_destruct;
- (id)assetsFetchResult;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)expectedUUIDs;
- (id)initWithExpectedAssetUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)photoLibrary;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setWaitStartTimestamp:(id)arg1;
- (void)updateWithFetchResult:(id)arg1;
- (void)waitForAssetArrivalsWithCompletion:(id /* block */)arg1;
- (id)waitStartTimestamp;

@end
