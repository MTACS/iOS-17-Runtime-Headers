
@interface PKShippingMethods : NSObject <NSCopying, NSSecureCoding> {
    PKShippingMethod * _defaultMethod;
    NSArray * _legacyShippingMethods;
    NSOrderedSet * _methodsSet;
}

@property (nonatomic, readonly) PKShippingMethod *defaultMethod;
@property (nonatomic, readonly) NSArray *legacyShippingMethods;
@property (nonatomic, readonly) NSArray *methods;

+ (id)shippingMethodsWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultMethod;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLegacyShippingMethods:(id)arg1;
- (id)initWithMethods:(id)arg1 defaultMethod:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToShippingMethods:(id)arg1;
- (id)legacyShippingMethods;
- (id)methods;
- (id)protobuf;

@end
