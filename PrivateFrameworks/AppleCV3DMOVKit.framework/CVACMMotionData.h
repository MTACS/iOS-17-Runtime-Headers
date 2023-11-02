
@interface CVACMMotionData : NSObject <NSSecureCoding> {
    CVACLMotionTypeVector3 * _acceleration;
    unsigned long long  _frameId;
    CVACLMotionTypeDoubleVector4 * _quaternion;
    CVACLMotionTypeVector3 * _rotationRate;
    unsigned long long  _sequenceNumber;
    unsigned long long  _syncTimestamp;
    double  _timestamp;
}

@property (nonatomic, retain) CVACLMotionTypeVector3 *acceleration;
@property (nonatomic) unsigned long long frameId;
@property (nonatomic, retain) CVACLMotionTypeDoubleVector4 *quaternion;
@property (nonatomic, retain) CVACLMotionTypeVector3 *rotationRate;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) unsigned long long syncTimestamp;
@property (nonatomic) double timestamp;

+ (id)classes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acceleration;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameId;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)quaternion;
- (id)rotationRate;
- (unsigned long long)sequenceNumber;
- (void)setAcceleration:(id)arg1;
- (void)setFrameId:(unsigned long long)arg1;
- (void)setQuaternion:(id)arg1;
- (void)setRotationRate:(id)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setSyncTimestamp:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (unsigned long long)syncTimestamp;
- (double)timestamp;

@end
