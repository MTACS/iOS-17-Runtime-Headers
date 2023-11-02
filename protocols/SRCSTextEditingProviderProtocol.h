
@protocol SRCSTextEditingProviderProtocol <NSObject>

@required

- (NSString *)actOnStrings:(void *)arg1 ambiguityResolution:(void *)arg2 substringSearchGranularity:(void *)arg3 alwaysCallActionOnClosestMatch:(void *)arg4 options:(void *)arg5 actionBlock:(void *)arg6; // needs 6 arg types, found 12: NSArray *, NSString *, int, bool, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SRCSTextMarkerRangeProtocol> *, NSString *, void*
- (void)deleteText;
- (void)deleteTextAtTextMarkerRange:(id <SRCSTextMarkerRangeProtocol>)arg1;
- (NSArray *)emojisMatchingTextInStrings:(NSArray *)arg1;
- (<SRCSTextMarkerProtocol> *)firstPositionTextMarker;
- (void)formatSelectionBold;
- (void)formatSelectionItalics;
- (void)formatSelectionUnderline;
- (void)handleCorrectionRequestWithStrings:(NSArray *)arg1;
- (void)handleErrorIdentifier:(NSString *)arg1 withObjects:(NSArray *)arg2;
- (void)handleSearchResultsWithRecognizedCommandParameters:(NSDictionary *)arg1 variantOverrides:(NSDictionary *)arg2;
- (void)handleTextDisambiguationWithPhraseMatchResults:(void *)arg1 actionBlock:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SRCSTextMarkerRangeProtocol> *, NSString *, void*
- (void)insertAttributedString:(NSAttributedString *)arg1;
- (void)insertString:(NSString *)arg1;
- (bool)isNextPreviousResolverSpokenCommandEmojiBased;
- (bool)isTextDisambiguationSupported;
- (bool)isVisibleTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)isVisibleTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (<SRCSTextMarkerProtocol> *)lastPositionTextMarker;
- (unsigned long long)lengthFromMarker:(id <SRCSTextMarkerProtocol>)arg1 toMarker:(id <SRCSTextMarkerProtocol>)arg2;
- (bool)marker:(id <SRCSTextMarkerProtocol>)arg1 precedesMarker:(id <SRCSTextMarkerProtocol>)arg2;
- (bool)marker:(id <SRCSTextMarkerProtocol>)arg1 precedesOrEqualsMarker:(id <SRCSTextMarkerProtocol>)arg2;
- (<SRCSTextMarkerRangeProtocol> *)markerRangeForEnumerationType:(long long)arg1 desiredBlock:(int)arg2 count:(unsigned long long)arg3 options:(int)arg4;
- (<SRCSTextMarkerRangeProtocol> *)markerRangeForLineAtTextMarker:(id <SRCSTextMarkerProtocol>)arg1;
- (NSArray *)nBestListFromPreviousTextInsertion;
- (void)performTextCopy;
- (void)performTextCut;
- (void)performTextPaste;
- (void)performTextRedo;
- (void)performTextSelectAll;
- (void)performTextUndo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)registerInsertedStringCategoryIdentifer:(NSString *)arg1;
- (int)searchGranularity;
- (<SRCSTextMarkerRangeProtocol> *)selectionTextMarkerRange;
- (void)setCompletionDeterminedManually:(bool)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setSelectionToTextMarkerRange:(id <SRCSTextMarkerRangeProtocol>)arg1;
- (bool)shouldInsertInterWordSpaces;
- (int)statusOfEmojisFoundInString:(NSString *)arg1;
- (NSString *)stringForTextMarkerRange:(id <SRCSTextMarkerRangeProtocol>)arg1;
- (NSString *)targetApplicationBundleIdentifier;
- (Class)textMarkerClass;
- (Class)textMarkerRangeClass;
- (<SRCSTextMarkerRangeProtocol> *)textMarkerRangeFromPreviousTextInsertion;

@end
