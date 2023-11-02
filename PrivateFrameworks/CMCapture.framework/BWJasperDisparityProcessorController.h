
@interface BWJasperDisparityProcessorController : BWStillImageProcessorController <BWJasperDisparityProcessorInputDelegate> {
    ADJasperColorV2Executor * _adStillImageExecutor;
    BWJasperDisparityProcessorControllerConfiguration * _configuration;
    BWJasperDisparityProcessorRequest * _currentRequest;
    struct opaqueCMFormatDescription { } * _depthFormatDescription;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _identityMatrix;
    NSMutableArray * _pointClouds;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pointCloudsLock;
    NSMutableArray * _requestQueue;
    FigStateMachine * _stateMachine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_execute;
- (void)_serviceNextRequest;
- (int)_setupJasperDisparityProcessor;
- (void)_updateStateIfNeeded;
- (void)addPointCloudToTimeMachine:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)cancelProcessing;
- (void)dealloc;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2;
- (bool)finishProcessingCurrentInputNow;
- (id)initWithConfiguration:(id)arg1;
- (void)inputReadyToExecute:(id)arg1;
- (id)jasperPointCloudForColorBuffer:(id)arg1;
- (unsigned long long)type;

@end
