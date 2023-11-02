
@interface _UIActivityIndicatorMessageLabel : UILabel {
    NSDictionary * _effectiveTextAttributes;
    NSDictionary * _regularTextAttributes;
}

@property (nonatomic, readonly, copy) NSDictionary *effectiveTextAttributes;
@property (nonatomic, copy) NSDictionary *regularTextAttributes;
@property (nonatomic, readonly) double verticalSpacingToSpinner;

+ (id)defaultRegularContentSizeTextAttributes;

- (void).cxx_destruct;
- (id)_effectiveAttributesDerivedFromRegularTextAttributes:(id)arg1;
- (double)_effectiveVerticalSpacingToSpinner;
- (void)_ensureCapableOfCalculatingBaselineOffsets;
- (id)_validatedAttributedString:(id)arg1;
- (id)effectiveTextAttributes;
- (id)initWithRegularTextAttributes:(id)arg1;
- (id)regularTextAttributes;
- (void)setAttributedText:(id)arg1;
- (void)setEffectiveTextAttributes:(id)arg1;
- (void)setRegularTextAttributes:(id)arg1;
- (void)setText:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (double)verticalSpacingToSpinner;

@end
