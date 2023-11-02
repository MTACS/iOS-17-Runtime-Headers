
@interface WFDictionaryContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
@property (nonatomic, readonly) bool cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) bool hasStringOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization;
@property (nonatomic, readonly) WFFileType *preferredFileType;
@property (nonatomic, readonly) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemsWithJSONFileRepresentation:(id)arg1 attributionSet:(id)arg2;
+ (id)itemsWithPlistFileRepresentation:(id)arg1 attributionSet:(id)arg2;
+ (id)itemsWithPropertyListObject:(id)arg1 preferredDictionaryType:(id)arg2 attributionSet:(id)arg3;
+ (id)itemsWithPropertyListObject:(id)arg1 preferredDictionaryType:(id)arg2 topLevelName:(id)arg3 attributionSet:(id)arg4;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)typeDescription;

- (id)allowedClassesForDecodingInternalRepresentations;
- (id)dictionary;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (id)preferredFileType;

@end
