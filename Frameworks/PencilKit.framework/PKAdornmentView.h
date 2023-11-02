
@interface PKAdornmentView : UIView {
    bool  _isInteracting;
    PKSelectionController * _selectionController;
    <PKSelectionRendering> * _selectionRenderer;
    PKStrokeSelection * _strokeSelection;
    PKStrokeSelectionImage * _strokeSelectionImage;
    PKImageView * _strokeSelectionImageView;
}

@property (nonatomic) PKSelectionController *selectionController;
@property (nonatomic, retain) <PKSelectionRendering> *selectionRenderer;
@property (nonatomic, retain) PKStrokeSelection *strokeSelection;
@property (nonatomic, retain) PKStrokeSelectionImage *strokeSelectionImage;

+ (Class)classForSelectionType:(long long)arg1;

- (void).cxx_destruct;
- (void)_hideStrokeSelectionImageView:(bool)arg1 animated:(bool)arg2;
- (void)_liftStrokesOutOfTiledView;
- (void)_putStrokesBackIntoTiledViewAnimated:(bool)arg1;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 forInputType:(long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 strokeSelection:(id)arg2 selectionController:(id)arg3 selectionType:(long long)arg4;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)selectionController;
- (id)selectionRenderer;
- (void)setSelectionController:(id)arg1;
- (void)setSelectionRenderer:(id)arg1;
- (void)setStrokeSelection:(id)arg1;
- (void)setStrokeSelectionImage:(id)arg1;
- (id)strokeSelection;
- (id)strokeSelectionImage;

@end
