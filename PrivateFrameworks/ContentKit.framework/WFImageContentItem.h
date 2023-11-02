
@interface WFImageContentItem : WFGenericFileContentItem <WFContentItemClass> {
    bool  _isScreenshot;
    WFFileType * _preferredFileType;
}

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
@property (nonatomic, readonly) bool cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStringOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFImage *image;
@property (nonatomic, readonly) bool imageIsAnimated;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem;
@property (nonatomic) bool isScreenshot;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization;
@property (nonatomic, readonly) WFFileType *preferredFileType;
@property (nonatomic, readonly) WFObjectType *preferredObjectType;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)imageTypes;
+ (void)initialize;
+ (id)itemWithFile:(id)arg1 preferredFileType:(id)arg2;
+ (id)itemWithImage:(id)arg1 named:(id)arg2 preferredFileType:(id)arg3;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4 cachingIdentifier:(id)arg5;
+ (id)outputTypes;
+ (id)ownedPasteboardTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (bool)supportsSecureCoding;
+ (id)typeDescription;

- (void).cxx_destruct;
- (bool)canGenerateRepresentationForType:(id)arg1;
- (void)copyStateToItem:(id)arg1;
- (id)dateTaken;
- (void)encodeWithCoder:(id)arg1;
- (void)generateFileRepresentation:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)generateImageFileForType:(id)arg1 includingMetadata:(bool)arg2 compressionQuality:(id)arg3 error:(id*)arg4;
- (void)generateObjectRepresentation:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)getListAltText:(id /* block */)arg1;
- (bool)getListSubtitle:(id /* block */)arg1;
- (bool)getListThumbnail:(id /* block */)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (id)height;
- (id)image;
- (id)imageFile;
- (bool)imageIsAnimated;
- (id)initWithCoder:(id)arg1;
- (bool)isContent;
- (bool)isObjectBacked;
- (bool)isScreenshot;
- (id)location;
- (id)make;
- (id)metadata;
- (id)model;
- (id)orientation;
- (id)preferredFileType;
- (id)preferredObjectType;
- (void)setIsScreenshot:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)width;

@end
