
@interface PDFPageLabelView : UIView {
    PDFPageLabelViewPrivate * _private;
}

- (void).cxx_destruct;
- (void)_startFade;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentPageNumber:(unsigned long long)arg1 forPageCount:(unsigned long long)arg2;
- (void)updateEffect;

@end
