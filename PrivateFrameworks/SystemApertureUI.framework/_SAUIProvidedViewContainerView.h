
@interface _SAUIProvidedViewContainerView : UIView {
    SAUIElementView * _elementView;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastSize;
    _SAUIPortalView * _portalView;
    bool  _portalsProvidedView;
    UIView * _providedView;
}

@property (nonatomic) SAUIElementView *elementView;
@property (nonatomic, readonly) bool portalsProvidedView;
@property (nonatomic, retain) UIView *providedView;

- (void).cxx_destruct;
- (id)_contentView;
- (id)elementView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)portalsProvidedView;
- (id)providedView;
- (void)setElementView:(id)arg1;
- (void)setProvidedView:(id)arg1;

@end
