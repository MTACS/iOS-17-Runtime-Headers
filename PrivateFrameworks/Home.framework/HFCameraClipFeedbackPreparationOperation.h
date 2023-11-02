
@interface HFCameraClipFeedbackPreparationOperation : NSOperation {
    HMCameraClip * _cameraClip;
    id /* block */  _completionHandler;
}

@property (nonatomic, retain) HMCameraClip *cameraClip;
@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)cameraClip;
- (id /* block */)completionHandler;
- (id)initWithCameraClip:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)main;
- (void)setCameraClip:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
