
@interface _EAREditDistance : NSObject

- (void)editAlignmentWithRefText:(id)arg1 hypText:(id)arg2 placeholderSymbol:(id)arg3 caseInsensitive:(bool)arg4 removeWordSense:(bool)arg5 completion:(id /* block */)arg6;
- (void)editAlignmentWithRefTokens:(id)arg1 hypTokens:(id)arg2 placeholderSymbol:(id)arg3 caseInsensitive:(bool)arg4 removeWordSense:(bool)arg5 completion:(id /* block */)arg6;
- (id)editDistanceWithRefText:(id)arg1 hypText:(id)arg2 caseInsensitive:(bool)arg3 removeWordSense:(bool)arg4;
- (id)editDistanceWithRefTokens:(id)arg1 hypTokens:(id)arg2 caseInsensitive:(bool)arg3 removeWordSense:(bool)arg4;

@end
