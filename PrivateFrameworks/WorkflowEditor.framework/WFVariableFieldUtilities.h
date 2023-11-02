
@interface WFVariableFieldUtilities : NSObject

+ (bool)clipboardContainsVariableString;
+ (void)copyVariableString:(id)arg1 toPasteboard:(id)arg2;
+ (bool)pasteboardContainsVariableString:(id)arg1;
+ (id)serializedVariableStringFromPasteboard:(id)arg1;

@end
