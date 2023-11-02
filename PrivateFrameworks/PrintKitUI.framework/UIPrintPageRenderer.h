
@interface UIPrintPageRenderer : NSObject {
    long long  _cachedPageCount;
    long long  _currentRenderingQuality;
    double  _footerHeight;
    double  _headerHeight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _paperRect;
    struct CGContext { } * _printContext;
    NSMutableArray * _printFormatters;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _printableRect;
    long long  _requestedRenderingQuality;
    bool  _usingPrintJobContext;
}

@property long long currentRenderingQuality;
@property (nonatomic) double footerHeight;
@property (nonatomic) double headerHeight;
@property (nonatomic, readonly) long long numberOfPages;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } paperRect;
@property (copy) NSArray *printFormatters;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } printableRect;
@property long long requestedRenderingQuality;

- (void).cxx_destruct;
- (void)_drawPage:(long long)arg1 withScale:(double)arg2 drawingToPDF:(bool)arg3;
- (void)_endPrintJobContext;
- (void)_endSaveContext;
- (long long)_maxFormatterPage;
- (long long)_numberOfPages;
- (bool)_numberOfPagesIsCached;
- (void)_removePrintFormatter:(id)arg1;
- (void)_startPrintJobContext:(struct CGContext { }*)arg1;
- (bool)_startPrintJobContext:(id)arg1 printInfo:(id)arg2 printSettings:(id)arg3;
- (void)_startSaveContext:(struct CGContext { }*)arg1;
- (void)addPrintFormatter:(id)arg1 startingAtPageAtIndex:(long long)arg2;
- (long long)currentRenderingQuality;
- (long long)currentRenderingQualityForRequestedRenderingQuality:(long long)arg1;
- (void)dealloc;
- (void)drawContentForPageAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawFooterForPageAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawHeaderForPageAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawPageAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawPrintFormatter:(id)arg1 forPageAtIndex:(long long)arg2;
- (double)footerHeight;
- (double)headerHeight;
- (long long)numberOfPages;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paperRect;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)printFormatters;
- (id)printFormattersForPageAtIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })printableRect;
- (long long)requestedRenderingQuality;
- (void)setCurrentRenderingQuality:(long long)arg1;
- (void)setFooterHeight:(double)arg1;
- (void)setHeaderHeight:(double)arg1;
- (void)setPaperRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPrintFormatters:(id)arg1;
- (void)setPrintableRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRequestedRenderingQuality:(long long)arg1;

@end
