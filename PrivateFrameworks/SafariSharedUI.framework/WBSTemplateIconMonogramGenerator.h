
@interface WBSTemplateIconMonogramGenerator : NSObject

+ (id)_monogramStringForPreparedTitle:(id)arg1 url:(id)arg2;
+ (id)monogramStringForTitle:(id)arg1 url:(id)arg2;
+ (id)monogramStringForTitle:(id)arg1 url:(id)arg2 shouldRemoveGrammaticalArticles:(bool)arg3;
+ (id)monogramStringForURL:(id)arg1;
+ (id)monogramWithTitle:(id)arg1 url:(id)arg2 backgroundColor:(id)arg3;
+ (id)monogramWithTitle:(id)arg1 url:(id)arg2 monogramConfiguration:(id)arg3;
+ (id)monogramWithTitle:(id)arg1 url:(id)arg2 monogramConfiguration:(id)arg3 shouldRemoveGrammaticalArticles:(bool)arg4;
+ (id)monogramWithTitle:(id)arg1 url:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 fontSize:(double)arg4 fontWeight:(long long)arg5 fontDesign:(long long)arg6 baselineOffset:(double)arg7 backgroundColor:(id)arg8 cornerRadius:(double)arg9;
+ (id)monogramWithTitle:(id)arg1 url:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 fontSize:(double)arg4 fontWeight:(long long)arg5 fontDesign:(long long)arg6 baselineOffset:(double)arg7 backgroundColor:(id)arg8 foregroundColor:(id)arg9 cornerRadius:(double)arg10;
+ (id)monogramWithTitle:(id)arg1 url:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 fontSize:(double)arg4 fontWeight:(long long)arg5 fontDesign:(long long)arg6 baselineOffset:(double)arg7 backgroundColor:(id)arg8 foregroundColor:(id)arg9 cornerRadius:(double)arg10 shouldRemoveGrammaticalArticles:(bool)arg11;

@end
