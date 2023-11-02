
@interface PESaveRequest : NSObject {
    bool  _applyVideoOrientationAsMetadata;
    double  _beginTimestamp;
    id /* block */  _completionHandler;
    PICompositionController * _compositionController;
    PHContentEditingOutput * _contentEditingOutput;
    long long  _currentState;
    int  _identifier;
    PHAsset * _photo;
    unsigned short  _videoComplementState;
    NSProgress * _videoExportProgress;
}

@property (nonatomic) bool applyVideoOrientationAsMetadata;
@property (nonatomic, readonly, copy) PICompositionController *compositionController;
@property (nonatomic, readonly) PHContentEditingOutput *contentEditingOutput;
@property (nonatomic, readonly) long long currentState;
@property (nonatomic, readonly) int identifier;
@property (nonatomic, readonly) PHAsset *photo;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) bool supportsProgress;
@property (nonatomic, readonly) unsigned short videoComplementState;

- (void).cxx_destruct;
- (void)_finishWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_performRevertToOriginalOperation;
- (void)_performSaveContentEditingOutput;
- (void)_performSaveEditsOperation;
- (void)_transitionToState:(long long)arg1;
- (bool)applyVideoOrientationAsMetadata;
- (void)beginSaveOperationWithCompletionHandler:(id /* block */)arg1;
- (void)cancelSaveOperation;
- (id)compositionController;
- (id)contentEditingOutput;
- (long long)currentState;
- (int)identifier;
- (id)init;
- (id)initWithPhoto:(id)arg1 compositionController:(id)arg2 contentEditingOutput:(id)arg3 livePhotoState:(unsigned short)arg4 applyVideoOrientationAsMetadata:(bool)arg5;
- (id)initWithPhoto:(id)arg1 contentEditingOutput:(id)arg2 livePhotoState:(unsigned short)arg3 applyVideoOrientationAsMetadata:(bool)arg4;
- (id)initWithPhotoToRevertToOriginal:(id)arg1 applyVideoOrientationAsMetadata:(bool)arg2;
- (id)photo;
- (double)progress;
- (void)setApplyVideoOrientationAsMetadata:(bool)arg1;
- (bool)supportsProgress;
- (unsigned short)videoComplementState;

@end
