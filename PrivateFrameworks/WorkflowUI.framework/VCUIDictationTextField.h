
@interface VCUIDictationTextField : UITextView

+ (double)bottomPadding;

- (void)dictationDidFinish:(id)arg1;
- (void)didMoveToSuperview;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)placeholderLabel;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)startDictation;

@end
