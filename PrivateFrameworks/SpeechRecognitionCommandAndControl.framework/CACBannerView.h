
@interface CACBannerView : UIView {
    UIImageView * _accessoryImageView;
    NSAttributedString * _attributedText;
    UIView * _baseView;
    NSLayoutConstraint * _imageToTextConstraint;
    NSString * _symbolImage;
    UILabel * _textLabel;
}

@property (nonatomic, retain) UIImageView *accessoryImageView;
@property (nonatomic, retain) NSAttributedString *attributedText;
@property (nonatomic, retain) UIView *baseView;
@property (nonatomic, retain) NSLayoutConstraint *imageToTextConstraint;
@property (nonatomic, retain) NSString *symbolImage;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) UILabel *textLabel;

- (void).cxx_destruct;
- (id)accessoryImageView;
- (id)attributedText;
- (id)baseView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)imageToTextConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessoryImageView:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBaseView:(id)arg1;
- (void)setImageToTextConstraint:(id)arg1;
- (void)setSymbolImage:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (id)symbolImage;
- (id)text;
- (id)textLabel;

@end
