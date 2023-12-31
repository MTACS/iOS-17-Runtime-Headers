
@protocol TSWPStyleProvider <NSObject>

@required

- (TSWPParagraphStyle *)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;

@optional

- (<TSWPCoreTextPropertiesFilterDelegate> *)coreTextPropertiesFilterDelegateAtParIndex:(unsigned long long)arg1;
- (TSWPParagraphStyle *)listLabelParagraphStyleOverrideAtParIndex:(unsigned long long)arg1;
- (unsigned long long)listNumberAtParIndex:(unsigned long long)arg1 numberingData:(struct { int x1; unsigned long long x2; bool x3; }*)arg2;
- (TSWPListStyle *)listStyleAtParIndex:(unsigned long long)arg1;
- (TSWPCharacterStyle *)modifiedCharacterStyle:(TSWPCharacterStyle *)arg1 atCharIndex:(unsigned long long)arg2;
- (unsigned long long)paragraphLevelAtParIndex:(unsigned long long)arg1;
- (bool)supportsBoldItalicUnderlineShortcuts;

@end
