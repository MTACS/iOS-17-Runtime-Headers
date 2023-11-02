
@interface TRIFullMAAssetId : NSObject <NSCopying, NSSecureCoding> {
    NSString * _specifier;
    NSString * _type;
    NSString * _version;
}

@property (nonatomic, readonly) NSString *specifier;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *version;

+ (id)identWithType:(id)arg1 specifier:(id)arg2 version:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementSpecifier:(id)arg1;
- (id)copyWithReplacementType:(id)arg1;
- (id)copyWithReplacementVersion:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 specifier:(id)arg2 version:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIdent:(id)arg1;
- (id)specifier;
- (id)type;
- (id)version;

@end
