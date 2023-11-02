
@interface CCUIStatusLabel : UILabel {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    unsigned long long  _verticalAlignment;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) unsigned long long verticalAlignment;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_updateVisualStyling;
- (void)didMoveToWindow;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)init;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setVerticalAlignment:(unsigned long long)arg1;
- (unsigned long long)verticalAlignment;

@end
