
@interface PDFHighlightDetectedFormFieldsEffectLayer : CALayer {
    NSMutableArray * _addedSublayers;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropBox;
    long long  _displayBox;
    PDFPage * _page;
}

- (void).cxx_destruct;
- (id)_addRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withColor:(id)arg2 backgroundColor:(id)arg3 labelText:(id)arg4 itemIndex:(unsigned long long)arg5;
- (id)initWithPage:(id)arg1;
- (void)setDisplayBox:(long long)arg1;
- (void)updateVisibleLayers;

@end
