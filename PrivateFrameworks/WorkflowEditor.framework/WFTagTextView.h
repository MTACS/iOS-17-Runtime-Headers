
@interface WFTagTextView : UITextView

@property (nonatomic, copy) NSString *placeholder;

- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)paste:(id)arg1;
- (id)placeholder;
- (void)setAttributedText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)textDidChange:(id)arg1;
- (void)updateTextAttachments;
- (void)updateTextContainerInsets;

@end
