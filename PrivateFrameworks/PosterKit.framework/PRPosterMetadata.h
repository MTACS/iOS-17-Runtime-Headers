
@interface PRPosterMetadata : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding, PRPosterRoleAttribute> {
    NSString * _displayNameLocalizationKey;
}

@property (nonatomic, readonly) NSString *attributeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayNameLocalizationKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)decodeObjectWithJSON:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)attributeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayNameLocalizationKey;
- (id)encodeJSON;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayNameLocalizationKey:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setDisplayNameLocalizationKey:(id)arg1;

@end
