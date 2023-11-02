
@interface PXPhotosSectionHeaderLayoutSpec : PXFeatureSpec {
    UIColor * _badgeColor;
    UIFont * _badgeFont;
    UIColor * _buttonColor;
    UIFont * _buttonFont;
    double  _buttonSpacing;
    double  _chevronAlpha;
    PXExtendedImageConfiguration * _chevronImageConfiguration;
    struct CGSize { 
        double width; 
        double height; 
    }  _chevronSize;
    double  _chevronSpacing;
    PXCuratedLibrarySectionHeaderLayoutSpec * _curatedLibraryHeaderSpec;
    double  _dividerBaselineToTextBaselineSpacing;
    UIColor * _dividerColor;
    double  _gradientAlpha;
    double  _gradientOverhang;
    double  _minimumHeaderContentHeight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    UIColor * _subtitleColor;
    UIFont * _subtitleFont;
    UIColor * _titleColor;
    UIFont * _titleFont;
    double  _titleHorizontalInset;
    double  _titleSubtitleHorizontalSpacing;
}

@property (nonatomic, readonly) UIColor *badgeColor;
@property (nonatomic, readonly) UIFont *badgeFont;
@property (nonatomic, readonly) UIColor *buttonColor;
@property (nonatomic, readonly) UIFont *buttonFont;
@property (nonatomic, readonly) double buttonSpacing;
@property (nonatomic, readonly) double chevronAlpha;
@property (nonatomic, readonly) PXExtendedImageConfiguration *chevronImageConfiguration;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } chevronSize;
@property (nonatomic, readonly) double chevronSpacing;
@property (nonatomic, readonly) PXCuratedLibrarySectionHeaderLayoutSpec *curatedLibraryHeaderSpec;
@property (nonatomic, readonly) double dividerBaselineToTextBaselineSpacing;
@property (nonatomic, readonly) UIColor *dividerColor;
@property (nonatomic, readonly) double gradientAlpha;
@property (nonatomic, readonly) double gradientOverhang;
@property (nonatomic, readonly) double minimumHeaderContentHeight;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, readonly) UIColor *subtitleColor;
@property (nonatomic, readonly) UIFont *subtitleFont;
@property (nonatomic, readonly) UIColor *titleColor;
@property (nonatomic, readonly) UIFont *titleFont;
@property (nonatomic, readonly) double titleHorizontalInset;
@property (nonatomic, readonly) double titleSubtitleHorizontalSpacing;

- (void).cxx_destruct;
- (id)badgeColor;
- (id)badgeFont;
- (id)buttonColor;
- (id)buttonFont;
- (double)buttonSpacing;
- (double)chevronAlpha;
- (id)chevronImageConfiguration;
- (struct CGSize { double x1; double x2; })chevronSize;
- (double)chevronSpacing;
- (id)curatedLibraryHeaderSpec;
- (double)dividerBaselineToTextBaselineSpacing;
- (id)dividerColor;
- (double)gradientAlpha;
- (double)gradientOverhang;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (double)minimumHeaderContentHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id)subtitleColor;
- (id)subtitleFont;
- (id)titleColor;
- (id)titleFont;
- (double)titleHorizontalInset;
- (double)titleSubtitleHorizontalSpacing;

@end
