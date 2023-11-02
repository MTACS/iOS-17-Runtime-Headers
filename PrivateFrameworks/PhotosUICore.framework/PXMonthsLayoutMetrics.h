
@interface PXMonthsLayoutMetrics : PXLayoutMetrics {
    double  _chapterHeaderHeight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _chapterHeaderPadding;
    double  _defaultSectionAspectRatio;
    bool  _displaceTopLeadingCardTitle;
    double  _interitemSpacing;
    long long  _orientation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    long long  _sizeClass;
}

@property (nonatomic) double chapterHeaderHeight;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } chapterHeaderPadding;
@property (nonatomic) double defaultSectionAspectRatio;
@property (nonatomic) bool displaceTopLeadingCardTitle;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) long long orientation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) long long sizeClass;

- (double)chapterHeaderHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })chapterHeaderPadding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)defaultSectionAspectRatio;
- (bool)displaceTopLeadingCardTitle;
- (unsigned long long)hash;
- (id)init;
- (double)interitemSpacing;
- (bool)isEqual:(id)arg1;
- (long long)orientation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setChapterHeaderHeight:(double)arg1;
- (void)setChapterHeaderPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDefaultSectionAspectRatio:(double)arg1;
- (void)setDisplaceTopLeadingCardTitle:(bool)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSizeClass:(long long)arg1;
- (long long)sizeClass;

@end
