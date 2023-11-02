
@interface WFINSpeakableStringContentItem : WFContentItem <WFContentItemClass>

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
@property (nonatomic, readonly) INSpeakableString *speakableString;
@property (readonly) Class superclass;

+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)typeDescription;

- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (id)speakableString;

@end
