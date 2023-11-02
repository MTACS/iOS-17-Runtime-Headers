
@interface RBSRequest : NSObject <RBSXPCSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsRBSXPCSecureCoding;

- (id)_init;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)init;
- (id)initWithRBSXPCCoder:(id)arg1;

@end
