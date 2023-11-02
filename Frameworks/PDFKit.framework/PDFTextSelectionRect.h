
@interface PDFTextSelectionRect : UITextSelectionRect {
    bool  _isEndingRect;
    bool  _isStartingRect;
    PDFPage * _page;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
}

- (void).cxx_destruct;
- (bool)containsEnd;
- (bool)containsStart;
- (id)description;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onPage:(id)arg2;
- (bool)isVertical;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setIsEndingRect:(bool)arg1;
- (void)setIsStartingRect:(bool)arg1;
- (long long)writingDirection;

@end
