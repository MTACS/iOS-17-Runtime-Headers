
@interface BWStillImageProcessorControllerInput : NSObject {
    BWStillImageCaptureStreamSettings * _captureStreamSettings;
    <BWStillImageProcessorControllerInputUpdatesDelegate> * _delegate;
    NSMutableDictionary * _outputSampleBufferRoutersByBufferType;
    BWStillImageSettings * _settings;
}

@property (nonatomic, readonly) BWStillImageCaptureSettings *captureSettings;
@property (nonatomic, readonly) BWStillImageCaptureStreamSettings *captureStreamSettings;
@property (nonatomic, retain) <BWStillImageProcessorControllerInputUpdatesDelegate> *delegate;
@property (nonatomic, readonly) bool isMaster;
@property (nonatomic, readonly) NSString *portType;
@property (nonatomic, readonly) BWStillImageProcessingSettings *processingSettings;
@property (nonatomic, readonly) FigCaptureStillImageSettings *settings;
@property (nonatomic, readonly) BWStillImageSettings *stillImageSettings;

- (void)addBypassedProcessorType:(unsigned long long)arg1 forBufferTypes:(id)arg2;
- (void)addOutputSampleBufferRouter:(id /* block */)arg1 forBufferTypes:(id)arg2;
- (id)captureSettings;
- (id)captureStreamSettings;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithSettings:(id)arg1 portType:(id)arg2;
- (bool)isMaster;
- (id)outputSampleBufferRouterForBufferType:(unsigned long long)arg1;
- (id)portType;
- (id)processingSettings;
- (void)setDelegate:(id)arg1;
- (id)settings;
- (id)stillImageSettings;

@end
