
@interface UIAutocorrectBubble : UIView {
    UIImageView * _backgroundView;
    UILabel * _textLabel;
}

@property (nonatomic, readonly) UIImageView *backgroundView;
@property (nonatomic, readonly) UILabel *textLabel;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)backgroundView;
- (id)init;
- (id)lastBaselineAnchor;
- (id)textLabel;
- (void)updateWithAutocorrectionText:(id)arg1;

@end
