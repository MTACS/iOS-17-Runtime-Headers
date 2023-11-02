
@interface SBHFloatyFolderVisualConfiguration : NSObject <BSDescriptionProviding, NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentBackgroundSize;
    double  _continuousCornerRadius;
    double  _pageControlAreaHeight;
    struct CGSize { 
        double width; 
        double height; 
    }  _pageControlCustomPadding;
    double  _rubberBandIntervalForOverscroll;
    double  _titleFontSize;
    double  _titleHorizontalInset;
}

@property (nonatomic) struct CGSize { double x1; double x2; } contentBackgroundSize;
@property (nonatomic) double continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double pageControlAreaHeight;
@property (nonatomic) struct CGSize { double x1; double x2; } pageControlCustomPadding;
@property (nonatomic) double rubberBandIntervalForOverscroll;
@property (readonly) Class superclass;
@property (nonatomic) double titleFontSize;
@property (nonatomic) double titleHorizontalInset;

- (struct CGSize { double x1; double x2; })contentBackgroundSize;
- (double)continuousCornerRadius;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (double)pageControlAreaHeight;
- (struct CGSize { double x1; double x2; })pageControlCustomPadding;
- (double)rubberBandIntervalForOverscroll;
- (void)setContentBackgroundSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContinuousCornerRadius:(double)arg1;
- (void)setPageControlAreaHeight:(double)arg1;
- (void)setPageControlCustomPadding:(struct CGSize { double x1; double x2; })arg1;
- (void)setRubberBandIntervalForOverscroll:(double)arg1;
- (void)setTitleFontSize:(double)arg1;
- (void)setTitleHorizontalInset:(double)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (double)titleFontSize;
- (double)titleHorizontalInset;

@end
