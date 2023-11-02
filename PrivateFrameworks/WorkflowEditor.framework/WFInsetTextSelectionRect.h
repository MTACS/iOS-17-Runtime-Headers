
@interface WFInsetTextSelectionRect : UITextSelectionRect {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    UITextSelectionRect * _selectionRect;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic, readonly) UITextSelectionRect *selectionRect;

- (void).cxx_destruct;
- (bool)containsEnd;
- (bool)containsStart;
- (id)initWithSelectionRect:(id)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (bool)isVertical;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (id)selectionRect;
- (long long)writingDirection;

@end
