
@interface PVFaceDetection : NSObject {
    long long  _ID;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    long long  _detectionOrientation;
    AVMetadataFaceObject * _faceObject;
    bool  _hasRollAngle;
    bool  _hasYawAngle;
    double  _rollAngleInDegrees;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
    double  _yawAngleInDegrees;
}

@property (nonatomic, readonly) long long ID;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly) long long detectionOrientation;
@property (nonatomic, readonly, retain) AVMetadataFaceObject *faceObject;
@property (nonatomic, readonly) bool hasRollAngle;
@property (nonatomic, readonly) bool hasYawAngle;
@property (nonatomic, readonly) double rollAngleInDegrees;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic, readonly) double yawAngleInDegrees;

+ (id)faceDetection:(long long)arg1 :(bool)arg2 :(double)arg3 :(bool)arg4 :(double)arg5 :(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 :(long long)arg7 :(struct { long long x1; int x2; unsigned int x3; long long x4; })arg8 :(id)arg9;

- (void).cxx_destruct;
- (long long)ID;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)debugDescription;
- (id)description;
- (long long)detectionOrientation;
- (id)faceObject;
- (bool)hasRollAngle;
- (bool)hasYawAngle;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFaceDetection:(id)arg1;
- (double)rollAngleInDegrees;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (double)yawAngleInDegrees;

@end
