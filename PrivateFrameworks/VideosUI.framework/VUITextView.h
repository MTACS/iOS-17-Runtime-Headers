
@interface VUITextView : UITextView

@property (nonatomic, retain) NSAttributedString *vuiAttributedText;
@property (nonatomic, retain) NSString *vuiText;
@property (nonatomic) long long vuiTextAlignment;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } vuiTextContainerInset;

- (id)_defaultParagraphStyle;
- (void)setVuiAttributedText:(id)arg1;
- (void)setVuiBackgroundColor:(id)arg1;
- (void)setVuiText:(id)arg1;
- (void)setVuiTextAlignment:(long long)arg1;
- (void)setVuiTextContainerInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)vuiAttributedText;
- (id)vuiText;
- (long long)vuiTextAlignment;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })vuiTextContainerInset;
- (struct CGSize { double x1; double x2; })vui_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
