
@interface CACTextEditingProvider : NSObject <SRCSTextEditingProviderProtocol> {
    AXElement * _axElement;
    CACSpokenCommand * _spokenCommand;
    SRCSTextEditing * _textEditingEngine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) SRCSTextEditing *textEditingEngine;

- (void).cxx_destruct;
- (id)_nBestListFromPreviousTextInsertionForAXElement:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeFromPreviousTextInsertionForAXElement:(id)arg1;
- (id)actOnStrings:(id)arg1 ambiguityResolution:(id)arg2 substringSearchGranularity:(int)arg3 alwaysCallActionOnClosestMatch:(bool)arg4 options:(id)arg5 actionBlock:(id /* block */)arg6;
- (void)applyFormat;
- (void)deleteText;
- (void)deleteTextAtTextMarkerRange:(id)arg1;
- (id)emojisMatchingTextInStrings:(id)arg1;
- (id)firstPositionTextMarker;
- (void)formatSelectionBold;
- (void)formatSelectionItalics;
- (void)formatSelectionUnderline;
- (void)handleCorrectionRequestWithStrings:(id)arg1;
- (void)handleErrorIdentifier:(id)arg1 withObjects:(id)arg2;
- (void)handleSearchResultsWithRecognizedCommandParameters:(id)arg1 variantOverrides:(id)arg2;
- (void)handleTextDisambiguationWithPhraseMatchResults:(id)arg1 actionBlock:(id /* block */)arg2;
- (id)initWithSpokenCommand:(id)arg1 axElement:(id)arg2;
- (void)insertAttributedString:(id)arg1;
- (void)insertString:(id)arg1;
- (bool)isNextPreviousResolverSpokenCommandEmojiBased;
- (bool)isTextDisambiguationSupported;
- (bool)isVisibleTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)isVisibleTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lastPositionTextMarker;
- (unsigned long long)lengthFromMarker:(id)arg1 toMarker:(id)arg2;
- (bool)marker:(id)arg1 precedesMarker:(id)arg2;
- (bool)marker:(id)arg1 precedesOrEqualsMarker:(id)arg2;
- (id)markerRangeForEnumerationType:(long long)arg1 desiredBlock:(int)arg2 count:(unsigned long long)arg3 options:(int)arg4;
- (id)markerRangeForLineAtTextMarker:(id)arg1;
- (id)nBestListFromPreviousTextInsertion;
- (void)performTextCopy;
- (void)performTextCut;
- (void)performTextPaste;
- (void)performTextRedo;
- (void)performTextSelectAll;
- (void)performTextUndo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)registerInsertedStringCategoryIdentifer:(id)arg1;
- (int)searchGranularity;
- (id)selectionTextMarkerRange;
- (void)setCompletionDeterminedManually:(bool)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setSelectionToTextMarkerRange:(id)arg1;
- (bool)shouldInsertInterWordSpaces;
- (int)statusOfEmojisFoundInString:(id)arg1;
- (id)stringForTextMarkerRange:(id)arg1;
- (id)textEditingEngine;
- (Class)textMarkerClass;
- (Class)textMarkerRangeClass;
- (id)textMarkerRangeFromPreviousTextInsertion;

@end
