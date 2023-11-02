
@interface UICalloutBarBackground : UIView {
    UIVisualEffectView * _blurView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _highlightRect;
    UIImageView * _selectionTintView;
    _UICalloutBarVisualStyle * m_visualStyle;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } highlightRect;
@property (nonatomic, retain) _UICalloutBarVisualStyle *visualStyle;

- (void).cxx_destruct;
- (id)blurViewBackgroundEffects;
- (id)containerBackgroundColor;
- (double)cornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })highlightRect;
- (id)initWithVisualStyle:(id)arg1;
- (void)layoutSubviews;
- (bool)prefersCustomSelection;
- (void)setHighlightRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1 forFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setVisualStyle:(id)arg1;
- (id)visualStyle;

@end
