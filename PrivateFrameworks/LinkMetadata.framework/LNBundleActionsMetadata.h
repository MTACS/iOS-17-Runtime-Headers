
@interface LNBundleActionsMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _actions;
    NSDictionary * _systemProtocolDefaults;
}

@property (nonatomic, readonly) NSDictionary *actions;
@property (nonatomic, readonly) NSDictionary *systemProtocolDefaults;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActions:(id)arg1 systemProtocolDefaults:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)systemProtocolDefaults;

@end
