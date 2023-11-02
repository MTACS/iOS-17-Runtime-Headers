
@interface DMCEnrollmentLinkLabelView : UIView {
    bool  _enabled;
    UIImageView * _imageView;
    id /* block */  _linkHandler;
    NSString * _linkMessage;
    NSString * _message;
    UILabel * _textLabel;
}

@property (nonatomic) bool enabled;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, copy) id /* block */ linkHandler;
@property (nonatomic, copy) NSString *linkMessage;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) UILabel *textLabel;

- (void).cxx_destruct;
- (void)_populateTextLabelWithMessage:(id)arg1 linkMessage:(id)arg2;
- (id)_textFont;
- (bool)enabled;
- (id)imageView;
- (id)initWithIcon:(id)arg1 message:(id)arg2 linkMessage:(id)arg3 linkHandler:(id /* block */)arg4;
- (void)layoutSubviews;
- (id /* block */)linkHandler;
- (id)linkMessage;
- (id)message;
- (void)setEnabled:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setLinkHandler:(id /* block */)arg1;
- (void)setLinkMessage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textLabel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
