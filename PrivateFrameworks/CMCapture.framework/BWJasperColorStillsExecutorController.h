
@interface BWJasperColorStillsExecutorController : BWStillImageProcessorController <BWJasperColorStillsExecutorInputDelegate> {
    ADJasperColorStillsExecutor * _adStillImageExecutor;
    BWJasperColorStillsExecutorControllerConfiguration * _configuration;
    BWJasperColorStillsExecutorRequest * _currentRequest;
    struct opaqueCMFormatDescription { } * _depthFormatDescription;
    unsigned long long  _engineType;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _identityMatrix;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputROI;
    NSMutableArray * _requestQueue;
    FigStateMachine * _stateMachine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)cancelProcessing;
- (void)dealloc;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2;
- (bool)finishProcessingCurrentInputNow;
- (id)initWithConfiguration:(id)arg1;
- (void)inputReadyToExecute:(id)arg1;
- (unsigned long long)type;

@end
