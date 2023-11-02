
@interface BWDeferredCaptureControllerRequest : BWStillImageProcessorControllerRequest {
    int  _err;
}

@property (nonatomic) int err;

- (int)err;
- (bool)readyForProcessing;
- (void)setErr:(int)arg1;

@end
