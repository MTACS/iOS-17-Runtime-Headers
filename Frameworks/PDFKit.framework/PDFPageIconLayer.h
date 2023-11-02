
@interface PDFPageIconLayer : CALayer {
    PDFDocument * _document;
    struct CGSize { 
        double width; 
        double height; 
    }  _frameSize;
    bool  _needsUpdate;
    int  _pageIndex;
}

@property (nonatomic) PDFDocument *document;
@property (nonatomic, readonly) int pageIndex;

- (void).cxx_destruct;
- (id)document;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (int)pageIndex;
- (void)setDocument:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsUpdate;
- (void)updateAsPageIndex:(int)arg1 forDocument:(id)arg2;

@end
