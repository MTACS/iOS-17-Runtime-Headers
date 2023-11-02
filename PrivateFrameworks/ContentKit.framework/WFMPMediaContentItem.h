
@interface WFMPMediaContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
@property (nonatomic, readonly) NSString *albumTitle;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) bool cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStringOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem;
@property (nonatomic, readonly) MPMediaItem *mediaItem;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization;
@property (nonatomic, readonly) WFFileType *preferredFileType;
@property (nonatomic, readonly) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)filterDescription;
+ (bool)hasLibrary;
+ (bool)isAvailableOnPlatform:(long long)arg1;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralFilterDescription;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 permissionRequestor:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)stringConversionBehavior;
+ (id)typeDescription;

- (id)additionalRepresentationsForSerialization;
- (id)albumTitle;
- (id)artist;
- (id)assetURL;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)getListAltText:(id /* block */)arg1;
- (bool)getListSubtitle:(id /* block */)arg1;
- (bool)getListThumbnail:(id /* block */)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (void)getPreferredFileSize:(id /* block */)arg1;
- (id)mediaItem;
- (id)preferredFileType;
- (id)title;

@end
