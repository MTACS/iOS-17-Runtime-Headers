
@interface TLKKeyValueView : TLKView <NUIContainerViewDelegate> {
    TLKImage * _image;
    TLKImageView * _imageView;
    double  _lastMeasuredWidth;
    TLKKeyValueGridView * _leadingGrid;
    NSArray * _leadingTuples;
    TLKKeyValueGridView * _trailingGrid;
    NSArray * _trailingTuples;
}

@property (nonatomic, retain) TLKStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TLKImage *image;
@property (nonatomic, retain) TLKImageView *imageView;
@property (nonatomic) double lastMeasuredWidth;
@property (nonatomic, retain) TLKKeyValueGridView *leadingGrid;
@property (nonatomic, retain) NSArray *leadingTuples;
@property (readonly) Class superclass;
@property (nonatomic, retain) TLKKeyValueGridView *trailingGrid;
@property (nonatomic, retain) NSArray *trailingTuples;

+ (unsigned long long)visibleRowsInGrid:(id)arg1;

- (void).cxx_destruct;
- (void)_reconfigureForCompressedState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)containerView:(id)arg1 shouldRestartMeasurementDueToCompressionInAxis:(long long)arg2 forReason:(long long)arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (long long)currentStackViewDistribution;
- (id)image;
- (id)imageView;
- (double)lastMeasuredWidth;
- (id)leadingGrid;
- (bool)leadingGridIsHidden;
- (id)leadingTextKeyLabels;
- (id)leadingTuples;
- (unsigned long long)numberOfVisibleRowsForLeadingGrid;
- (unsigned long long)numberOfVisibleRowsForTrailingGrid;
- (void)observedPropertiesChanged;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLastMeasuredWidth:(double)arg1;
- (void)setLeadingGrid:(id)arg1;
- (void)setLeadingTuples:(id)arg1;
- (void)setTrailingGrid:(id)arg1;
- (void)setTrailingTuples:(id)arg1;
- (id)setupContentView;
- (id)trailingGrid;
- (bool)trailingGridIsHidden;
- (id)trailingTuples;

@end
