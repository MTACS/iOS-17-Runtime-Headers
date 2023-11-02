
@interface UMPersonaMachPort : NSMachPort <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;

@end
