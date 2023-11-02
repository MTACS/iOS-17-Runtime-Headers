
@interface TTRIUIContentUnavailableShim : NSObject <NSCopying, NSSecureCoding> {
    <NSCopying><NSSecureCoding> * _impl;
}

+ (Class)implClass;
+ (id)instanceWrappingImpl:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
