
@interface SXTextTangierTextLayout : TSWPLayout {
    NSMutableSet * _addedChildren;
}

@property (nonatomic, retain) NSMutableSet *addedChildren;

- (void).cxx_destruct;
- (void)addAttachmentLayout:(id)arg1;
- (id)addedChildren;
- (bool)alwaysAllowWordSplit;
- (id)attachedLayoutsInLayout:(id)arg1 anchored:(bool)arg2;
- (double)baselineForLastLine;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (void)drawableAttachment:(id)arg1 didFinalizePosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)drawableAttachment:(id)arg1 willStartNewIterationWithIndex:(unsigned long long)arg2;
- (bool)drawableAttachment:(id)arg1 withLayout:(id)arg2 shouldPositionIterativelyInColumn:(id)arg3;
- (struct __CFLocale { }*)hyphenationLocale;
- (void)invalidate;
- (void)invalidateTextLayout;
- (unsigned long long)iterativeAttachmentPositioningMaxPassCount;
- (id)layoutForInlineDrawable:(id)arg1;
- (double)lineHeightGuessForFirstLine;
- (struct CGSize { double x1; double x2; })maxSize;
- (bool)pushAscendersIntoColumn;
- (void)setAddedChildren:(id)arg1;
- (bool)shouldPositionAttachmentsIteratively;
- (void)startedIterativePositioningProcessForDrawableAttachment:(id)arg1;
- (void)validate;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)validatedLayoutForAttachedDrawable:(id)arg1;

@end
