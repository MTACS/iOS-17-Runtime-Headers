
@interface DBInCallWidgetButtonRingView : UIView {
    UIColor * _fillColor;
    bool  _focusRingVisible;
    bool  _highlighted;
    bool  _selected;
}

@property (nonatomic, retain) UIColor *fillColor;
@property (getter=isFocusRingVisible, nonatomic) bool focusRingVisible;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (getter=isSelected, nonatomic) bool selected;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)fillColor;
- (bool)isFocusRingVisible;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)setFillColor:(id)arg1;
- (void)setFocusRingVisible:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
