
@interface TVCarouselLayout : TVViewLayout {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cellPadding;
    struct CGSize { 
        double width; 
        double height; 
    }  _cellSize;
    double  _focusedEdgeExpansion;
    double  _interitemSpacing;
    long long  _layoutType;
    NSNumber * _pageControlMarginNumber;
    bool  _parallaxEnabled;
    double  _revealDistance;
    unsigned long long  _scrollMode;
    double  _shearAngle;
    bool  _showsPageControl;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } cellPadding;
@property (nonatomic) struct CGSize { double x1; double x2; } cellSize;
@property (nonatomic) double focusedEdgeExpansion;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) long long layoutType;
@property (nonatomic) NSNumber *pageControlMarginNumber;
@property (getter=isParallaxEnabled, nonatomic) bool parallaxEnabled;
@property (nonatomic) double revealDistance;
@property (nonatomic) unsigned long long scrollMode;
@property (nonatomic) double shearAngle;
@property (nonatomic) bool showsPageControl;

+ (long long)layoutTypeForElement:(id)arg1;
+ (long long)layoutTypeForString:(id)arg1;
+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
+ (unsigned long long)scrollModeForString:(id)arg1;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cellPadding;
- (struct CGSize { double x1; double x2; })cellSize;
- (double)focusedEdgeExpansion;
- (double)interitemSpacing;
- (bool)isEqual:(id)arg1;
- (bool)isParallaxEnabled;
- (long long)layoutType;
- (id)pageControlMarginNumber;
- (double)revealDistance;
- (unsigned long long)scrollMode;
- (void)setCellPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCellSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFocusedEdgeExpansion:(double)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setLayoutType:(long long)arg1;
- (void)setPageControlMarginNumber:(id)arg1;
- (void)setParallaxEnabled:(bool)arg1;
- (void)setRevealDistance:(double)arg1;
- (void)setScrollMode:(unsigned long long)arg1;
- (void)setShearAngle:(double)arg1;
- (void)setShowsPageControl:(bool)arg1;
- (double)shearAngle;
- (bool)showsPageControl;

@end
