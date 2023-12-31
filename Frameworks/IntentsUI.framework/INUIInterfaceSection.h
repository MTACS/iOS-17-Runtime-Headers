
@interface INUIInterfaceSection : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _interactiveBehavior;
    NSSet * _parameters;
}

@property (nonatomic, readonly) unsigned long long interactiveBehavior;
@property (nonatomic, readonly, copy) NSSet *parameters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInteractiveBehavior:(unsigned long long)arg1 parameters:(id)arg2;
- (unsigned long long)interactiveBehavior;
- (bool)isEqual:(id)arg1;
- (id)parameters;

@end
