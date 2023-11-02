
@interface _UITextLayoutCanvasView : UIView <NSTextViewportLayoutControllerDelegate, _UITextKit2Canvas> {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    <_UITextCanvasContext> * _context;
    bool  _inLayout;
    NSMutableSet * _newTextAttachmentViews;
    NSMutableSet * _textAttachmentViews;
    NSTextContainer * _textContainer;
    unsigned long long  _textContainerIndex;
    NSTextLayoutManager * _textLayoutManager;
    NSMapTable * _viewportElementViews;
    NSMutableSet * _viewportElementsToRemove;
    NSTextViewportLayoutController * _viewportLayoutController;
}

@property (nonatomic) <_UITextCanvasContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTextContainer *textContainer;
@property (nonatomic, readonly) NSTextLayoutManager *textLayoutManager;

- (void).cxx_destruct;
- (void)_performViewportLayout;
- (void)_viewportDidLayout;
- (void)_viewportWillLayout;
- (id)context;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithTextLayoutManager:(id)arg1 textContainer:(id)arg2;
- (void)layoutSubviews;
- (void)setContext:(id)arg1;
- (void)setNeedsDisplay;
- (id)textContainer;
- (id)textLayoutManager;
- (id)textRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)textRangeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutIfNeeded:(bool)arg2;
- (void)textViewportLayoutController:(id)arg1 configureRenderingSurfaceForTextLayoutFragment:(id)arg2;
- (void)textViewportLayoutControllerDidLayout:(id)arg1;
- (void)textViewportLayoutControllerWillLayout:(id)arg1;
- (void)updateContentSizeIfNeeded;
- (void)viewportBoundsDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewportBoundsForTextViewportLayoutController:(id)arg1;

@end
