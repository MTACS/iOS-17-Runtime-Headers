
@interface DeskCamSessionInputMetadata : NSObject <NSSecureCoding> {
    float  _aspectRatio;
    NSArray * _bodyDetections;
    NSDictionary * _cameraCalibrationDictionary;
    int  _cameraOrientation;
    NSArray * _faceDetections;
    void _gravity;
    int  _sensorID;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timestamp;
}

@property (nonatomic, readonly) float aspectRatio;
@property (nonatomic, readonly) NSArray *bodyDetections;
@property (nonatomic, readonly) NSDictionary *cameraCalibrationDictionary;
@property (nonatomic, readonly) int cameraOrientation;
@property (nonatomic, readonly) NSArray *faceDetections;
@property (nonatomic, readonly) void gravity;
@property (nonatomic, readonly) int sensorID;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createCameraCalibrationDictionary:(id)arg1;
- (void)_parseDetectedObjectsInfo:(id)arg1;
- (float)aspectRatio;
- (id)bodyDetections;
- (id)cameraCalibrationDictionary;
- (int)cameraOrientation;
- (void)encodeWithCoder:(id)arg1;
- (id)faceDetections;
- (void)gravity;
- (id)initWithCoder:(id)arg1;
- (id)initWithDetectedObjectsInfo:(void *)arg1 cameraCalibrationData:(void *)arg2 cameraOrientation:(void *)arg3 timestamp:(void *)arg4 aspectRatio:(void *)arg5 sensorID:(void *)arg6 gravity:(void *)arg7; // needs 7 arg types, found 6: id, id, int, struct { long long x1; int x2; unsigned int x3; long long x4; }, float, int
- (int)sensorID;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;

@end
