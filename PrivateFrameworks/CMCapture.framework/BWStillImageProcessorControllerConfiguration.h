
@interface BWStillImageProcessorControllerConfiguration : NSObject {
    bool  _deferredProcessingEnabled;
    unsigned int  _figThreadPriority;
    BWInferenceScheduler * _inferenceScheduler;
    <MTLCommandQueue> * _metalCommandQueue;
    NSDictionary * _sensorConfigurationsByPortType;
    int  _stillImageProcessingMode;
}

@property (nonatomic) bool deferredProcessingEnabled;
@property (nonatomic) unsigned int figThreadPriority;
@property (nonatomic, retain) BWInferenceScheduler *inferenceScheduler;
@property (nonatomic, retain) <MTLCommandQueue> *metalCommandQueue;
@property (nonatomic, retain) NSDictionary *sensorConfigurationsByPortType;
@property (nonatomic) int stillImageProcessingMode;

- (void)dealloc;
- (bool)deferredProcessingEnabled;
- (unsigned int)figThreadPriority;
- (id)inferenceScheduler;
- (id)metalCommandQueue;
- (id)sensorConfigurationsByPortType;
- (void)setDeferredProcessingEnabled:(bool)arg1;
- (void)setFigThreadPriority:(unsigned int)arg1;
- (void)setInferenceScheduler:(id)arg1;
- (void)setMetalCommandQueue:(id)arg1;
- (void)setSensorConfigurationsByPortType:(id)arg1;
- (void)setStillImageProcessingMode:(int)arg1;
- (int)stillImageProcessingMode;

@end
