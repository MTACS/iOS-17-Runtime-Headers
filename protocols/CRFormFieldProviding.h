
@protocol CRFormFieldProviding <CRDirectionalRegion>

@required

- (CRNormalizedQuad *)boundingQuad;
- (unsigned long long)fieldSource;
- (unsigned long long)fieldType;
- (NSString *)fieldValue;

@optional

- (bool)autofillNewContextStart;
- (bool)hasBoundedHeight;
- (bool)hasBoundedWidth;
- (unsigned long long)maxCharacterCount;
- (void)setAutofillNewContextStart:(bool)arg1;
- (void)setSuggestedLineHeight:(double)arg1;
- (void)setTextContentType:(unsigned long long)arg1;
- (double)suggestedLineHeight;
- (unsigned long long)textContentType;

@end
