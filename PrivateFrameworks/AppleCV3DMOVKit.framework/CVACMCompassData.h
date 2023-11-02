
@interface CVACMCompassData : NSObject <NSSecureCoding> {
    CVACLMotionTypeVector3 * _fieldValues;
    unsigned long long  _frameId;
    unsigned long long  _sequenceNumber;
    unsigned long long  _syncTimestamp;
    float  _temperature;
    double  _timestamp;
}

@property (nonatomic, retain) CVACLMotionTypeVector3 *fieldValues;
@property (nonatomic) unsigned long long frameId;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) unsigned long long syncTimestamp;
@property (nonatomic) float temperature;
@property (nonatomic) double timestamp;

+ (id)classes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fieldValues;
- (unsigned long long)frameId;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)sequenceNumber;
- (void)setFieldValues:(id)arg1;
- (void)setFrameId:(unsigned long long)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setSyncTimestamp:(unsigned long long)arg1;
- (void)setTemperature:(float)arg1;
- (void)setTimestamp:(double)arg1;
- (unsigned long long)syncTimestamp;
- (float)temperature;
- (double)timestamp;

@end
