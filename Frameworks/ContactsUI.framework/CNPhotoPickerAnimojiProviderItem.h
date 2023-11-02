
@interface CNPhotoPickerAnimojiProviderItem : CNPhotoPickerProviderItem {
    NSData * __generatedImageData;
    NSData * __originalImageData;
    <AVTAvatarRecord> * _avatarRecord;
    CNPhotoPickerColorVariant * _backgroundColorVariant;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    AVTAvatarRecordImageProvider * _imageProvider;
    UIImage * _loadingPlaceholderImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalImageSize;
    AVTStickerConfiguration * _poseConfiguration;
    AVTRenderingScope * _renderingScope;
    CNAvatarStickerGeneratorProvider * _stickerGeneratorProvider;
}

@property (nonatomic, retain) NSData *_generatedImageData;
@property (nonatomic, retain) NSData *_originalImageData;
@property (nonatomic, retain) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic, retain) CNPhotoPickerColorVariant *backgroundColorVariant;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, retain) AVTAvatarRecordImageProvider *imageProvider;
@property (nonatomic, retain) UIImage *loadingPlaceholderImage;
@property (nonatomic) struct CGSize { double x1; double x2; } originalImageSize;
@property (nonatomic, retain) AVTStickerConfiguration *poseConfiguration;
@property (nonatomic, retain) AVTRenderingScope *renderingScope;
@property (nonatomic, retain) CNAvatarStickerGeneratorProvider *stickerGeneratorProvider;
@property (nonatomic, retain) NSData *thumbnailImageData;

+ (id)log;

- (void).cxx_destruct;
- (id)_generatedImageData;
- (id)_originalImageData;
- (bool)allowsMoveAndScale;
- (bool)allowsVariants;
- (void)applyVariantEffectToFullsizeImageWithCompletion:(id /* block */)arg1;
- (id)avatarRecord;
- (id)backgroundColorVariant;
- (id)contactImageForMetadataStore;
- (id)copyWithColor:(id)arg1;
- (id)copyWithPoseConfiguration:(id)arg1 generatorProvider:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createVariantsItemsWithVariantsManager:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)generateAllImageDatasIfNeeded;
- (id)generateImageDataIfNeeded;
- (id)generateThumbnailImageDataIfNeeded;
- (unsigned long long)hash;
- (id)imageData;
- (id)imageProvider;
- (unsigned long long)imageType;
- (id)initWithAvatarRecord:(id)arg1 imageProvider:(id)arg2 renderingScope:(id)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5;
- (id)initWithOriginalImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithOriginalImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 backgroundColorVariant:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)loadingPlaceholderImage;
- (id)localizedVariantsTitle;
- (id)originalImageData;
- (struct CGSize { double x1; double x2; })originalImageSize;
- (id)poseConfiguration;
- (id)renderAvatarWithBackgroundWithImage:(id)arg1;
- (id)renderAvatarWithBackgroundWithImageData:(id)arg1;
- (id)renderAvatarWithPoseWithSize:(double)arg1;
- (id)renderDefaultAvatarImage;
- (id)renderingScope;
- (void)setAvatarRecord:(id)arg1;
- (void)setBackgroundColorVariant:(id)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setImageProvider:(id)arg1;
- (void)setLoadingPlaceholderImage:(id)arg1;
- (void)setOriginalImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPoseConfiguration:(id)arg1;
- (void)setRenderingScope:(id)arg1;
- (void)setStickerGeneratorProvider:(id)arg1;
- (void)set_generatedImageData:(id)arg1;
- (void)set_originalImageData:(id)arg1;
- (bool)shouldShowCaption;
- (id)stickerGeneratorProvider;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForMemojiMetadata;
- (void)updateVisualIdentity:(id)arg1;
- (id)variantIdentifier;

@end
