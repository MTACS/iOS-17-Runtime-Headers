
@interface ARDepthSensor : ARImageSensor <AVCapturePointCloudDataOutputDelegate> {
    NSMutableDictionary * _extrinsicsMap;
    AVCapturePointCloudDataOutput * _pointCloudOutput;
    NSString * _projectorMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ARDepthSensorSettings *mutableDepthSettings;
@property (nonatomic, retain) AVCapturePointCloudDataOutput *pointCloudOutput;
@property (nonatomic, retain) NSString *projectorMode;
@property (nonatomic, readonly, copy) ARDepthSensorSettings *settings;
@property (readonly) Class superclass;

+ (void)registerSignPostForPointCloudData:(id)arg1;

- (void).cxx_destruct;
- (void)_configureProjectorModeForDevice:(id)arg1;
- (bool)canReconfigure:(id)arg1;
- (id)configureCaptureSession;
- (id)description;
- (id)mutableDepthSettings;
- (void)pointCloudDataOutput:(id)arg1 didDropPointCloudData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(id)arg4 reason:(long long)arg5;
- (void)pointCloudDataOutput:(id)arg1 didOutputPointCloudData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(id)arg4;
- (id)pointCloudOutput;
- (id)prepareToStart;
- (id)projectorMode;
- (unsigned long long)providedDataTypes;
- (void)reconfigure:(id)arg1;
- (void)setPointCloudOutput:(id)arg1;
- (void)setProjectorMode:(id)arg1;
- (void)start;
- (void)stop;

@end
