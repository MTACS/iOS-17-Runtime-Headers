
@interface PXStoryConcreteLayoutSpec : PXFeatureSpec <PXStoryLayoutSpec> {
    UIColor * _backgroundColor;
    double  _bottomTitleContentOffset;
    double  _browserGridCellCornersRadius;
    PXExploreLayoutMetrics * _browserGridLayoutMetrics;
    long long  _browserGridScrollDecelerationRate;
    struct CGSize { 
        double width; 
        double height; 
    }  _bufferingIndicatorSize;
    bool  _canScaleWhenPressed;
    double  _distanceBetweenBufferingIndicatorCenterAndBottom;
    double  _distanceBetweenChapterTitleBaselineAndBottomWithChrome;
    double  _distanceBetweenChapterTitleBaselineAndBottomWithoutChrome;
    double  _interpageSpacing;
    long long  _scrollDecelerationRate;
    struct CGSize { 
        double width; 
        double height; 
    }  _scrubberCurrentAssetSize;
    double  _scrubberVerticalPadding;
    double  _styleSwitcherChromeButtonHorizontalMargin;
    PXStoryChromeButtonSpec * _styleSwitcherChromeButtonSpec;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _styleSwitcherChromeInset;
    long long  _styleSwitcherLayoutDirection;
    double  _styleSwitcherPageControlHeight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _styleSwitcherPageControlInset;
    bool  _styleSwitcherShowsRestartButton;
    bool  _styleSwitcherShowsTitle;
    NSDictionary * _styleSwitcherTitleAttributes;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _styleSwitcherViewportInset;
    double  _styleSwitcherViewportSpacing;
    double  _thumbnailChromeButtonSpacing;
    PXStoryChromeButtonSpec * _thumbnailChromeButtonSpec;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailChromeDetailsViewButtonPadding;
    PXStoryDetailsViewButtonSpec * _thumbnailChromeDetailsViewButtonSpec;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailChromePadding;
    PXStoryChromeButtonSpec * _thumbnailChromePlayButtonSpec;
    bool  _thumbnailChromeShowsActionMenuButton;
    bool  _thumbnailChromeShowsFavoriteButton;
    bool  _thumbnailChromeShowsPlayButton;
    double  _thumbnailCornerRadius;
    bool  _thumbnailMenuIncludesFavoriteAction;
    bool  _thumbnailMenuIncludesFeatureLessAction;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailPlayButtonPadding;
    NSShadow * _thumbnailShadow;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) double bottomTitleContentOffset;
@property (nonatomic, readonly) double browserGridCellCornersRadius;
@property (nonatomic, readonly) PXExploreLayoutMetrics *browserGridLayoutMetrics;
@property (nonatomic, readonly) long long browserGridScrollDecelerationRate;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } bufferingIndicatorSize;
@property (nonatomic, readonly) bool canScaleWhenPressed;
@property (nonatomic, readonly) double distanceBetweenBufferingIndicatorCenterAndBottom;
@property (nonatomic, readonly) double distanceBetweenChapterTitleBaselineAndBottomWithChrome;
@property (nonatomic, readonly) double distanceBetweenChapterTitleBaselineAndBottomWithoutChrome;
@property (nonatomic, readonly) double interpageSpacing;
@property (nonatomic, readonly) long long scrollDecelerationRate;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } scrubberCurrentAssetSize;
@property (nonatomic, readonly) double scrubberVerticalPadding;
@property (nonatomic, readonly) double styleSwitcherChromeButtonHorizontalMargin;
@property (nonatomic, readonly) PXStoryChromeButtonSpec *styleSwitcherChromeButtonSpec;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } styleSwitcherChromeInset;
@property (nonatomic, readonly) long long styleSwitcherLayoutDirection;
@property (nonatomic, readonly) double styleSwitcherPageControlHeight;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } styleSwitcherPageControlInset;
@property (nonatomic, readonly) bool styleSwitcherShowsRestartButton;
@property (nonatomic, readonly) bool styleSwitcherShowsTitle;
@property (nonatomic, readonly) NSDictionary *styleSwitcherTitleAttributes;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } styleSwitcherViewportInset;
@property (nonatomic, readonly) double styleSwitcherViewportSpacing;
@property (nonatomic, readonly) double thumbnailChromeButtonSpacing;
@property (nonatomic, readonly) PXStoryChromeButtonSpec *thumbnailChromeButtonSpec;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } thumbnailChromeDetailsViewButtonPadding;
@property (nonatomic, readonly) PXStoryDetailsViewButtonSpec *thumbnailChromeDetailsViewButtonSpec;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } thumbnailChromePadding;
@property (nonatomic, readonly) PXStoryChromeButtonSpec *thumbnailChromePlayButtonSpec;
@property (nonatomic, readonly) bool thumbnailChromeShowsActionMenuButton;
@property (nonatomic, readonly) bool thumbnailChromeShowsFavoriteButton;
@property (nonatomic, readonly) bool thumbnailChromeShowsPlayButton;
@property (nonatomic, readonly) double thumbnailCornerRadius;
@property (nonatomic, readonly) bool thumbnailMenuIncludesFavoriteAction;
@property (nonatomic, readonly) bool thumbnailMenuIncludesFeatureLessAction;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } thumbnailPlayButtonPadding;
@property (nonatomic, readonly) NSShadow *thumbnailShadow;

- (void).cxx_destruct;
- (id)backgroundColor;
- (double)bottomTitleContentOffset;
- (double)browserGridCellCornersRadius;
- (id)browserGridLayoutMetrics;
- (long long)browserGridScrollDecelerationRate;
- (struct CGSize { double x1; double x2; })bufferingIndicatorSize;
- (bool)canScaleWhenPressed;
- (double)distanceBetweenBufferingIndicatorCenterAndBottom;
- (double)distanceBetweenChapterTitleBaselineAndBottomWithChrome;
- (double)distanceBetweenChapterTitleBaselineAndBottomWithoutChrome;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 storyConfigurationOptions:(unsigned long long)arg3;
- (double)interpageSpacing;
- (long long)scrollDecelerationRate;
- (struct CGSize { double x1; double x2; })scrubberCurrentAssetSize;
- (double)scrubberVerticalPadding;
- (double)styleSwitcherChromeButtonHorizontalMargin;
- (id)styleSwitcherChromeButtonSpec;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })styleSwitcherChromeInset;
- (long long)styleSwitcherLayoutDirection;
- (double)styleSwitcherPageControlHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })styleSwitcherPageControlInset;
- (bool)styleSwitcherShowsRestartButton;
- (bool)styleSwitcherShowsTitle;
- (id)styleSwitcherTitleAttributes;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })styleSwitcherViewportInset;
- (double)styleSwitcherViewportSpacing;
- (double)thumbnailChromeButtonSpacing;
- (id)thumbnailChromeButtonSpec;
- (struct CGSize { double x1; double x2; })thumbnailChromeDetailsViewButtonPadding;
- (id)thumbnailChromeDetailsViewButtonSpec;
- (struct CGSize { double x1; double x2; })thumbnailChromePadding;
- (id)thumbnailChromePlayButtonSpec;
- (bool)thumbnailChromeShowsActionMenuButton;
- (bool)thumbnailChromeShowsFavoriteButton;
- (bool)thumbnailChromeShowsPlayButton;
- (double)thumbnailCornerRadius;
- (bool)thumbnailMenuIncludesFavoriteAction;
- (bool)thumbnailMenuIncludesFeatureLessAction;
- (struct CGSize { double x1; double x2; })thumbnailPlayButtonPadding;
- (id)thumbnailShadow;

@end
