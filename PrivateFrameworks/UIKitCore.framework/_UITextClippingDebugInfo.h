
@interface _UITextClippingDebugInfo : NSObject {
    bool  _bottomEdgeClipped;
    UIView * _clippingView;
    unsigned long long  _edgesClipped;
    bool  _ignoresResult;
    bool  _leftEdgeClipped;
    bool  _rightEdgeClipped;
    bool  _topEdgeClipped;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleBounds;
}

@property (nonatomic) bool bottomEdgeClipped;
@property (nonatomic) UIView *clippingView;
@property (nonatomic) unsigned long long edgesClipped;
@property (nonatomic) bool ignoresResult;
@property (nonatomic) bool leftEdgeClipped;
@property (nonatomic) bool rightEdgeClipped;
@property (nonatomic) bool topEdgeClipped;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBounds;

- (void).cxx_destruct;
- (bool)bottomEdgeClipped;
- (id)clippingView;
- (unsigned long long)edgesClipped;
- (bool)ignoresResult;
- (id)initWithClippingView:(id)arg1 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ignoresResult:(bool)arg3 edgesClipped:(unsigned long long)arg4;
- (bool)leftEdgeClipped;
- (bool)rightEdgeClipped;
- (void)setBottomEdgeClipped:(bool)arg1;
- (void)setClippingView:(id)arg1;
- (void)setEdgesClipped:(unsigned long long)arg1;
- (void)setIgnoresResult:(bool)arg1;
- (void)setLeftEdgeClipped:(bool)arg1;
- (void)setRightEdgeClipped:(bool)arg1;
- (void)setTopEdgeClipped:(bool)arg1;
- (void)setVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)topEdgeClipped;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;

@end
