
@interface PaperKit.TiledTextView : PKTiledTextView {
    void canvasElementController;
    void currentPaperView;
    void paperLinedPaper;
    void selectionInteractionDelegate;
}

@property (nonatomic, retain) PKLinedPaper *linedPaper;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initInScrollView:(id)arg1 sixChannelBlending:(bool)arg2 defaultDrawingClass:(Class)arg3 readOnly:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (id)linedPaper;
- (void)setLinedPaper:(id)arg1;

@end
