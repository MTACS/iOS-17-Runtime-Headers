
@interface VNFaceLegacyFaceCore : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding> {
    double  _faceAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceBoundingBox;
    struct CGPoint { 
        double x; 
        double y; 
    }  _faceCenter;
    double  _faceSize;
    NSDictionary * _features;
    struct CGPoint { 
        double x; 
        double y; 
    }  _leftEye;
    struct CGPoint { 
        double x; 
        double y; 
    }  _mouth;
    unsigned long long  _profile;
    struct CGPoint { 
        double x; 
        double y; 
    }  _rightEye;
    unsigned long long  _trackDuration;
    long long  _trackID;
}

@property (nonatomic, readonly) double faceAngle;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceBoundingBox;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } faceCenter;
@property (nonatomic, readonly) double faceSize;
@property (nonatomic, readonly) NSDictionary *features;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } leftEye;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } mouth;
@property (nonatomic, readonly) unsigned long long profile;
@property (nonatomic, readonly) unsigned long long requestRevision;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } rightEye;
@property (nonatomic, readonly) unsigned long long trackDuration;
@property (nonatomic, readonly) long long trackID;

+ (void)_setFaceExpressionFeatureScoreIfDetected:(id)arg1 features:(id)arg2 detectionKey:(id)arg3 scoreKey:(id)arg4 featureKey:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)faceAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceBoundingBox;
- (struct CGPoint { double x1; double x2; })faceCenter;
- (double)faceSize;
- (id)features;
- (id)initWithCoder:(id)arg1;
- (id)initWithFace:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })leftEye;
- (struct CGPoint { double x1; double x2; })mouth;
- (unsigned long long)profile;
- (unsigned long long)requestRevision;
- (struct CGPoint { double x1; double x2; })rightEye;
- (unsigned long long)trackDuration;
- (long long)trackID;

@end
