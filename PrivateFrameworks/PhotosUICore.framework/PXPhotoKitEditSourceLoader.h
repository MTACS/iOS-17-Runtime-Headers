
@interface PXPhotoKitEditSourceLoader : NSObject <PXEditSourceLoader> {
    PHAsset * _asset;
    long long  _baseVersion;
    PICompositionController * _compositionController;
    PLEditSource * _editSource;
    NSProgress * _editSourceCreationProgress;
    NSError * _error;
    NSString * _livePhotoPairingIdentifier;
    NSNumber * _loadDuration;
    NSObject<OS_dispatch_queue> * _loadingQueue;
    unsigned long long  _loadingQueue_imageRequestID;
    NSDate * _mainQueue_loadingStartDate;
    PICompositionController * _originalCompositionController;
    NSProgress * _progress;
}

@property (nonatomic, readonly) PLEditSource *activeEditSource;
@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) long long baseVersion;
@property (nonatomic, readonly, copy) PICompositionController *compositionController;
@property (nonatomic, readonly, copy) NSString *contentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PLEditSource *editSource;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *livePhotoPairingIdentifier;
@property (nonatomic, readonly) NSNumber *loadDuration;
@property (nonatomic, readonly, copy) PICompositionController *originalCompositionController;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelContentInputRequest;
- (void)_handleCancellation;
- (void)_handleContentEditingInputRequestCompletion:(id)arg1 info:(id)arg2 asset:(id)arg3;
- (void)_mainQueue_handleEditSource:(id)arg1 compositionController:(id)arg2 originalCompositionController:(id)arg3 error:(id)arg4;
- (void)_resetProgress;
- (id)activeEditSource;
- (id)asset;
- (long long)baseVersion;
- (void)beginLoading;
- (id)compositionController;
- (id)contentIdentifier;
- (id)editSource;
- (id)error;
- (id)initWithAsset:(id)arg1;
- (id)livePhotoPairingIdentifier;
- (id)loadDuration;
- (id)originalCompositionController;
- (id)progress;

@end
