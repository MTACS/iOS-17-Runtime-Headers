
@interface PaperKit.TiledDocumentView : PKTiledView {
    void _paperAttachments;
    void canvasElementController;
    void currentPaperView;
    void selectionInteractionDelegate;
    void toolPicker;
}

- (void).cxx_destruct;
- (id)attachments;
- (void)didMoveToWindow;
- (id)initInScrollView:(id)arg1;
- (id)initInScrollView:(id)arg1 sixChannelBlending:(bool)arg2 defaultDrawingClass:(Class)arg3 readOnly:(bool)arg4;
- (id)initWithCoder:(id)arg1;

@end
