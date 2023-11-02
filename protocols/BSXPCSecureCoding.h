
@protocol BSXPCSecureCoding <NSObject>

@required

+ (bool)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id <BSXPCEncoding>)arg1;
- (id)initWithBSXPCCoder:(id <BSXPCDecoding>)arg1;

@end
