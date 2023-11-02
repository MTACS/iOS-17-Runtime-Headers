
@interface CKTranscriptHeaderCell : CKTranscriptCell {
    UIActivityIndicatorView * _loadingIndicator;
}

@property (nonatomic, retain) UIActivityIndicatorView *loadingIndicator;

+ (double)defaultCellHeight;

- (void).cxx_destruct;
- (void)_stopLoadingIndicatorAnimatingIfNeeded;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (id)loadingIndicator;
- (void)prepareForReuse;
- (void)setLoadingIndicator:(id)arg1;
- (void)startAnimatingActivityIndicator;

@end
