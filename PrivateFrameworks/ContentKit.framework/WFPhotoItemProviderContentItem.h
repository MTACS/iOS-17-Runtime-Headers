
@interface WFPhotoItemProviderContentItem : WFNSItemProviderContentItem <WFContentItemClass>

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
+ (id)itemWithItemProviderItem:(id)arg1 photoMediaFileRepresentation:(id)arg2 assetIdentifier:(id)arg3;
+ (id)outputTypes;
+ (id)pluralTypeDescription;
+ (id)typeDescription;

- (id)defaultSourceForRepresentation:(id)arg1;
- (id)outputTypes;

@end
