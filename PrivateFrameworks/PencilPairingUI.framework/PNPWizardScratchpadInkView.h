
@interface PNPWizardScratchpadInkView : UIView {
    UIImageView * _imageView;
    PKInk * _ink;
    bool  _pressed;
    bool  _selected;
}

@property (nonatomic, readonly) PKInk *ink;
@property (nonatomic) bool pressed;
@property (nonatomic) bool selected;

+ (void)initialize;
+ (double)preferredHeight;

- (void).cxx_destruct;
- (id)initWithIndex:(long long)arg1;
- (id)ink;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)pressed;
- (bool)selected;
- (void)setPressed:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
