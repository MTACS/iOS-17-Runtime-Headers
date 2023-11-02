
@protocol AKTextAnnotationProtocol <NSObject>

@required

- (NSTextStorage *)annotationText;
- (unsigned long long)formContentType;
- (bool)isEditingText;
- (bool)isHighlighted;
- (unsigned long long)maximumNumberOfCharacters;
- (void)setAnnotationText:(NSTextStorage *)arg1;
- (void)setFormContentType:(unsigned long long)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIsEditingText:(bool)arg1;
- (void)setMaximumNumberOfCharacters:(unsigned long long)arg1;
- (void)setShouldUsePlaceholderText:(bool)arg1;
- (void)setTextContentType:(NSString *)arg1;
- (void)setTextIsClipped:(bool)arg1;
- (void)setTextIsFixedHeight:(bool)arg1;
- (void)setTextIsFixedWidth:(bool)arg1;
- (void)setTypingAttributes:(NSDictionary *)arg1;
- (bool)shouldUsePlaceholderText;
- (NSString *)textContentType;
- (bool)textIsClipped;
- (bool)textIsFixedHeight;
- (bool)textIsFixedWidth;
- (NSDictionary *)typingAttributes;

@end
