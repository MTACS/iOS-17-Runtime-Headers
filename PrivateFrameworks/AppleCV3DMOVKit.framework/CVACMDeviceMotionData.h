
@interface CVACMDeviceMotionData : NSObject <NSSecureCoding> {
    CVACMMotionTypeDeviceMotionData * _deviceMotion;
    unsigned long long  _syncTimestamp;
    double  _timestamp;
}

@property (nonatomic, retain) CVACMMotionTypeDeviceMotionData *deviceMotion;
@property (nonatomic) unsigned long long syncTimestamp;
@property (nonatomic) double timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceMotion;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCMDeviceMotion:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setDeviceMotion:(id)arg1;
- (void)setSyncTimestamp:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (unsigned long long)syncTimestamp;
- (double)timestamp;

@end
