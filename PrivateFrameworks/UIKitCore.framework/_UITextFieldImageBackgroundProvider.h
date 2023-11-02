
@interface _UITextFieldImageBackgroundProvider : _UITextFieldViewBackgroundProvider {
    _UITextFieldImageBackgroundView * _backgroundView;
}

- (void).cxx_destruct;
- (void)_applyCorrectImage;
- (void)addToTextField:(id)arg1;
- (id)backgroundView;
- (void)enabledDidChangeAnimated:(bool)arg1;
- (void)layoutIfNeeded;
- (void)setNeedsDisplay;

@end
