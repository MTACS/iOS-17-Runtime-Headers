
@interface JDJasperCameraSystemCalibrationData : NSObject {
    JDCameraCalibrationData * _fullSensorSuperWideCamera;
    JDMutableCameraCalibrationData * _jasperCamera;
    int  _jasperChipRevision;
    JDJasperModuleCalibrationData * _jasperModule;
    int  _platform;
}

@property (nonatomic, readonly) JDCameraCalibrationData *fullSensorSuperWideCamera;
@property (nonatomic, readonly) JDCameraCalibrationData *jasperCamera;
@property (nonatomic, readonly) int jasperChipRevision;
@property (nonatomic, readonly) JDJasperModuleCalibrationData *jasperModule;
@property (nonatomic, readonly) int platform;

+ (id)calibrationDataWithJasperCalib:(id)arg1 platformId:(int)arg2 sensorVersion:(int)arg3;
+ (id)calibrationDataWithJasperCalibDataDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)fullSensorSuperWideCamera;
- (id)getSuperWideCameraCalibrationForRawSensorSize:(struct CGSize { double x1; double x2; })arg1 crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scaledTo:(struct CGSize { double x1; double x2; })arg3;
- (id)initWithJasperModuleCalibration:(id)arg1 platformId:(int)arg2 sensorVersion:(int)arg3;
- (id)jasperCamera;
- (int)jasperChipRevision;
- (id)jasperModule;
- (int)platform;
- (void)replaceJasperDistortionModelWithWarperMesh:(id)arg1 width:(long long)arg2 height:(long long)arg3;

@end
