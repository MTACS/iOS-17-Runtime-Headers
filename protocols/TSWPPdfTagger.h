
@protocol TSWPPdfTagger <TSKPdfTagger>

@required

- (void)beginAncillaryTextRunWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 baseTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)beginLineFragmentBodyWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)beginLineFragmentWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)beginListLabel;
- (void)beginOneColumnText:(TSWPText *)arg1 column:(TSWPColumn *)arg2 limitSelection:(TSWPSelection *)arg3;
- (void)beginPrimaryTextRunWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 hasActualContents:(bool)arg2;
- (void)beginRubyRunWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 baseTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)beginTateChuYokoRunWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 baseTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)beginTextColumn:(TSWPColumn *)arg1 limitSelection:(TSWPSelection *)arg2;
- (void)beginTextStorageChunk:(TSWPRep *)arg1 limitSelection:(id)arg2;
- (void)endAncillaryTextRunWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 baseTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)endLineFragmentBodyWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)endLineFragmentWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)endListLabel;
- (void)endOneColumnText:(TSWPText *)arg1 column:(TSWPColumn *)arg2;
- (void)endPrimaryTextRunWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 hasActualContents:(bool)arg2;
- (void)endRubyRunWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 baseTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)endTateChuYokoRunWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 baseTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)endTextColumn:(TSWPColumn *)arg1;
- (void)endTextStorageChunk:(TSWPRep *)arg1;
- (void)handleDropCapAdornment:(TSWPDropCapAdornment *)arg1;
- (bool)needsSeparateRunsForLineFragmentWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
