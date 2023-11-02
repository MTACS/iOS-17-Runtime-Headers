
@interface _UITextViewSearchableObject : NSObject <UITextSearching> {
    NSMutableSet * _decoratedTextRanges;
    NSMutableSet * _decorationAttributes;
    UITextSearchingDimmingView * _dimmingView;
    bool  _dimmingViewVisible;
    UIImageView * _highlightContentsImageView;
    UITextHighlightView * _highlightView;
    bool  _highlightViewVisible;
    UITextRange * _highlightedTextRange;
    UITextView * _textView;
    UITextRange * _visuallyHighlightedTextRange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) UITextRange *selectedTextRange;
@property (readonly) <NSObject><NSCopying> *selectedTextSearchDocument;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsTextReplacement;
@property (nonatomic, readonly) UITextView *textView;

- (void).cxx_destruct;
- (id)_activeFindSession;
- (void)_ensureSubviewOrder;
- (void)_performTextSearchWithQueryString:(id)arg1 usingOptions:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)_rangeProvider;
- (void)_setDimmingViewVisible:(bool)arg1;
- (void)_setHighlightViewVisible:(bool)arg1;
- (id)_textLineRectsForRange:(id)arg1;
- (void)_updateHighlightLabelForMatchedRange:(id)arg1;
- (bool)_usesTransientHighlightBehavior;
- (struct { bool x1; bool x2; })_wordTerminationCharacteristicsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)clearAllDecoratedFoundText;
- (void)clearHighlightView;
- (long long)compareFoundRange:(id)arg1 toRange:(id)arg2 inDocument:(id)arg3;
- (void)decorateFoundTextRange:(id)arg1 inDocument:(id)arg2 usingStyle:(long long)arg3;
- (void)didBeginFindSession;
- (void)didEndFindSession;
- (id)initWithTextView:(id)arg1;
- (void)layoutManagedSubviews;
- (void)performTextSearchWithQueryString:(id)arg1 usingOptions:(id)arg2 resultAggregator:(id)arg3;
- (void)replaceAllOccurrencesOfQueryString:(id)arg1 usingOptions:(id)arg2 withText:(id)arg3;
- (void)replaceFoundTextInRange:(id)arg1 inDocument:(id)arg2 withText:(id)arg3;
- (void)scrollRangeToVisible:(id)arg1 inDocument:(id)arg2;
- (id)selectedTextRange;
- (bool)shouldReplaceFoundTextInRange:(id)arg1 inDocument:(id)arg2 withText:(id)arg3;
- (bool)supportsTextReplacement;
- (id)targetedPreviewForHighlightRange:(id)arg1;
- (id)textView;
- (void)useSelectionForFind;
- (void)willHighlightFoundTextRange:(id)arg1 inDocument:(id)arg2;

@end
