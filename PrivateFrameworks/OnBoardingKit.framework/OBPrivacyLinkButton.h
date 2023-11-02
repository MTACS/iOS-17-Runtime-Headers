
@interface OBPrivacyLinkButton : UIButton {
    UILabel * _buttonLabel;
    NSString * _buttonText;
    NSString * _captionText;
    UIView * _containerView;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSString * _displayLanguage;
    UIImageView * _iconView;
    bool  _largeIcon;
    UITextView * _textView;
    bool  _underlineLinks;
}

@property (readonly) UILabel *buttonLabel;
@property (readonly) NSString *buttonText;
@property (readonly) NSString *captionText;
@property (readonly) UIView *containerView;
@property struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, retain) NSString *displayLanguage;
@property (readonly) UIImageView *iconView;
@property bool largeIcon;
@property (readonly) UITextView *textView;
@property (nonatomic) bool underlineLinks;

- (void).cxx_destruct;
- (id)_font;
- (bool)_isButtonAboveCaptionText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeForButtonText;
- (void)_updateButtonColorWithColor:(id)arg1;
- (id)buttonAttributes;
- (id)buttonLabel;
- (id)buttonText;
- (id)captionText;
- (id)containerView;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)displayLanguage;
- (id)iconView;
- (id)initWithCaption:(id)arg1 buttonText:(id)arg2 image:(id)arg3 imageSize:(struct CGSize { double x1; double x2; })arg4 useLargeIcon:(bool)arg5 displayLanguage:(id)arg6;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)labelText;
- (bool)largeIcon;
- (void)layoutSubviews;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDisplayLanguage:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLargeIcon:(bool)arg1;
- (void)setUnderlineLinks:(bool)arg1;
- (id)textView;
- (void)tintColorDidChange;
- (id)titleForState:(unsigned long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)underlineLinks;
- (id)viewForLastBaselineLayout;

@end
