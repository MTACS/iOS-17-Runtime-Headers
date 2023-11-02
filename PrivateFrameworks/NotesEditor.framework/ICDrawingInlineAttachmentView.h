
@interface ICDrawingInlineAttachmentView : ICAttachmentView <ICAttachmentPresenterDelegate> {
    ICDrawingInlineView * _drawingInlineView;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundsForDisplay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ICDrawingInlineView *drawingInlineView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)accessibilityIgnoresInvertColors;
- (id)accessibilityLabel;
- (id)attachmentPresenter:(id)arg1 transitionViewForAttachment:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForDisplay;
- (bool)cancelDidScrollIntoVisibleRange;
- (void)dealloc;
- (void)didChangeSize;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (void)didTapAttachment:(id)arg1;
- (id)drawingInlineView;
- (id)icaxHintString;
- (id)initWithTextAttachment:(id)arg1 textContainer:(id)arg2 forManualRendering:(bool)arg3;
- (void)setAttachment:(id)arg1;
- (void)setAttachmentContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDrawingInlineView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)sharedInit:(bool)arg1;
- (bool)shouldAddPanGesture;

@end
