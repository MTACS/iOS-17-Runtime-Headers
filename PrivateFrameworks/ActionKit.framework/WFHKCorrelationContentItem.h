
@interface WFHKCorrelationContentItem : WFContentItem <WFContentItemClass>

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
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)typeDescription;

- (id)correlation;
- (void)generateObjectRepresentations:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;

@end
