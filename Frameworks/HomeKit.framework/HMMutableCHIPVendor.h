
@interface HMMutableCHIPVendor : HMCHIPVendor

@property (getter=isAppleVendor) bool appleVendor;
@property (copy) NSString *name;
@property (getter=isSystemCommissionerVendor) bool systemCommissionerVendor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
