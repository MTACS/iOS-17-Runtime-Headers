
@interface CNPhotoPickerEmojiProviderItem : CNPhotoPickerProviderItem <CNVisualIdentityPickerTextEditableProviderItem> {
    CNPhotoPickerColorVariant * _backgroundColorVariant;
    NSData * _dataRepresentation;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSString * _stringRepresentation;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, retain) CNPhotoPickerColorVariant *backgroundColorVariant;
@property (nonatomic, retain) NSData *dataRepresentation;
@property (nonatomic, readonly) NSString *itemText;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) NSString *stringRepresentation;

+ (id)addNewEmojiProviderItemWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)suggestedEmojiItemsForString:(id)arg1 variantsManager:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 locale:(id)arg4;
+ (id)thumbnailViewForImage:(id)arg1;

- (void).cxx_destruct;
- (bool)allowsMoveAndScale;
- (bool)allowsVariants;
- (id)backgroundColor;
- (id)backgroundColorVariant;
- (id)contactImageForMetadataStore;
- (id)copyWithStringRepresentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createVariantsItemsWithVariantsManager:(id)arg1;
- (id)dataRepresentation;
- (id)generateImageRepresentationForEmojiString:(id)arg1;
- (id)generateThumbnailImageDataIfNeeded;
- (id)imageData;
- (unsigned long long)imageType;
- (id)initWithStringRepresentation:(id)arg1 backgroundColorVariant:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (id)itemText;
- (void)setBackgroundColorVariant:(id)arg1;
- (void)setDataRepresentation:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStringRepresentation:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)stringRepresentation;
- (id)thumbnailImageData;
- (void)updateVisualIdentity:(id)arg1;
- (id)updatedProviderItemWithText:(id)arg1;
- (id)updatedProviderItemWithText:(id)arg1 backgroundColorVariant:(id)arg2;

@end
