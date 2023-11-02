
@interface IXOpaqueDataPromise : IXDataPromise <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)seedClass;

@end
