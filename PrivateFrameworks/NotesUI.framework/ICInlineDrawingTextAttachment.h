
@interface ICInlineDrawingTextAttachment : ICInlineCanvasTextAttachment <PKTextAttachment> {
    UIView * _cachedControlViewForPlaceView;
    UIView * _cachedDrawingViewForPlaceView;
    ICInlineDrawingChangeCoalescer * _changeCoalescer;
    ICDrawingHashtagsAndMentionsController * _hashtagsAndMentionsController;
    NSHashTable * _inlineDrawingViews;
    bool  _isHandlingDrawingDidChange;
}

@property (nonatomic) UIView *cachedControlViewForPlaceView;
@property (nonatomic) UIView *cachedDrawingViewForPlaceView;
@property (nonatomic, retain) ICInlineDrawingChangeCoalescer *changeCoalescer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICDrawingHashtagsAndMentionsController *hashtagsAndMentionsController;
@property (nonatomic, retain) NSHashTable *inlineDrawingViews;
@property (nonatomic) bool isHandlingDrawingDidChange;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_image;
- (id)attachmentAsNSTextAttachment;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 position:(struct CGPoint { double x1; double x2; })arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (id)attachmentViews;
- (id)cachedControlViewForPlaceView;
- (id)cachedDrawingViewForPlaceView;
- (bool)canDragWithoutSelecting;
- (id)changeCoalescer;
- (void)configureHashtagAndMentionsForView:(id)arg1;
- (id)contents;
- (void)detachView;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;
- (void)drawingDataDidChange:(id)arg1 view:(id)arg2;
- (id)hashtagsAndMentionsController;
- (id)inlineDrawingViews;
- (id)inlineViews;
- (bool)isHandlingDrawingDidChange;
- (void)placeView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (id)printableTextContentForAppearanceType:(unsigned long long)arg1 textContainer:(id)arg2;
- (void)resetZoom;
- (void)saveIfNeeded;
- (void)setCachedControlViewForPlaceView:(id)arg1;
- (void)setCachedDrawingViewForPlaceView:(id)arg1;
- (void)setChangeCoalescer:(id)arg1;
- (void)setHashtagsAndMentionsController:(id)arg1;
- (void)setInlineDrawingViews:(id)arg1;
- (void)setIsHandlingDrawingDidChange:(bool)arg1;
- (id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3;
- (id)viewProviderForParentView:(id)arg1 location:(id)arg2 textContainer:(id)arg3;

@end
