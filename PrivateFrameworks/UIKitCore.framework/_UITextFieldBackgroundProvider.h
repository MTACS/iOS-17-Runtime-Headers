
@interface _UITextFieldBackgroundProvider : NSObject {
    UITextField * _textField;
}

@property (nonatomic, readonly) long long associatedBorderStyle;
@property (nonatomic, readonly) bool drawsContent;
@property (nonatomic, readonly) UITextField *textField;

- (void).cxx_destruct;
- (void)_buildDescription:(id)arg1;
- (bool)_isTV;
- (void)addToTextField:(id)arg1;
- (long long)associatedBorderStyle;
- (void)borderStyleDidChange:(bool)arg1;
- (void)controlSizeDidChange:(bool)arg1;
- (void)decodeWithCoder:(id)arg1;
- (id)description;
- (void)didChangeFirstResponder;
- (bool)drawsContent;
- (void)enabledDidChangeAnimated:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)focusRingPathForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)hash;
- (void)highlightedDidChangeAnimated:(bool)arg1;
- (bool)hitTestView:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)layoutIfNeeded;
- (id)overridingGetBackgroundColor;
- (id)overridingSetBackgroundColor:(id)arg1;
- (void)populateArchivedSubviews:(id)arg1;
- (id)preferredMetricsProvider;
- (void)removeFromTextField;
- (void)selectedDidChangeAnimated:(bool)arg1;
- (void)setNeedsDisplay;
- (id)textField;
- (void)traitCollectionDidChange:(id)arg1;

@end
