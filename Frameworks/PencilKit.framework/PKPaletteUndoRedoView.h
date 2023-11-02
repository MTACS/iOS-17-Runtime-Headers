
@interface PKPaletteUndoRedoView : UIView <PKPaletteEdgeLocating, PKPaletteViewSizeScaling> {
    <PKPaletteUndoRedoViewDelegate> * _delegate;
    unsigned long long  _edgeLocation;
    double  _interItemSpacing;
    PKPaletteButton * _redoButton;
    NSLayoutConstraint * _redoButtonHeightConstraint;
    NSLayoutConstraint * _redoButtonWidthConstraint;
    bool  _redoEnabled;
    double  _scalingFactor;
    UIStackView * _stackView;
    PKPaletteButton * _undoButton;
    NSLayoutConstraint * _undoButtonHeightConstraint;
    NSLayoutConstraint * _undoButtonWidthConstraint;
    bool  _undoEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaletteUndoRedoViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edgeLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interItemSpacing;
@property (nonatomic, retain) PKPaletteButton *redoButton;
@property (nonatomic, retain) NSLayoutConstraint *redoButtonHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *redoButtonWidthConstraint;
@property (getter=isRedoEnabled, nonatomic) bool redoEnabled;
@property (nonatomic) double scalingFactor;
@property (nonatomic, retain) UIStackView *stackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKPaletteButton *undoButton;
@property (nonatomic, retain) NSLayoutConstraint *undoButtonHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *undoButtonWidthConstraint;
@property (getter=isUndoEnabled, nonatomic) bool undoEnabled;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_buttonSize;
- (void)_installRedoButton;
- (void)_installStackView;
- (void)_installUndoButton;
- (void)_updateUI;
- (id)delegate;
- (unsigned long long)edgeLocation;
- (void)handleRedo:(id)arg1;
- (void)handleUndo:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)interItemSpacing;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isRedoEnabled;
- (bool)isUndoEnabled;
- (id)redoButton;
- (id)redoButtonHeightConstraint;
- (id)redoButtonWidthConstraint;
- (double)scalingFactor;
- (void)setDelegate:(id)arg1;
- (void)setEdgeLocation:(unsigned long long)arg1;
- (void)setInterItemSpacing:(double)arg1;
- (void)setRedoButton:(id)arg1;
- (void)setRedoButtonHeightConstraint:(id)arg1;
- (void)setRedoButtonWidthConstraint:(id)arg1;
- (void)setRedoEnabled:(bool)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)setStackView:(id)arg1;
- (void)setUndoButton:(id)arg1;
- (void)setUndoButtonHeightConstraint:(id)arg1;
- (void)setUndoButtonWidthConstraint:(id)arg1;
- (void)setUndoEnabled:(bool)arg1;
- (id)stackView;
- (id)undoButton;
- (id)undoButtonHeightConstraint;
- (id)undoButtonWidthConstraint;
- (void)updateUI;

@end
