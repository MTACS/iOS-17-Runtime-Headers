
@interface WFLibraryLayoutMetrics : NSObject <NSCopying> {
    double  _cornerRadius;
    WFFloatingViewConfiguration * _floatingViewConfiguration;
    double  _interitemSpacing;
    unsigned long long  _itemsPerBanner;
    double  _lineSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInset;
    struct CGSize { 
        double width; 
        double height; 
    }  _workflowSize;
    UIFont * _workflowSubtitleFont;
    UIFont * _workflowTitleFont;
}

@property (nonatomic, readonly) unsigned long long appIconFormat;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) WFFloatingViewConfiguration *floatingViewConfiguration;
@property (nonatomic, readonly) double interitemSpacing;
@property (nonatomic, readonly) unsigned long long itemsPerBanner;
@property (nonatomic, readonly) double lineSpacing;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInset;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } workflowContentEdgeInsets;
@property (nonatomic, readonly) double workflowGlyphDimension;
@property (nonatomic, readonly) double workflowIconToLabelMargin;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } workflowPlusGlyphSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } workflowSize;
@property (nonatomic, readonly) UIFont *workflowSubtitleFont;
@property (nonatomic, readonly) UIFont *workflowTitleFont;

+ (id)metricsCompatibleWithTraitCollection:(id)arg1 viewWidth:(double)arg2 layoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
+ (id)metricsCompatibleWithTraitCollection:(id)arg1 viewWidth:(double)arg2 layoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 needsTopPadding:(bool)arg4;
+ (id)workflowSubtitleFontCompatibleWithTraitCollection:(id)arg1;
+ (id)workflowTitleFontCompatibleWithTraitCollection:(id)arg1;
+ (id)workflowTitleFontInDefaultSize;

- (void).cxx_destruct;
- (unsigned long long)appIconFormat;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })capEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 min:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 max:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (id)floatingViewConfiguration;
- (id)initWithTraitCollection:(id)arg1 viewWidth:(double)arg2 layoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 needsTopPadding:(bool)arg4;
- (double)interitemSpacing;
- (unsigned long long)itemsPerBanner;
- (double)lineSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })scaledEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (double)scaledValueForValue:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })workflowContentEdgeInsets;
- (double)workflowGlyphDimension;
- (struct CGSize { double x1; double x2; })workflowGlyphSize;
- (double)workflowIconToLabelMargin;
- (struct CGSize { double x1; double x2; })workflowPlusGlyphSize;
- (struct CGSize { double x1; double x2; })workflowSize;
- (id)workflowSubtitleFont;
- (id)workflowTitleFont;

@end
