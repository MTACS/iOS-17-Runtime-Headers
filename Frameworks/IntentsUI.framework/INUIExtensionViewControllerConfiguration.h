
@interface INUIExtensionViewControllerConfiguration : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _hostedViewContext;
    unsigned long long  _interactiveBehavior;
    NSSet * _parameters;
}

@property (nonatomic, readonly) unsigned long long hostedViewContext;
@property (nonatomic, readonly) unsigned long long interactiveBehavior;
@property (nonatomic, readonly, copy) NSSet *parameters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hostedViewContext;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameters:(id)arg1 interactiveBehavior:(unsigned long long)arg2 hostedViewContext:(unsigned long long)arg3;
- (unsigned long long)interactiveBehavior;
- (id)parameters;

@end
