
@interface PLConstraintsDirector : NSObject <PFCameraViewfinderSessionWatcherDelegate> {
    NSObject<OS_dispatch_source> * _bonusTimer;
    PFCameraViewfinderSessionWatcher * _cameraWatcher;
    bool  _deferredProcessingOngoing;
    long long  _faceQuickClassificationRequestID;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    int  _outstandingCaptures;
    NSURL * _photoLibraryURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_requestMediaAnalysisQuickFaceProcessing;
- (void)cameraWatcherDidChangeState:(id)arg1;
- (void)informAssetDeferredProcessingOccurring;
- (void)informAssetsFinishedDeferredProcessing;
- (void)informPhotoCapturedThatNeedsDeferredProcessing;
- (void)informPhotoCapturedThatNeedsQuickFace;
- (id)initWithPhotoLibraryURL:(id)arg1;

@end
