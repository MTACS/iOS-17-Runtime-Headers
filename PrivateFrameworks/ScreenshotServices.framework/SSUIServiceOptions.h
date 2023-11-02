
@interface SSUIServiceOptions : NSObject <BSXPCSecureCoding, NSCopying> {
    SSUIServiceOptionsAssetMetadata * _assetMetadata;
    unsigned long long  _flashStyle;
    unsigned long long  _saveLocation;
}

@property (nonatomic, copy) SSUIServiceOptionsAssetMetadata *assetMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long flashStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long saveLocation;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)flashStyle;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)saveLocation;
- (void)setAssetMetadata:(id)arg1;
- (void)setFlashStyle:(unsigned long long)arg1;
- (void)setSaveLocation:(unsigned long long)arg1;

@end
