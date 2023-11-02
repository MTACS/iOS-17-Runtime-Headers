
@interface BWRedEyeReductionController : BWStillImageProcessorController <BWRedEyeReductionControllerInputDelegate> {
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    NSDictionary * _redEyeReductionParametersByPortType;
    CIDualRedEyeRepairSession * _redEyeRepairSession;
    NSMutableArray * _requestQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (void)prewarm;

- (void)cancelProcessing;
- (void)dealloc;
- (void)didReceiveAllFramesForInput:(id)arg1;
- (void)didReceiveFrameForInput:(id)arg1;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (unsigned long long)type;

@end
