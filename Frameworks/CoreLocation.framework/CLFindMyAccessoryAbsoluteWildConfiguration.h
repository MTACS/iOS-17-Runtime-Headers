
@interface CLFindMyAccessoryAbsoluteWildConfiguration : NSObject <NSSecureCoding> {
    NSDate * _desiredKeyRollDate;
    unsigned int  _nextWildIndex;
}

@property (readonly) NSDate *desiredKeyRollDate;
@property (readonly) unsigned int nextWildIndex;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)desiredKeyRollDate;
- (id)encodeConfiguration;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDesiredNextKeyRollDate:(id)arg1 nextWildIndex:(unsigned int)arg2;
- (unsigned int)nextWildIndex;

@end
