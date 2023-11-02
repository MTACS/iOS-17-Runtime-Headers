
@interface MUISnippetGenerator : NSObject

+ (id)highlightedSnippetUsingTokens:(id)arg1 attributedString:(id)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 highlighting:(id /* block */)arg4 error:(id*)arg5;
+ (id)highlightedSnippetUsingTokens:(id)arg1 attributedString:(id)arg2 maxNumberOfWordsBeforeOrAfterToken:(long long)arg3 maxNumberOfRanges:(long long)arg4 highlighting:(id /* block */)arg5 error:(id*)arg6;
+ (id)highlightingAuthorTokens:(id)arg1 authorEmailTokens:(id)arg2 inEmailAttributedString:(id)arg3 highlighting:(id /* block */)arg4 error:(id*)arg5;
+ (id)highlightingTokens:(id)arg1 attributedString:(id)arg2 highlighting:(id /* block */)arg3 error:(id*)arg4;

@end
