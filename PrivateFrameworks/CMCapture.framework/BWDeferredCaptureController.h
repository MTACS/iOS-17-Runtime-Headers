
@interface BWDeferredCaptureController : BWStillImageProcessorController <BWDeferredCaptureControllerInputUpdatesDelegate> {
    BWDeferredCaptureContainer * _captureContainer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)usesCustomProcessingFlow;

- (void)_addInferences;
- (void)cancelProcessing;
- (id)initWithConfiguration:(id)arg1;
- (void)input:(id)arg1 encounteredProcessingError:(int)arg2;
- (void)inputReceivedIntermediate:(id)arg1;
- (int)prepare;
- (int)process;
- (id)requestForInput:(id)arg1 delegate:(id)arg2 errOut:(int*)arg3;
- (void)reset;

@end
