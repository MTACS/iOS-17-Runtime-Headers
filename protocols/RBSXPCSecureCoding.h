
@protocol RBSXPCSecureCoding <NSObject>

@required

+ (bool)supportsRBSXPCSecureCoding;

- (void)encodeWithRBSXPCCoder:(id <RBSXPCEncoding>)arg1;
- (id)initWithRBSXPCCoder:(id <RBSXPCDecoding>)arg1;

@end
