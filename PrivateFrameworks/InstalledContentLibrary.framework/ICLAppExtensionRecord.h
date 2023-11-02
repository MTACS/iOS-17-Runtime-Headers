
@interface ICLAppExtensionRecord : ICLBundleRecord <NSCopying, NSSecureCoding> {
    NSString * _extensionOwnerBundleID;
}

@property (nonatomic, copy) NSString *extensionOwnerBundleID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionOwnerBundleID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLegacyRecordDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)legacyRecordDictionary;
- (void)setExtensionOwnerBundleID:(id)arg1;

@end
