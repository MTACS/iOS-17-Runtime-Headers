
@interface MLE5ExecutionStreamOperation : NSObject {
    NSError * _asyncSubmissionError;
    struct unique_ptr<e5rt_async_event, MLE5ObjectDeleter<e5rt_async_event>> { 
        struct __compressed_pair<e5rt_async_event *, MLE5ObjectDeleter<e5rt_async_event>> { 
            struct e5rt_async_event {} *__value_; 
        } __ptr_; 
    }  _cachedWaitEvent;
    NSString * _debugLabel;
    NSString * _functionName;
    <MLFeatureProvider> * _inputFeatures;
    NSArray * _inputPorts;
    NSMutableArray * _inputPortsRequiringCopy;
    MLModelConfiguration * _modelConfiguration;
    MLModelDescription * _modelDescription;
    unsigned long long  _modelSignpostId;
    struct e5rt_execution_stream_operation { } * _operationHandle;
    NSArray * _outputPorts;
    MLPixelBufferPool * _pixelBufferPool;
    MLE5ProgramLibrary * _programLibrary;
    NSString * _shapeHash;
    long long  _state;
    IOSurfaceSharedEventListener * _waitEventListener;
}

@property (nonatomic, retain) NSError *asyncSubmissionError;
@property (nonatomic, readonly, copy) NSString *debugLabel;
@property (readonly, copy) NSString *functionName;
@property (nonatomic, retain) <MLFeatureProvider> *inputFeatures;
@property (nonatomic, copy) NSArray *inputPorts;
@property (nonatomic, readonly) NSMutableArray *inputPortsRequiringCopy;
@property (nonatomic, readonly) MLModelConfiguration *modelConfiguration;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly) unsigned long long modelSignpostId;
@property (nonatomic) struct e5rt_execution_stream_operation { }*operationHandle;
@property (nonatomic, readonly) <MLFeatureProvider> *outputFeatures;
@property (nonatomic, copy) NSArray *outputPorts;
@property (nonatomic, retain) MLPixelBufferPool *pixelBufferPool;
@property (nonatomic, readonly) MLE5ProgramLibrary *programLibrary;
@property (copy) NSString *shapeHash;
@property (nonatomic) long long state;
@property (nonatomic, readonly) IOSurfaceSharedEventListener *waitEventListener;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_bindCompletionSyncPointDirectlyIfPossile:(id)arg1;
- (bool)_bindInputFeaturesAndWaitEvents:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)_bindInputPortsWithFeatures:(id)arg1 error:(id*)arg2;
- (bool)_bindOutputPortsWithOptions:(id)arg1 error:(id*)arg2;
- (void)_bindWaitEventsDirectly:(id)arg1;
- (void)_bindWaitEventsWithCopies:(id)arg1;
- (struct e5rt_execution_stream_operation { }*)_createOperationAndReturnError:(id*)arg1;
- (struct e5rt_execution_stream_operation { }*)_createOperationWithRetryCount:(long long)arg1 error:(id*)arg2;
- (id)_inputPortNames;
- (id)_newArrayOfUnboundedInputPortsForPortNames:(id)arg1 featureDescriptionsByName:(id)arg2 error:(id*)arg3;
- (id)_newArrayOfUnboundedOutputPortsForPortNames:(id)arg1 featureDescriptionsByName:(id)arg2 error:(id*)arg3;
- (id)_outputPortNames;
- (bool)_runInputPortCopiesAndReturnError:(id*)arg1;
- (id)asyncSubmissionError;
- (void)dealloc;
- (id)debugLabel;
- (id)functionName;
- (id)initWithProgramLibrary:(id)arg1 functionName:(id)arg2 modelDescription:(id)arg3 configuration:(id)arg4 debugLabel:(id)arg5 modelSignpostId:(unsigned long long)arg6;
- (id)inputFeatures;
- (id)inputPorts;
- (id)inputPortsRequiringCopy;
- (id)modelConfiguration;
- (id)modelDescription;
- (unsigned long long)modelSignpostId;
- (struct e5rt_execution_stream_operation { }*)operationHandle;
- (id)outputFeatures;
- (id)outputPorts;
- (id)pixelBufferPool;
- (bool)preloadAndReturnError:(id*)arg1;
- (bool)prepareForAsyncSubmission:(id)arg1 error:(id*)arg2;
- (bool)prepareWithOptions:(id)arg1 error:(id*)arg2;
- (id)programLibrary;
- (void)reset;
- (void)setAsyncSubmissionError:(id)arg1;
- (void)setInputFeatures:(id)arg1;
- (void)setInputPorts:(id)arg1;
- (void)setOperationHandle:(struct e5rt_execution_stream_operation { }*)arg1;
- (void)setOutputPorts:(id)arg1;
- (void)setPixelBufferPool:(id)arg1;
- (void)setShapeHash:(id)arg1;
- (void)setState:(long long)arg1;
- (id)shapeHash;
- (long long)state;
- (id)waitEventListener;

@end
