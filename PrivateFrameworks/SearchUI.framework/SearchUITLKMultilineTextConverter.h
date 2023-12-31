
@interface SearchUITLKMultilineTextConverter : NSObject

+ (void)applyRichText:(id)arg1 toTLKRichText:(id)arg2 isAsync:(bool)arg3;
+ (id)formattedTextForSearchUIText:(id)arg1;
+ (id)richTextForSearchUIText:(id)arg1;
+ (id)richTextForSearchUIText:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (bool)richTextOverridesAsyncLoader:(id)arg1;
+ (id)textForSearchUIString:(id)arg1;
+ (id)textForSearchUIText:(id)arg1;

@end
