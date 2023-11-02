
@interface PBFPosterGalleryViewSpec : NSObject {
    int  _deviceClass;
    double  _groupSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _landscapeGallerySize;
    struct CGSize { 
        double width; 
        double height; 
    }  _portraitGallerySize;
    struct CGSize { 
        double width; 
        double height; 
    }  _posterContentSize;
    double  _posterCornerRadius;
    struct CGSize { 
        double width; 
        double height; 
    }  _posterEditingConfirmationContentSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _posterHeroContentSize;
    UIColor * _previewCellDescriptionLabelColor;
    UIFont * _previewCellDescriptionLabelFont;
    UIColor * _previewCellLabelColor;
    UIFont * _previewCellLabelFont;
    double  _previewCellLabelToImageVerticalSpacing;
    double  _previewSmartAlbumCellAdditionalTopMargin;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceBounds;
    double  _referenceScale;
    double  _sectionHeaderBottomSpacing;
    UIColor * _sectionHeaderSubtitleColor;
    UIFont * _sectionHeaderSubtitleFont;
    double  _sectionHeaderSubtitleTopMargin;
    UIColor * _sectionHeaderTitleColor;
    UIFont * _sectionHeaderTitleFont;
    double  _sectionHeaderTopSpacing;
    double  _sectionHorizontalMargin;
    double  _sectionVerticalMargin;
    double  _standardSpacing;
}

@property (nonatomic, readonly) int deviceClass;
@property (nonatomic, readonly) double groupSpacing;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } landscapeGallerySize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } portraitGallerySize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } posterContentSize;
@property (nonatomic, readonly) double posterCornerRadius;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } posterEditingConfirmationContentSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } posterHeroContentSize;
@property (nonatomic, readonly) UIColor *previewCellDescriptionLabelColor;
@property (nonatomic, readonly) UIFont *previewCellDescriptionLabelFont;
@property (nonatomic, readonly) UIColor *previewCellLabelColor;
@property (nonatomic, readonly) UIFont *previewCellLabelFont;
@property (nonatomic, readonly) double previewCellLabelToImageVerticalSpacing;
@property (nonatomic, readonly) double previewSmartAlbumCellAdditionalTopMargin;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } referenceBounds;
@property (nonatomic, readonly) double referenceScale;
@property (nonatomic, readonly) double sectionHeaderBottomSpacing;
@property (nonatomic, readonly) UIColor *sectionHeaderSubtitleColor;
@property (nonatomic, readonly) UIFont *sectionHeaderSubtitleFont;
@property (nonatomic, readonly) double sectionHeaderSubtitleTopMargin;
@property (nonatomic, readonly) UIColor *sectionHeaderTitleColor;
@property (nonatomic, readonly) UIFont *sectionHeaderTitleFont;
@property (nonatomic, readonly) double sectionHeaderTopSpacing;
@property (nonatomic, readonly) double sectionHorizontalMargin;
@property (nonatomic, readonly) double sectionVerticalMargin;
@property (nonatomic, readonly) double standardSpacing;

+ (id)displayMonitor;
+ (id)specForDisplayContext:(id)arg1;
+ (id)specForScreen:(id)arg1;
+ (id)specForScreenIdentity:(id)arg1;

- (void).cxx_destruct;
- (int)deviceClass;
- (struct CGSize { double x1; double x2; })gallerySizeForPadOrientation:(long long)arg1;
- (double)groupSpacing;
- (double)heroSpacingForOrientation:(long long)arg1;
- (id)initWithReferenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 deviceClass:(int)arg2 displayCornerRadius:(double)arg3 scale:(double)arg4;
- (struct CGSize { double x1; double x2; })landscapeGallerySize;
- (struct CGSize { double x1; double x2; })portraitGallerySize;
- (struct CGSize { double x1; double x2; })posterContentSize;
- (struct CGSize { double x1; double x2; })posterContentSizeForOrientation:(long long)arg1;
- (double)posterCornerRadius;
- (struct CGSize { double x1; double x2; })posterEditingConfirmationContentSize;
- (struct CGSize { double x1; double x2; })posterHeroContentSize;
- (id)previewCellDescriptionLabelColor;
- (id)previewCellDescriptionLabelFont;
- (id)previewCellLabelColor;
- (id)previewCellLabelFont;
- (double)previewCellLabelToImageVerticalSpacing;
- (double)previewSmartAlbumCellAdditionalTopMargin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceBounds;
- (double)referenceScale;
- (double)sectionHeaderBottomSpacing;
- (id)sectionHeaderSubtitleColor;
- (id)sectionHeaderSubtitleFont;
- (double)sectionHeaderSubtitleTopMargin;
- (id)sectionHeaderTitleColor;
- (id)sectionHeaderTitleFont;
- (double)sectionHeaderTopSpacing;
- (double)sectionHorizontalMargin;
- (double)sectionVerticalMargin;
- (double)standardSpacing;

@end
