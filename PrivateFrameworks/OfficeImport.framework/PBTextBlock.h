
@interface PBTextBlock : NSObject

+ (void)applyTextRuler:(void*)arg1 toTextBlock:(id)arg2;
+ (void)readClientTextBox:(id)arg1 textBody:(id)arg2 state:(id)arg3;
+ (void)readFromStyledText:(struct __CFAttributedString { }*)arg1 toStyledPargraphs:(struct __CFArray { }*)arg2;
+ (void)readFromTextBlock:(id)arg1 toStyledText:(struct __CFAttributedString { }*)arg2;
+ (void)readParagraph:(id)arg1 paragraph:(struct __CFAttributedString { }*)arg2 textType:(int)arg3 state:(id)arg4;

@end
