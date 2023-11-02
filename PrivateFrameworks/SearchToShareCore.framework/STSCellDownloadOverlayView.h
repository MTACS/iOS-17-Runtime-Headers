
@interface STSCellDownloadOverlayView : UIView {
    STSRoundProgressView * _progressView;
}

@property (nonatomic, readonly) STSRoundProgressView *progressView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)progressView;

@end
