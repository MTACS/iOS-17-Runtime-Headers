
@interface SUCorePolicyExtensionAbsoluteCompatibility : SUCorePolicyExtension <SUCorePolicyExtensionProtocol> {
    NSNumber * _compatibilityVersion;
}

@property (nonatomic, retain) NSNumber *compatibilityVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)compatibilityVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)extendDocumentationMAAssetQuery:(id)arg1;
- (void)extendMADocumentationAssetDownloadOptions:(id)arg1;
- (void)extendMADocumentationCatalogDownloadOptions:(id)arg1 descriptor:(id)arg2;
- (void)extendMASoftwareUpdateAssetDownloadOptions:(id)arg1;
- (void)extendMASoftwareUpdateCatalogDownloadOptions:(id)arg1;
- (void)extendSoftwareUpdateMAAssetQuery:(id)arg1;
- (id)extensionName;
- (id)filterDocumentationAssetArray:(id)arg1;
- (id)filterSoftwareUpdateAssetArray:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCompatibilityVersion:(id)arg1;
- (id)summary;

@end
