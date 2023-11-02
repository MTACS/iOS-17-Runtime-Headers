
@interface _UITextSelectionRangeAdjustmentContainerView : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endEdge;
    bool  _portalsLollipopDotsToContainerWindow;
    NSArray * _selectionGrabbers;
    bool  _selectionGrabbersAreConcreteImpl;
    bool  _selectionGrabbersHidden;
    double  _shapeScale;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _startEdge;
    bool  _vertical;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endEdge;
@property (nonatomic, readonly) UIView<UITextSelectionHandleView> *leadingLollipopView;
@property (nonatomic) bool portalsLollipopDotsToContainerWindow;
@property (nonatomic, retain) NSArray *selectionGrabbers;
@property (getter=areSelectionGrabbersConcreteImpl, nonatomic, readonly) bool selectionGrabbersAreConcreteImpl;
@property (getter=areSelectionGrabbersHidden, nonatomic) bool selectionGrabbersHidden;
@property (nonatomic) double shapeScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } startEdge;
@property (nonatomic, readonly) UIView<UITextSelectionHandleView> *trailingLollipopView;
@property (getter=isVertical, nonatomic) bool vertical;

- (void).cxx_destruct;
- (void)_getBounds:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 position:(out struct CGPoint { double x1; double x2; }*)arg2 fromPreferredFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_setPortalsLollipopDotsToContainerWindow:(bool)arg1;
- (bool)areSelectionGrabbersConcreteImpl;
- (bool)areSelectionGrabbersHidden;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endEdge;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isVertical;
- (void)layoutSubviews;
- (id)leadingLollipopView;
- (bool)portalsLollipopDotsToContainerWindow;
- (id)selectionGrabbers;
- (void)setEndEdge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setPortalsLollipopDotsToContainerWindow:(bool)arg1;
- (void)setSelectionGrabbers:(id)arg1;
- (void)setSelectionGrabbersHidden:(bool)arg1;
- (void)setShapeScale:(double)arg1;
- (void)setStartEdge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVertical:(bool)arg1;
- (double)shapeScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startEdge;
- (id)textInputView;
- (id)trailingLollipopView;

@end
