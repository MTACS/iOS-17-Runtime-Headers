
@interface ARWorldTrackingOptions : NSObject <NSCopying> {
    NSMutableDictionary * _activeVideoFormatsMap;
    NSObject<OS_dispatch_semaphore> * _activeVideoFormatsSemaphore;
    bool  _alwaysUsePrimaryCameraForTracking;
    bool  _collaborationEnabled;
    bool  _depthBuffersWillBeProvided;
    bool  _deterministicMode;
    NSString * _deviceModel;
    bool  _disableMLRelocalization;
    ARImageSensorSettings * _imageSensorSettings;
    ARImageSensorSettings * _imageSensorSettingsForUltraWide;
    ARWorldMap * _initialWorldMap;
    bool  _lowQosSchedulingEnabled;
    double  _minVergenceAngle;
    bool  _mlModelEnabled;
    bool  _planeBundleAdjustmentEnabled;
    unsigned long long  _planeDetection;
    id /* block */  _planeDetectionPoseUpdateCallback;
    id /* block */  _planeDetectionVIOPoseCallback;
    bool  _planeEstimationShouldUseJasperData;
    bool  _recordForGeoTracking;
    bool  _relocalizationEnabled;
    unsigned long long  _sceneReconstruction;
    ARSceneReconstructionOptions * _sceneReconstructionOptions;
    id /* block */  _singleShotPlaneCallback;
    NSString * _slamConfigurationPreset;
    id /* block */  _trackedPlaneCallback;
    NSNumber * _vioSessionID;
    bool  _visionDataWillBeReplayed;
}

@property (nonatomic, readonly) NSDictionary *activeVideoFormatsMap;
@property (nonatomic) bool alwaysUsePrimaryCameraForTracking;
@property (getter=isCollaborationEnabled, nonatomic) bool collaborationEnabled;
@property (nonatomic) bool depthBuffersWillBeProvided;
@property (nonatomic) bool deterministicMode;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic) bool disableMLRelocalization;
@property (nonatomic, copy) ARImageSensorSettings *imageSensorSettings;
@property (nonatomic, copy) ARImageSensorSettings *imageSensorSettingsForUltraWide;
@property (nonatomic, copy) ARWorldMap *initialWorldMap;
@property (nonatomic) bool lowQosSchedulingEnabled;
@property (nonatomic) double minVergenceAngle;
@property (nonatomic) bool mlModelEnabled;
@property (nonatomic) bool planeBundleAdjustmentEnabled;
@property (nonatomic) unsigned long long planeDetection;
@property (nonatomic, copy) id /* block */ planeDetectionPoseUpdateCallback;
@property (nonatomic, copy) id /* block */ planeDetectionVIOPoseCallback;
@property (nonatomic) bool planeEstimationShouldUseJasperData;
@property (nonatomic) bool recordForGeoTracking;
@property (nonatomic) bool relocalizationEnabled;
@property (nonatomic) unsigned long long sceneReconstruction;
@property (nonatomic, retain) ARSceneReconstructionOptions *sceneReconstructionOptions;
@property (nonatomic, copy) id /* block */ singleShotPlaneCallback;
@property (nonatomic, copy) NSString *slamConfiguration;
@property (nonatomic, copy) id /* block */ trackedPlaneCallback;
@property (nonatomic, retain) NSNumber *vioSessionID;
@property (nonatomic) bool visionDataWillBeReplayed;

- (void).cxx_destruct;
- (id)activeVideoFormatsMap;
- (bool)alwaysUsePrimaryCameraForTracking;
- (unsigned int)cameraIdForCaptureDeviceType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)createSLAMCalibration:(struct CV3DSLAMCalibration {}**)arg1;
- (void)createSLAMConfig:(struct CV3DSLAMConfig {}**)arg1 calibration:(struct CV3DSLAMCalibration { }*)arg2;
- (bool)depthBuffersWillBeProvided;
- (bool)deterministicMode;
- (id)deviceModel;
- (bool)disableMLRelocalization;
- (id)imageSensorSettings;
- (id)imageSensorSettingsForUltraWide;
- (id)init;
- (id)initWithImageSensorSettings:(id)arg1;
- (id)initialWorldMap;
- (bool)isCollaborationEnabled;
- (bool)isEqual:(id)arg1;
- (bool)lowQosSchedulingEnabled;
- (double)minVergenceAngle;
- (bool)mlModelEnabled;
- (bool)planeBundleAdjustmentEnabled;
- (unsigned long long)planeDetection;
- (id /* block */)planeDetectionPoseUpdateCallback;
- (id /* block */)planeDetectionVIOPoseCallback;
- (bool)planeEstimationShouldUseJasperData;
- (bool)recordForGeoTracking;
- (bool)relocalizationEnabled;
- (unsigned long long)sceneReconstruction;
- (id)sceneReconstructionOptions;
- (void)setAlwaysUsePrimaryCameraForTracking:(bool)arg1;
- (void)setCollaborationEnabled:(bool)arg1;
- (void)setDepthBuffersWillBeProvided:(bool)arg1;
- (void)setDeterministicMode:(bool)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDisableMLRelocalization:(bool)arg1;
- (void)setImageSensorSettings:(id)arg1;
- (void)setImageSensorSettingsForUltraWide:(id)arg1;
- (void)setInitialWorldMap:(id)arg1;
- (void)setLowQosSchedulingEnabled:(bool)arg1;
- (void)setMinVergenceAngle:(double)arg1;
- (void)setMlModelEnabled:(bool)arg1;
- (void)setPlaneBundleAdjustmentEnabled:(bool)arg1;
- (void)setPlaneDetection:(unsigned long long)arg1;
- (void)setPlaneDetectionPoseUpdateCallback:(id /* block */)arg1;
- (void)setPlaneDetectionVIOPoseCallback:(id /* block */)arg1;
- (void)setPlaneEstimationShouldUseJasperData:(bool)arg1;
- (void)setRecordForGeoTracking:(bool)arg1;
- (void)setRelocalizationEnabled:(bool)arg1;
- (void)setSceneReconstruction:(unsigned long long)arg1;
- (void)setSceneReconstructionOptions:(id)arg1;
- (void)setSingleShotPlaneCallback:(id /* block */)arg1;
- (void)setSlamConfiguration:(id)arg1;
- (void)setTrackedPlaneCallback:(id /* block */)arg1;
- (void)setVioSessionID:(id)arg1;
- (void)setVisionDataWillBeReplayed:(bool)arg1;
- (int)setupCameraCalibration:(struct CV3DSLAMCalibration {}**)arg1 forImageSensorSettings:(id)arg2 deviceModel:(int)arg3;
- (bool)shouldUseUltraWide;
- (id /* block */)singleShotPlaneCallback;
- (id)slamConfiguration;
- (id /* block */)trackedPlaneCallback;
- (void)updateCameraMap;
- (id)vioSessionID;
- (bool)visionDataWillBeReplayed;

@end