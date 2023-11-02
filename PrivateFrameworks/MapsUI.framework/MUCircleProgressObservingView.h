
@interface MUCircleProgressObservingView : UIView {
    NSProgress * _progress;
    MUCircleProgressView * _progressView;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) id /* block */ primaryAction;
@property (nonatomic, retain) NSProgress *progress;

- (void).cxx_destruct;
- (void)_updateProgressView;
- (void)dealloc;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id /* block */)primaryAction;
- (id)progress;
- (void)setImage:(id)arg1;
- (void)setPrimaryAction:(id /* block */)arg1;
- (void)setProgress:(id)arg1;

@end
