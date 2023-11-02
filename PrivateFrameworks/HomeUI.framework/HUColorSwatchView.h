
@interface HUColorSwatchView : UIView {
    CAShapeLayer * _circleLayer;
    UILabel * _label;
    bool  _labelHidden;
    CAShapeLayer * _selectedCircleInnerLayer;
    CAShapeLayer * _selectedCircleLayer;
    CAShapeLayer * _selectedCircleOuterLayer;
    unsigned long long  _selectionState;
    NSString * _text;
}

@property (nonatomic, retain) CAShapeLayer *circleLayer;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic) bool labelHidden;
@property (nonatomic, retain) CAShapeLayer *selectedCircleInnerLayer;
@property (nonatomic, retain) CAShapeLayer *selectedCircleLayer;
@property (nonatomic, retain) CAShapeLayer *selectedCircleOuterLayer;
@property (nonatomic) unsigned long long selectionState;
@property (nonatomic, retain) NSString *text;

+ (Class)layerClass;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateLayout;
- (void)_updateTextColor;
- (id)circleLayer;
- (id)color;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 text:(id)arg2;
- (id)label;
- (bool)labelHidden;
- (void)layoutSubviews;
- (id)selectedCircleInnerLayer;
- (id)selectedCircleLayer;
- (id)selectedCircleOuterLayer;
- (unsigned long long)selectionState;
- (void)setCircleLayer:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelHidden:(bool)arg1;
- (void)setSelectedCircleInnerLayer:(id)arg1;
- (void)setSelectedCircleLayer:(id)arg1;
- (void)setSelectedCircleOuterLayer:(id)arg1;
- (void)setSelectionState:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)traitCollectionDidChange:(id)arg1;

@end
