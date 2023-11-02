
@interface _CLLSLHeading : NSObject <NSCopying, NSSecureCoding> {
    double  _confidence;
    unsigned long long  _globalReferenceFrame;
    _CLLSLLocation * _location;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _rotationFromGlobalToCameraFrame;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _rotationFromGlobalToDeviceFrame;
    void _rotationalAccuracyInRadians;
    _CLLSLHeadingSupplInfo * _supplemantaryInfo;
    double  _timestamp;
}

@property (nonatomic) double confidence;
@property (nonatomic) unsigned long long globalReferenceFrame;
@property (nonatomic, copy) _CLLSLLocation *location;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } rotationFromGlobalToCameraFrame;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } rotationFromGlobalToDeviceFrame;
@property (nonatomic) void rotationalAccuracyInRadians;
@property (nonatomic, copy) _CLLSLHeadingSupplInfo *supplemantaryInfo;
@property (nonatomic) double timestamp;

+ (bool)supportsSecureCoding;

- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)globalReferenceFrame;
- (id)initWithCoder:(id)arg1;
- (id)location;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })rotationFromGlobalToCameraFrame;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })rotationFromGlobalToDeviceFrame;
- (void)rotationalAccuracyInRadians;
- (void)setConfidence:(double)arg1;
- (void)setGlobalReferenceFrame:(unsigned long long)arg1;
- (void)setLocation:(id)arg1;
- (void)setRotationFromGlobalToCameraFrame:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setRotationFromGlobalToDeviceFrame:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setRotationalAccuracyInRadians;
- (void)setSupplemantaryInfo:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)supplemantaryInfo;
- (double)timestamp;

@end
