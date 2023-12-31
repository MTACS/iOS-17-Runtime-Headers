
@interface PDFCoachMarkManager : NSObject {
    PDFCoachMarkManagerPrivate * _private;
}

- (void).cxx_destruct;
- (void)_cleanCoachMarks;
- (id)_pageLayerForPage:(id)arg1;
- (void)createCoachMarkForPage:(id)arg1 atFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithPDFRenderingProperties:(id)arg1;
- (void)pageLayerDidAppear:(id)arg1;
- (void)pageLayerWillRemove:(id)arg1;

@end
