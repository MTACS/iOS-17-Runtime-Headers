
@interface BWStillImageProcessorController : NSObject <BWStillImageProcessorControllerInputUpdatesDelegate> {
    BWStillImageProcessorControllerConfiguration * _configuration;
    BWStillImageProcessorControllerRequest * _currentRequest;
    NSString * _name;
    NSMutableArray * _requestQueue;
    FigStateMachine * _stateMachine;
    unsigned long long  _type;
}

@property (nonatomic, readonly) BWStillImageProcessorControllerConfiguration *configuration;
@property (nonatomic, readonly) BWStillImageProcessorControllerRequest *currentRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CMIExternalMemoryDescriptor *externalMemoryDescriptor;
@property (nonatomic, retain) CMIExternalMemoryResource *externalMemoryResource;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MetalImageBufferProcessor> *metalImageBufferProcessor;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsExternalMemoryResource;
@property (nonatomic, readonly) unsigned long long type;

+ (void)initialize;
+ (bool)usesCustomProcessingFlow;

- (void)_completeCurrentRequestAndInitiateNextRequest;
- (void)_prepare;
- (void)_process;
- (void)_reset;
- (void)_updateStateIfNeeded;
- (void)cancelProcessing;
- (id)configuration;
- (id)currentRequest;
- (void)currentRequestChanged;
- (void)dealloc;
- (int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2;
- (id)externalMemoryDescriptor;
- (id)externalMemoryResource;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 configuration:(id)arg3;
- (id)metalImageBufferProcessor;
- (id)name;
- (int)prepare;
- (int)process;
- (id)requestForInput:(id)arg1 delegate:(id)arg2 errOut:(int*)arg3;
- (void)reset;
- (void)setExternalMemoryResource:(id)arg1;
- (bool)supportsExternalMemoryResource;
- (unsigned long long)type;

@end
