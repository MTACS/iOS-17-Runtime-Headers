
@interface CVATimedValue : NSObject <NSSecureCoding> {
    unsigned long long  _frameId;
    unsigned long long  _syncTimestamp;
    double  _timestamp;
    NSObject<NSSecureCoding> * _value;
}

@property (nonatomic) unsigned long long frameId;
@property (nonatomic) unsigned long long syncTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) NSObject<NSSecureCoding> *value;

+ (id)classes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameId;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setFrameId:(unsigned long long)arg1;
- (void)setSyncTimestamp:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setValue:(id)arg1;
- (unsigned long long)syncTimestamp;
- (double)timestamp;
- (id)value;

@end
