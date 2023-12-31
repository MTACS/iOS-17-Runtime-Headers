
@protocol TSWPLayoutTarget <NSObject>

@required

- (void)addAttachmentLayout:(TSDLayout *)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (unsigned int)autosizeFlags;
- (NSObject<TSWPColumnMetrics> *)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (NSMutableArray *)columns;
- (NSArray *)currentAnchoredDrawableLayouts;
- (NSArray *)currentInlineDrawableLayouts;
- (struct CGSize { double x1; double x2; })currentSize;
- (<TSWPFootnoteHeightMeasurer> *)footnoteHeightMeasurer;
- (<TSWPFootnoteMarkProvider> *)footnoteMarkProvider;
- (bool)isLastTarget;
- (bool)isLayoutOffscreen;
- (unsigned long long)iterativeAttachmentPositioningMaxPassCount;
- (TSDLayout *)layoutForInlineDrawable:(id <TSDInfo>)arg1;
- (bool)layoutIsValid;
- (double)maxAnchorY;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })minSize;
- (unsigned int)naturalAlignment;
- (int)naturalDirection;
- (TSPObject<TSDHint> *)nextTargetFirstChildHint;
- (<TSWPOffscreenColumn> *)nextTargetFirstColumn;
- (const void*)nextTargetTopicNumbers;
- (unsigned long long)pageCount;
- (unsigned long long)pageNumber;
- (struct CGPoint { double x1; double x2; })position;
- (<TSWPOffscreenColumn> *)previousTargetLastColumn;
- (const void*)previousTargetTopicNumbers;
- (void)setNeedsDisplayInTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldPositionAttachmentsIteratively;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForCanvasRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)textIsVertical;
- (TSDLayout *)validatedLayoutForAnchoredDrawable:(id <TSDInfo>)arg1;
- (unsigned int)verticalAlignment;
- (bool)wantsLineFragments;

@optional

- (bool)adjustColumnOriginForAlignment;
- (bool)allowsDescendersToClip;
- (bool)allowsLastLineTruncation;
- (bool)alwaysAllowWordSplit;
- (struct CGPoint { double x1; double x2; })anchoredAttachmentPositionFromLayoutPosition:(struct CGPoint { double x1; double x2; })arg1;
- (NSMutableArray *)anchoredDrawablesForRelayout;
- (TSDCanvas *)canvas;
- (void)drawableAttachment:(TSWPDrawableAttachment *)arg1 didFinalizePosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)drawableAttachment:(TSWPDrawableAttachment *)arg1 willStartNewIterationWithIndex:(unsigned long long)arg2;
- (bool)drawableAttachment:(TSWPDrawableAttachment *)arg1 withLayout:(TSDLayout *)arg2 shouldPositionIterativelyInColumn:(TSWPColumn *)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })expandedRangeForLayoutRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 styleProvider:(id <TSWPStyleProvider>)arg2;
- (struct __CFLocale { }*)hyphenationLocale;
- (bool)ignoresEquationAlignment;
- (TSDBezierPath *)interiorClippingPath;
- (bool)invalidateForPageCountChange;
- (struct CGPoint { double x1; double x2; })layoutPositionFromAnchoredAttachmentPosition:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })layoutPositionFromInlineAttachmentPosition:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskRect;
- (unsigned int)maxLineCount;
- (unsigned int)pageIndex;
- (TSDLayout *)parentLayoutForInlineAttachments;
- (bool)pushAscendersIntoColumn;
- (double)reservedWidthWhenTruncating;
- (void)scaleTextPercentDidChange:(unsigned long long)arg1;
- (void)setAnchoredDrawablesForRelayout:(NSMutableArray *)arg1;
- (bool)shouldHyphenate;
- (bool)siblingTargetIsManipulatingDrawable:(TSDDrawableInfo *)arg1;
- (void)startedIterativePositioningProcessForDrawableAttachment:(TSWPDrawableAttachment *)arg1;

@end
