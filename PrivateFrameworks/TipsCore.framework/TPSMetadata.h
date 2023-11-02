
@interface TPSMetadata : TPSSerializableObject <NSCopying, NSSecureCoding> {
    NSURL * _assetBaseURL;
    TPSAssetSizes * _assetSizes;
    NSString * _contentMapHash;
    bool  _contextualTipsInactive;
    NSString * _language;
}

@property (nonatomic, copy) NSURL *assetBaseURL;
@property (nonatomic, copy) TPSAssetSizes *assetSizes;
@property (nonatomic, copy) NSString *contentMapHash;
@property (nonatomic) bool contextualTipsInactive;
@property (nonatomic, copy) NSString *language;

+ (id)identifierFromMetadataDictionary:(id)arg1;
+ (id)metadataFromDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetBaseURL;
- (id)assetSizes;
- (id)contentMapHash;
- (bool)contextualTipsInactive;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)language;
- (void)setAssetBaseURL:(id)arg1;
- (void)setAssetSizes:(id)arg1;
- (void)setContentMapHash:(id)arg1;
- (void)setContextualTipsInactive:(bool)arg1;
- (void)setLanguage:(id)arg1;

@end
