
@interface AVTCarouselPlusButtonView : UIView {
    bool  _allowHighlight;
    UIButton * _button;
    AVTUIEnvironment * _environment;
    bool  _highlighted;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxItemSize;
}

@property (nonatomic) bool allowHighlight;
@property (nonatomic, readonly) UIButton *button;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) struct CGSize { double x1; double x2; } maxItemSize;

- (void).cxx_destruct;
- (bool)allowHighlight;
- (id)button;
- (id)environment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 environment:(id)arg2;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })maxItemSize;
- (void)setAllowHighlight:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaxItemSize:(struct CGSize { double x1; double x2; })arg1;

@end
