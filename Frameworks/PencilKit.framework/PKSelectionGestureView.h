
@interface PKSelectionGestureView : UIView {
    PKSelectionController * _selectionController;
    PKSelectionInteraction * _selectionInteraction;
}

@property (nonatomic) PKSelectionController *selectionController;
@property (nonatomic, retain) PKSelectionInteraction *selectionInteraction;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selectionController:(id)arg2;
- (id)selectionController;
- (id)selectionInteraction;
- (void)setSelectionController:(id)arg1;
- (void)setSelectionInteraction:(id)arg1;

@end
