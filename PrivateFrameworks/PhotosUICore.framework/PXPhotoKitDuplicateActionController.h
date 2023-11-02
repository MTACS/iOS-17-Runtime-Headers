
@interface PXPhotoKitDuplicateActionController : NSObject {
    PXDuplicateAssetsAction * _action;
    NSProgress * _progress;
    PXActivityProgressController * _progressController;
    NSUndoManager * _undoManager;
}

@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, retain) PXActivityProgressController *progressController;
@property (nonatomic, readonly) bool shouldUseAlertController;
@property (nonatomic, readonly) NSUndoManager *undoManager;

+ (void)_presentDuplicationWasInterruptedWithItemCount:(long long)arg1 hasPhotos:(bool)arg2 hasVideos:(bool)arg3;

- (void).cxx_destruct;
- (void)_checkHasPhotos:(bool*)arg1 hasVideos:(bool*)arg2;
- (void)_finishedDuplicationWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_presentAlertWithError:(id)arg1;
- (void)_progressFractionCompletedDidChange;
- (bool)_validateOriginalAssetResourcesForDuplicateAction:(long long)arg1;
- (id)alertConfigurationForDuplicateActionWithUserConfirmationHandler:(id /* block */)arg1;
- (void)configureAlertConfiguration:(id)arg1 withUserConfirmationHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithSelectionSnapshot:(id)arg1 undoManager:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performDuplicateAction:(long long)arg1 newStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 completionHandler:(id /* block */)arg3;
- (id)progress;
- (id)progressController;
- (void)setProgress:(id)arg1;
- (void)setProgressController:(id)arg1;
- (bool)shouldUseAlertController;
- (id)undoManager;

@end
