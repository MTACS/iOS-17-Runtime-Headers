
@interface SUCorePolicyExtensionCompanionCompatibility : SUCorePolicyExtension <SUCorePolicyExtensionProtocol> {
    NSNumber * _maxCompatibility;
    NSNumber * _minCompatibility;
}

@property (nonatomic, retain) NSNumber *maxCompatibility;
@property (nonatomic, retain) NSNumber *minCompatibility;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
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
- (id)maxCompatibility;
- (id)minCompatibility;
- (void)setMaxCompatibility:(id)arg1;
- (void)setMinCompatibility:(id)arg1;
- (id)summary;

@end
