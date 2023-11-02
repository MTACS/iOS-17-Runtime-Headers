
@interface WFHKSampleContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
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
+ (id)filterDescription;
+ (bool)hasLibrary;
+ (id)itemWithQuantitySample:(id)arg1;
+ (id)itemWithQuantitySample:(id)arg1 unit:(id)arg2;
+ (id)itemWithQuantitySamples:(id)arg1;
+ (id)itemWithQuantitySamples:(id)arg1 unit:(id)arg2;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralFilterDescription;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 permissionRequestor:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)stringConversionBehavior;
+ (bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;

- (bool)canGenerateRepresentationForType:(id)arg1;
- (id)categorySample;
- (id)defaultSourceForRepresentation:(id)arg1;
- (id)duration;
- (id)endDate;
- (void)generateObjectRepresentations:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (bool)getListAltText:(id /* block */)arg1;
- (bool)getListThumbnail:(id /* block */)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (id)localizedCategorySampleValue;
- (unsigned long long)preferredDisplayStyle;
- (id)quantitySample;
- (id)quantitySampleContainer;
- (id)readableTypeIdentifier;
- (id)sampleValue;
- (id)sourceName;
- (id)startDate;
- (id)unit;

@end
