
@interface CNPhotoPickerMonogramProviderItem : CNPhotoPickerProviderItem <CNVisualIdentityPickerTextEditableProviderItem> {
    CNAvatarImageRenderer * _avatarRenderer;
    bool  _hasUnknownColor;
    bool  _isContactImage;
    bool  _isVariantOptionItem;
    NSData * _monogramData;
    NSString * _monogramText;
    <CNAvatarImageRenderingScope> * _renderingScope;
    CNVisualIdentity * _visualIdentity;
}

@property (nonatomic, retain) CNAvatarImageRenderer *avatarRenderer;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic) bool hasUnknownColor;
@property (nonatomic) bool isContactImage;
@property (nonatomic) bool isVariantOptionItem;
@property (nonatomic, readonly) NSString *itemText;
@property (nonatomic, retain) NSData *monogramData;
@property (nonatomic, retain) NSString *monogramText;
@property (nonatomic, retain) <CNAvatarImageRenderingScope> *renderingScope;
@property (nonatomic, retain) CNVisualIdentity *visualIdentity;

- (void).cxx_destruct;
- (bool)allowsEditing;
- (bool)allowsMoveAndScale;
- (bool)allowsVariants;
- (id)avatarRenderer;
- (id)backgroundColor;
- (id)contactImageForMetadataStore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createColorVariantItems;
- (id)createColorVariantItemsExcludingSelf;
- (id)createVariantsItemsWithVariantsManager:(id)arg1;
- (id)generateMonogramData;
- (id)generateMonogramImage;
- (id)generateThumbnailImageDataIfNeeded;
- (bool)hasUnknownColor;
- (unsigned long long)hash;
- (id)imageData;
- (unsigned long long)imageType;
- (id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 renderingScope:(id)arg5 avatarRenderer:(id)arg6 isVariantOptionItem:(bool)arg7;
- (bool)isContactImage;
- (bool)isEqual:(id)arg1;
- (bool)isGrayMonogramItem;
- (bool)isVariantOptionItem;
- (id)itemText;
- (id)localizedVariantsTitle;
- (id)monogramData;
- (id)monogramText;
- (id)monogramVariantItemForColor:(id)arg1;
- (void)renderMonogramData;
- (id)renderingScope;
- (void)setAvatarRenderer:(id)arg1;
- (void)setHasUnknownColor:(bool)arg1;
- (void)setIsContactImage:(bool)arg1;
- (void)setIsVariantOptionItem:(bool)arg1;
- (void)setMonogramData:(id)arg1;
- (void)setMonogramText:(id)arg1;
- (void)setRenderingScope:(id)arg1;
- (void)setVisualIdentity:(id)arg1;
- (bool)shouldShowCaption;
- (id)thumbnailImageData;
- (void)updateVisualIdentity:(id)arg1;
- (void)updateWithMonogramData:(id)arg1;
- (id)updatedProviderItemWithText:(id)arg1;
- (id)variantIdentifier;
- (id)visualIdentity;

@end
