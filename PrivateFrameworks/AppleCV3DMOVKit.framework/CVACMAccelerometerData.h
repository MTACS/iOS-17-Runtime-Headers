
@interface CVACMAccelerometerData : NSObject <NSSecureCoding> {
    CVACLMotionTypeVector3 * _acceleration;
    unsigned long long  _frameId;
    unsigned long long  _sequenceNumber;
    unsigned long long  _syncTimestamp;
    float  _temperature;
    double  _timestamp;
}

@property (nonatomic, retain) CVACLMotionTypeVector3 *acceleration;
@property (nonatomic) unsigned long long frameId;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) unsigned long long syncTimestamp;
@property (nonatomic) float temperature;
@property (nonatomic) double timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acceleration;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameId;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)sequenceNumber;
- (void)setAcceleration:(id)arg1;
- (void)setFrameId:(unsigned long long)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setSyncTimestamp:(unsigned long long)arg1;
- (void)setTemperature:(float)arg1;
- (void)setTimestamp:(double)arg1;
- (unsigned long long)syncTimestamp;
- (float)temperature;
- (double)timestamp;

@end
