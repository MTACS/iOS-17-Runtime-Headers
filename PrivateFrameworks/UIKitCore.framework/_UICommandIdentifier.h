
@interface _UICommandIdentifier : NSObject <NSCopying, NSSecureCoding> {
    SEL  _action;
    id  _propertyList;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) id propertyList;

+ (id)identifierWithAction:(SEL)arg1 propertyList:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (SEL)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAction:(SEL)arg1 propertyList:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)propertyList;

@end
