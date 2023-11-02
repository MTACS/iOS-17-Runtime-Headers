
@interface PADAlgorithmFacePoseInput : NSObject {
    NSArray * _faceprint;
    NSArray * _landmarks;
    double  _pitch;
    double  _roll;
    double  _smile;
    double  _yaw;
}

@property (nonatomic, retain) NSArray *faceprint;
@property (nonatomic, retain) NSArray *landmarks;
@property (nonatomic) double pitch;
@property (nonatomic) double roll;
@property (nonatomic) double smile;
@property (nonatomic) double yaw;

- (void).cxx_destruct;
- (id)faceprint;
- (id)landmarks;
- (double)pitch;
- (double)roll;
- (void)setFaceprint:(id)arg1;
- (void)setLandmarks:(id)arg1;
- (void)setPitch:(double)arg1;
- (void)setRoll:(double)arg1;
- (void)setSmile:(double)arg1;
- (void)setYaw:(double)arg1;
- (double)smile;
- (double)yaw;

@end
