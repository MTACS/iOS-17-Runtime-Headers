
@interface CVACMGyroData : NSObject <NSSecureCoding> {
    unsigned long long  _frameId;
    CVACLMotionTypeVector3 * _rotationRate;
    unsigned long long  _sequenceNumber;
    unsigned long long  _syncTimestamp;
    float  _temperature;
    double  _timestamp;
}

@property (nonatomic) unsigned long long frameId;
@property (nonatomic, retain) CVACLMotionTypeVector3 *rotationRate;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) unsigned long long syncTimestamp;
@property (nonatomic) float temperature;
@property (nonatomic) double timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameId;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)rotationRate;
- (unsigned long long)sequenceNumber;
- (void)setFrameId:(unsigned long long)arg1;
- (void)setRotationRate:(id)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setSyncTimestamp:(unsigned long long)arg1;
- (void)setTemperature:(float)arg1;
- (void)setTimestamp:(double)arg1;
- (unsigned long long)syncTimestamp;
- (float)temperature;
- (double)timestamp;

@end
