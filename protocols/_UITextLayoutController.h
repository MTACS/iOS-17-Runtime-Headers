
@protocol _UITextLayoutController <NSObject>

@required

- (UITextRange *)_visualSelectionRangeForExtent:(UITextPosition *)arg1 forPoint:(struct CGPoint { double x1; double x2; })arg2 fromPosition:(UITextPosition *)arg3 inDirection:(long long)arg4;
- (void)addAnnotationAttribute:(NSString *)arg1 value:(id)arg2 forRange:(UITextRange *)arg3;
- (void)addGhostedRange:(UITextRange *)arg1;
- (void)addInvisibleRange:(UITextRange *)arg1;
- (void)addRenderingAttributes:(NSDictionary *)arg1 forRange:(UITextRange *)arg2;
- (long long)affinityForPosition:(UITextPosition *)arg1;
- (NSAttributedString *)annotatedSubstringForRange:(UITextRange *)arg1;
- (id)annotationAttribute:(NSString *)arg1 atPosition:(UITextPosition *)arg2;
- (NSAttributedString *)attributedTextInRange:(UITextRange *)arg1;
- (NSDictionary *)attributesAtPosition:(UITextPosition *)arg1 inDirection:(long long)arg2;
- (long long)baseWritingDirectionAtPosition:(UITextPosition *)arg1;
- (double)baselineOffsetForFirstGlyph;
- (UITextPosition *)beginningOfDocument;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForRange:(UITextRange *)arg1;
- (bool)canAccessLayoutManager;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRangeForTextRange:(UITextRange *)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRangeForTextRange:(UITextRange *)arg1 clippedToDocument:(bool)arg2;
- (long long)comparePosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (UITextPosition *)cursorPositionAtPoint:(struct CGPoint { double x1; double x2; })arg1 inContainer:(NSTextContainer *)arg2;
- (UIView<_UITextCanvas> *)dequeueCanvasViewForTextContainer:(NSTextContainer *)arg1;
- (UITextRange *)documentRange;
- (bool)drawsDebugBaselines;
- (UITextRange *)emptyTextRangeAtPosition:(UITextPosition *)arg1;
- (UITextPosition *)endOfDocument;
- (void)ensureLayoutForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inTextContainer:(NSTextContainer *)arg2;
- (void)ensureLayoutForRange:(UITextRange *)arg1;
- (void)ensureLayoutForTextContainer:(NSTextContainer *)arg1;
- (void)enumerateTextLineFragmentsInRange:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 8: UITextRange *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UITextRange *, bool*, void*
- (void)enumerateTextSegmentsInRange:(void *)arg1 inTextContainer:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 9: UITextRange *, NSTextContainer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, bool*, void*
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extraLineFragmentRect;
- (NSTextContainer *)firstTextContainer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })insertionRectForPosition:(UITextPosition *)arg1 typingAttributes:(NSDictionary *)arg2 placeholderAttachment:(NSTextAttachment *)arg3 textContainer:(id*)arg4;
- (void)invalidateDisplayForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)invalidateLayoutForRange:(UITextRange *)arg1;
- (NSLayoutManager *)layoutManager;
- (<NSLayoutManagerDelegate> *)layoutManagerDelegate;
- (double)maxTileHeight;
- (UITextPosition *)nearestPositionAtPoint:(struct CGPoint { double x1; double x2; })arg1 inContainer:(NSTextContainer *)arg2;
- (long long)offsetFromPosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 offset:(long long)arg2 affinity:(long long)arg3;
- (UITextPosition *)positionWithOffset:(long long)arg1 affinity:(long long)arg2;
- (<_UITextPreviewRenderer> *)previewRendererForRange:(UITextRange *)arg1 unifyRects:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCharacterClusterAtIndex:(unsigned long long)arg1 type:(long long)arg2;
- (void)removeAllGhostedRanges;
- (void)removeAnnotationAttribute:(NSString *)arg1 forRange:(UITextRange *)arg2;
- (void)removeInvisibleRange:(UITextRange *)arg1;
- (void)removeRenderingAttributes:(NSArray *)arg1 forRange:(UITextRange *)arg2;
- (void)requestTextGeometryAtPosition:(void *)arg1 typingAttributes:(void *)arg2 resultBlock:(void *)arg3; // needs 3 arg types, found 11: UITextPosition *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSTextContainer *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, double, UITextPosition *, void*
- (void)resetFontForExtraBulletRendering;
- (void)resumeTiling;
- (NSArray *)selectionRectsForRange:(void *)arg1 fromView:(void *)arg2 forContainerPassingTest:(void *)arg3; // needs 3 arg types, found 8: UITextRange *, UIView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSTextContainer *, void*
- (void)setDrawsDebugBaselines:(bool)arg1;
- (void)setLayoutManagerDelegate:(id <NSLayoutManagerDelegate>)arg1;
- (void)setMaxTileHeight:(double)arg1;
- (void)setStyleEffectConfiguration:(CUIStyleEffectConfiguration *)arg1;
- (void)setUsesTiledViews:(bool)arg1;
- (CUIStyleEffectConfiguration *)styleEffectConfiguration;
- (void)suspendTiling;
- (NSTextContainer *)textContainerForPosition:(UITextPosition *)arg1;
- (NSArray *)textContainers;
- (UITextRange *)textRangeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inTextContainer:(NSTextContainer *)arg2 layoutIfNeeded:(bool)arg3;
- (UITextRange *)textRangeForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (UITextRange *)textRangeForLineEnclosingPosition:(UITextPosition *)arg1;
- (UITextRange *)textRangeForLineEnclosingPosition:(UITextPosition *)arg1 effectiveAffinity:(long long)arg2;
- (UITextRange *)textRangeForTextKit2Ranges:(NSArray *)arg1;
- (UITextRange *)textRangeFromPosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (NSTextStorage *)textStorage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unionRectForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 bottomInset:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })updateLayoutForSizeChangeOfTextContainer:(NSTextContainer *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })usedRectForTextContainer:(NSTextContainer *)arg1;
- (bool)usesTiledViews;

@optional

- (bool)isEditable;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 inDirection:(long long)arg2 offset:(long long)arg3 affinity:(long long)arg4 anchorPositionOffset:(double)arg5;
- (void)setEditable:(bool)arg1;

@end
