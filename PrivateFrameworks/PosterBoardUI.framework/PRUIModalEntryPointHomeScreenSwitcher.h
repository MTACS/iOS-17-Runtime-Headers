
@interface PRUIModalEntryPointHomeScreenSwitcher : NSObject <PRUIModalEntryPoint>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (id)_BSXPCSecureCodingEntryPointTypeString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
