
@interface ICAuthorHighlightsController : NSObject {
    bool  _allowsAnimations;
    ICTTTextEditGrouper * _editGrouper;
    NSCache * _editGroupsForTextStorageDocument;
    double  _fadedMultiplier;
    ICDisplayLink * _highlightAnimationsDisplayLink;
    double  _highlightedMultiplier;
    double  _implicitHighlightValue;
    ICNote * _note;
    NSDate * _now;
    NSTextLayoutManager * _textLayoutManager;
    NSMutableSet * _textStorageDocumentsBeingUpdated;
    NSMutableSet * _textStorageDocumentsNeedingHighlightUpdates;
}

@property (nonatomic) bool allowsAnimations;
@property (nonatomic, readonly) ICTTTextEditGrouper *editGrouper;
@property (nonatomic, readonly) NSCache *editGroupsForTextStorageDocument;
@property (nonatomic) double fadedMultiplier;
@property (nonatomic, readonly) ICDisplayLink *highlightAnimationsDisplayLink;
@property (nonatomic) double highlightedMultiplier;
@property (nonatomic) double implicitHighlightValue;
@property (nonatomic, readonly) ICNote *note;
@property (nonatomic, copy) NSDate *now;
@property (nonatomic, readonly) NSTextLayoutManager *textLayoutManager;
@property (nonatomic, readonly) NSMutableSet *textStorageDocumentsBeingUpdated;
@property (nonatomic, readonly) NSMutableSet *textStorageDocumentsNeedingHighlightUpdates;

- (void).cxx_destruct;
- (bool)allowsAnimations;
- (id)attributesForHighlightingTextLineFragment:(id)arg1 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 defaultRenderingAttributes:(id)arg3 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (void)dealloc;
- (id)editGrouper;
- (id)editGroupsForTextStorage:(id)arg1;
- (id)editGroupsForTextStorageDocument;
- (void)extendHighlightsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextStorage:(id)arg2;
- (void)extendHighlightsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextStorage:(id)arg2 reverse:(bool)arg3;
- (double)fadedMultiplier;
- (void)flashHighlightsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withDuration:(id)arg2 inTextStorage:(id)arg3;
- (id)highlightAnimationsDisplayLink;
- (id)highlightColorForUserID:(id)arg1;
- (double)highlightedMultiplier;
- (id)highlightsAttributedStringForTextStorage:(id)arg1;
- (double)implicitHighlightValue;
- (id)initWithNote:(id)arg1;
- (id)initWithNote:(id)arg1 textLayoutManager:(id)arg2;
- (bool)isAnimating;
- (bool)isPerformingHighlightUpdatesForTextStorage:(id)arg1;
- (id)note;
- (id)now;
- (void)performHighlightUpdatesForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextStorage:(id)arg2 updates:(id /* block */)arg3;
- (bool)rangeHasOrNeedsHighlights:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextStorage:(id)arg2;
- (void)removeHighlightAnimationsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextStorage:(id)arg2;
- (void)removeHighlightValuesForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextStorage:(id)arg2;
- (void)setAllowsAnimations:(bool)arg1;
- (void)setAttachmentHighlightValue:(double)arg1 highlightColor:(id)arg2 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 inTextStorage:(id)arg4;
- (void)setCheckmarkHighlightValue:(double)arg1 highlightColor:(id)arg2 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 inTextStorage:(id)arg4;
- (void)setFadedMultiplier:(double)arg1;
- (void)setHighlightAnimation:(id)arg1 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextStorage:(id)arg3;
- (void)setHighlightAttributesForHighlightValue:(double)arg1 highlightColor:(id)arg2 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 inTextStorage:(id)arg4 editGroups:(id)arg5;
- (void)setHighlightValue:(id)arg1 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextStorage:(id)arg3;
- (void)setHighlightedMultiplier:(double)arg1;
- (void)setImplicitHighlightValue:(double)arg1;
- (void)setNow:(id)arg1;
- (void)setTextHighlightValue:(double)arg1 highlightColor:(id)arg2 blendsTextColor:(bool)arg3 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 inTextStorage:(id)arg5;
- (bool)shouldAnimateInTextStorage:(id)arg1;
- (id)textLayoutManager;
- (void)textStorageDidProcessEndEditing:(id)arg1;
- (id)textStorageDocumentsBeingUpdated;
- (id)textStorageDocumentsNeedingHighlightUpdates;
- (void)updateDerivedConfiguration;
- (void)updateHighlightAnimationsIfNeeded;
- (void)updateHighlightAttributesForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextStorage:(id)arg2;

@end
