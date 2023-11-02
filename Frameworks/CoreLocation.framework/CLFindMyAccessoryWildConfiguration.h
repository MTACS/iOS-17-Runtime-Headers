
@interface CLFindMyAccessoryWildConfiguration : NSObject <NSSecureCoding> {
    NSDate * _desiredKeyRollDate;
    unsigned short  _keyCount;
    unsigned int  _keyRollInterval;
    unsigned short  _keysRemaining;
}

@property (readonly) NSDate *desiredKeyRollDate;
@property (readonly) unsigned short keyCount;
@property (readonly) unsigned int keyRollInterval;
@property (readonly) unsigned short keysRemaining;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)desiredKeyRollDate;
- (id)encodeConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDesiredNextKeyRollDate:(id)arg1 keyRollInterval:(unsigned int)arg2 keysRemainingInWildPeriod:(unsigned short)arg3 wildPeriodKeyCount:(unsigned short)arg4;
- (unsigned short)keyCount;
- (unsigned int)keyRollInterval;
- (unsigned short)keysRemaining;

@end
