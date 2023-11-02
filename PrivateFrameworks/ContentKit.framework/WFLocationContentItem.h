
@interface WFLocationContentItem : WFContentItem <WFContentItemClass>

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
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)typeDescription;

- (void)generateFileRepresentation:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentations:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (bool)getListAltText:(id /* block */)arg1;
- (bool)getListSubtitle:(id /* block */)arg1;
- (bool)getListThumbnail:(id /* block */)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (void)getMKMapSnapshotImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)getMKMapSnapshotImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 named:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (bool)includesFileRepresentationInSerializedItem;
- (unsigned long long)preferredDisplayStyle;
- (id)preferredFileType;

@end
