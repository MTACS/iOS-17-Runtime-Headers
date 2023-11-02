
@interface AVCaptureSynchronizedCameraCalibrationData : AVCaptureSynchronizedData {
    AVCameraCalibrationData * _cameraCalibrationData;
    bool  _cameraCalibrationDataWasDropped;
    long long  _droppedReason;
}

@property (readonly) AVCameraCalibrationData *cameraCalibrationData;
@property (readonly) bool cameraCalibrationDataWasDropped;
@property (readonly) long long droppedReason;

- (id)_initWithCameraCalibrationData:(id)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 cameraCalibrationDataWasDropped:(bool)arg3 droppedReason:(long long)arg4;
- (id)cameraCalibrationData;
- (bool)cameraCalibrationDataWasDropped;
- (void)dealloc;
- (long long)droppedReason;

@end
