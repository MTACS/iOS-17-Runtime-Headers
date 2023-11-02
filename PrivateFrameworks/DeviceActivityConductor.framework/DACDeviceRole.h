
@interface DACDeviceRole : NSObject <NSSecureCoding> {
    unsigned long long  _flags;
}

@property (nonatomic, readonly) unsigned long long flags;

+ (bool)supportsSecureCoding;
+ (id)unknownRole;

- (id)_initWithRoleFlags:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)flags;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPrimary;
- (bool)isUnknown;
- (bool)satisfiesRole:(id)arg1;

@end
