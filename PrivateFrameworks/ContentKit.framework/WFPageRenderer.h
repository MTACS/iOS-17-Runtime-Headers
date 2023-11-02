
@interface WFPageRenderer : NSObject {
    bool  _includeMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputSize;
    bool  _matchInputSize;
    UIPrintPageRenderer * _renderer;
}

@property (nonatomic) bool includeMargin;
@property (nonatomic) struct CGSize { double x1; double x2; } inputSize;
@property (nonatomic, readonly) double margin;
@property (nonatomic) bool matchInputSize;
@property (nonatomic, readonly) UIPrintPageRenderer *renderer;

- (void).cxx_destruct;
- (void)_renderToPDF:(id)arg1 startingAtPage:(long long)arg2 endingAtPage:(long long)arg3 completionHandler:(id /* block */)arg4;
- (bool)includeMargin;
- (struct CGSize { double x1; double x2; })inputSize;
- (double)margin;
- (bool)matchInputSize;
- (void)renderPDFPageIndex:(long long)arg1 pages:(long long)arg2 measuredIndicesByFormatter:(id)arg3 drawnIndicesByFormatter:(id)arg4 linkMetricsByWebView:(id)arg5 y:(double)arg6 paperSize:(struct CGSize { double x1; double x2; })arg7 shouldDrawPageAtIndexHandler:(id /* block */)arg8 completionHandler:(id /* block */)arg9;
- (id)renderToImage;
- (void)renderToPDF:(id)arg1 startingAtPage:(long long)arg2 endingAtPage:(long long)arg3 completionHandler:(id /* block */)arg4;
- (id)renderer;
- (void)setIncludeMargin:(bool)arg1;
- (void)setInputSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMatchInputSize:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeForPageAtIndex:(long long)arg1;
- (void)updateRendererSize;

@end
