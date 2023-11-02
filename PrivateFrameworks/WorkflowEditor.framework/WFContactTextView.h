
@interface WFContactTextView : UITextView {
    bool  _allowsTextEntry;
    NSSet * _supportedPersonProperties;
}

@property (nonatomic) bool allowsTextEntry;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSSet *supportedPersonProperties;

- (void).cxx_destruct;
- (bool)allowsTextEntry;
- (id)attributesByAddingTintColorToAttributes:(id)arg1;
- (id)attributesForPasting;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)paste:(id)arg1;
- (void)pasteAttributedString:(id)arg1;
- (id)placeholder;
- (void)setAllowsTextEntry:(bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setSupportedPersonProperties:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (id)supportedPersonProperties;
- (void)textDidChange:(id)arg1;
- (void)tintColorDidChange;
- (void)updateTextAttachments;
- (void)updateTextContainerInsets;

@end
