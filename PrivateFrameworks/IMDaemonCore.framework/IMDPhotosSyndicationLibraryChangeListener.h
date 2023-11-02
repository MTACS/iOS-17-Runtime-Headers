
@interface IMDPhotosSyndicationLibraryChangeListener : NSObject <PHPhotoLibraryChangeObserver> {
    PHFetchOptions * _analysisFetchOptions;
    NSObject<OS_dispatch_queue> * _changeObservationQueue;
    PHPhotoLibrary * _syndicationLibrary;
}

@property (nonatomic, readonly) PHFetchOptions *analysisFetchOptions;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *changeObservationQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PHPhotoLibrary *syndicationLibrary;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)analysisFetchOptions;
- (id)changeObservationQueue;
- (void)dealloc;
- (id)init;
- (void)photoLibraryDidChange:(id)arg1;
- (void)startListening;
- (void)stopListening;
- (id)syndicationLibrary;

@end
