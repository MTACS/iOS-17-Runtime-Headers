
@interface WFDisplayContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
@property (nonatomic, readonly) bool cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WFDisplay *display;
@property (nonatomic, readonly) bool hasStringOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization;
@property (nonatomic, readonly) WFFileType *preferredFileType;
@property (nonatomic, readonly) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;

+ (id)contentCategories;
+ (id)countDescription;
+ (bool)hasLibrary;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 permissionRequestor:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)stringConversionBehavior;
+ (id)typeDescription;

- (id)defaultSourceForRepresentation:(id)arg1;
- (id)display;
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;

@end
