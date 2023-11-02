
@interface ARPointCloudSensorData : NSObject <ARSensorData, NSSecureCoding> {
    long long  _cameraPosition;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraTransform;
    NSString * _cameraType;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _extrinsicsToWideSensor;
    ADJasperPointCloud * _pointCloud;
    AVPointCloudData * _pointCloudData;
    long long  _projectorMode;
    double  _timestamp;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _visionCameraTransform;
}

@property (nonatomic, readonly) long long cameraPosition;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraTransform;
@property (nonatomic, readonly) NSString *cameraType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } extrinsicsToWideSensor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ADJasperPointCloud *pointCloud;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } visionCameraTransform;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)cameraPosition;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransform;
- (id)cameraType;
- (void)encodeWithCoder:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })extrinsicsToWideSensor;
- (id)initWithCoder:(id)arg1;
- (id)initWithPointCloudData:(id)arg1 captureFramePerSecond:(long long)arg2 captureDevice:(id)arg3 captureSession:(id)arg4;
- (id)initWithPointCloudData:(id)arg1 projectorMode:(long long)arg2 timestamp:(double)arg3;
- (id)pointCloud;
- (id)pointCloudData;
- (long long)projectorMode;
- (void)setCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setExtrinsicsToWideSensor:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVisionCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (double)timestamp;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })visionCameraTransform;

@end
