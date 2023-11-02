
@interface PKTextAttachmentResizeView : UIView {
    <PKTextAttachmentResizeViewDelegate> * _delegate;
    bool  _enabled;
    bool  _highlighted;
    PKDrawingAdjustmentKnob * _knobView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _originalContentInset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalDrawingBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalViewBounds;
    UIView * _separatorHighlightedView;
    UIView * _separatorView;
    bool  _top;
}

@property (nonatomic) <PKTextAttachmentResizeViewDelegate> *delegate;
@property (nonatomic) bool enabled;
@property (nonatomic) bool highlighted;
@property (nonatomic, retain) PKDrawingAdjustmentKnob *knobView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } originalContentInset;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } originalDrawingBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } originalViewBounds;
@property (nonatomic, readonly) double resizeContentInset;
@property (nonatomic, retain) UIView *separatorHighlightedView;
@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic, readonly) bool shown;
@property (nonatomic, readonly) bool top;

+ (double)resizeHitSize;

- (void).cxx_destruct;
- (id)delegate;
- (void)didMoveToWindow;
- (void)drawingScrollViewDidScroll:(id)arg1;
- (bool)enabled;
- (void)handleGesture:(id)arg1;
- (bool)highlighted;
- (id)initAtTop:(bool)arg1 delegate:(id)arg2;
- (id)knobView;
- (void)layoutInsideSuperview;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })originalContentInset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originalDrawingBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originalViewBounds;
- (double)resizeContentInset;
- (id)separatorHighlightedView;
- (id)separatorView;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setKnobView:(id)arg1;
- (void)setOriginalContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOriginalDrawingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOriginalViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSeparatorHighlightedView:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)show:(bool)arg1 enabled:(bool)arg2 animated:(bool)arg3;
- (bool)shown;
- (bool)top;

@end
