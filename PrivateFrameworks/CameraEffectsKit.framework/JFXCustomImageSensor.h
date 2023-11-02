
@interface JFXCustomImageSensor : NSObject <ARSensor> {
    <ARSensorDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)createImageDataFromFrameSet:(id)arg1 captureDevice:(id)arg2 captureSession:(id)arg3 trackedFacesMetadata:(id)arg4 faceObjectsMetadata:(id)arg5;
- (id)delegate;
- (void)outputSensorData:(id)arg1;
- (unsigned long long)providedDataTypes;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end
