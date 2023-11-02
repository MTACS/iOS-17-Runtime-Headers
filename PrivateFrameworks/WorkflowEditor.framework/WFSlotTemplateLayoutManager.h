
@interface WFSlotTemplateLayoutManager : NSLayoutManager <NSLayoutManagerDelegate, WFTextAttachmentSizeProvider> {
    bool  _extendSlotBackgroundOffEdges;
    bool  _isLayoutManagerForTextView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool extendSlotBackgroundOffEdges;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLayoutManagerForTextView;
@property (nonatomic, readonly) unsigned long long numberOfLaidLines;
@property (readonly) Class superclass;
@property (nonatomic) WFSlotTemplateTextStorage *textStorage;

- (void)drawBackgroundForGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)drawGradientInEnclosingRect:(id)arg1 enclosingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 lineFragmentPadding:(double)arg3 runsOffLeft:(bool)arg4 runsOffRight:(bool)arg5;
- (void)enumerateEnclosingRectsForGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 insetForBackground:(bool)arg2 standaloneTextAttachment:(bool)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateEnclosingRectsForSlot:(id)arg1 includeInsideSpacing:(bool)arg2 insetForBackground:(bool)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateInsetEnclosingRectsForGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (bool)extendSlotBackgroundOffEdges;
- (void)getCalculatedLineHeight:(double*)arg1 originalFontLineHeight:(double*)arg2;
- (void)getPreferredLeadingSpacing:(double*)arg1 trailingSpacing:(double*)arg2 forDrawingTextAttachment:(id)arg3 atCharacterIndex:(unsigned long long)arg4;
- (id)init;
- (bool)isLayoutManagerForTextView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 glyphPosition:(struct CGPoint { double x1; double x2; })arg5 characterIndex:(unsigned long long)arg6;
- (bool)layoutManager:(id)arg1 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg2;
- (bool)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 lineFragmentUsedRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 baselineOffset:(inout double*)arg4 inTextContainer:(id)arg5 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3;
- (unsigned long long)numberOfLaidLines;
- (double)preferredHeightForDrawingTextAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2 withProposedHeight:(double)arg3;
- (void)setExtendSlotBackgroundOffEdges:(bool)arg1;
- (void)setIsLayoutManagerForTextView:(bool)arg1;
- (bool)shouldDrawTextAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2;

@end
