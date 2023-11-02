
@interface WFAVAssetContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly) bool cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStringOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization;
@property (nonatomic, readonly) WFFileType *preferredFileType;
@property (nonatomic, readonly) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;

- (id)asset;
- (bool)canGenerateRepresentationForType:(id)arg1;
- (id)duration;
- (id)frameRate;
- (id)generateExportSessionForType:(id)arg1;
- (void)generateFileRepresentation:(id /* block */)arg1 forType:(id)arg2 metadata:(id)arg3 options:(id)arg4;
- (void)generateFileRepresentation:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentation:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)getListAltText:(id /* block */)arg1;
- (bool)getListSubtitle:(id /* block */)arg1;
- (void)getPreferredFileSize:(id /* block */)arg1;
- (id)metadataItemForCommonKey:(id)arg1;
- (id)preferredFileType;
- (id)supportedTypes;

@end
