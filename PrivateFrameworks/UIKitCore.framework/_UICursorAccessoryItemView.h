
@interface _UICursorAccessoryItemView : UIControl {
    _UIShapeView * _backgroundView;
    bool  _collapsed;
    struct { 
        NSString *label; 
        UIImage *image; 
        unsigned long long type; 
    }  _content;
    bool  _highlighted;
    UIImageView * _imageView;
    UILabel * _labelView;
    unsigned long long  _roundedEdges;
    unsigned long long  _style;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic) bool collapsed;
@property (nonatomic) struct { id x1; id x2; unsigned long long x3; } content;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) double horizontalPadding;
@property (nonatomic) unsigned long long roundedEdges;
@property (nonatomic) unsigned long long style;

+ (id)_makeImageView;
+ (id)_makeLabelView;

- (void).cxx_destruct;
- (void)_recomputeColors;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)collapsed;
- (struct { id x1; id x2; unsigned long long x3; })content;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (double)horizontalPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isActive;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (unsigned long long)roundedEdges;
- (void)setCollapsed:(bool)arg1;
- (void)setContent:(struct { id x1; id x2; unsigned long long x3; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setRoundedEdges:(unsigned long long)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;

@end
