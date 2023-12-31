
@interface UIPrintFormatter : NSObject <NSCopying> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    bool  _imagePDFAnnotations;
    double  _maximumContentHeight;
    double  _maximumContentWidth;
    bool  _needsRecalc;
    long long  _pageCount;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _perPageContentInsets;
    UIPrintPageRenderer * _printPageRenderer;
    bool  _requiresMainThread;
    long long  _startPage;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) bool imagePDFAnnotations;
@property (nonatomic) double maximumContentHeight;
@property (nonatomic) double maximumContentWidth;
@property (nonatomic, readonly) long long pageCount;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } perPageContentInsets;
@property (nonatomic) UIPrintPageRenderer *printPageRenderer;
@property (nonatomic, readonly) bool requiresMainThread;
@property (nonatomic) long long startPage;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pageContentRect:(bool)arg1;
- (void)_recalcIfNecessary;
- (long long)_recalcPageCount;
- (void)_setNeedsRecalc;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPageAtIndex:(long long)arg2;
- (bool)imagePDFAnnotations;
- (id)init;
- (double)maximumContentHeight;
- (double)maximumContentWidth;
- (long long)pageCount;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })perPageContentInsets;
- (id)printPageRenderer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPageAtIndex:(long long)arg1;
- (void)removeFromPrintPageRenderer;
- (bool)requiresMainThread;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setImagePDFAnnotations:(bool)arg1;
- (void)setMaximumContentHeight:(double)arg1;
- (void)setMaximumContentWidth:(double)arg1;
- (void)setPerPageContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPrintPageRenderer:(id)arg1;
- (void)setStartPage:(long long)arg1;
- (long long)startPage;

@end
