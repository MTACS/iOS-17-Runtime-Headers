
@interface PXPeopleSuggestionsMediaProvider : NSObject

- (void)cancelRequest:(int)arg1;
- (int)requestImageForPersonSuggestion:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3 cropFactor:(unsigned long long)arg4 style:(unsigned long long)arg5 completionBlock:(id /* block */)arg6;

@end
