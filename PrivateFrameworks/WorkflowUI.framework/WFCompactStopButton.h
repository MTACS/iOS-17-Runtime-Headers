
@interface WFCompactStopButton : UIButton {
    NSProgress * _progress;
    WFWorkflowProgressView * _progressView;
}

@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, readonly) WFWorkflowProgressView *progressView;

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleTouchUpInside;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)popCompletedCheckmark;
- (void)popCompletedCheckmarkWithHaptic:(bool)arg1;
- (id)progress;
- (id)progressView;
- (void)setHighlighted:(bool)arg1;
- (void)setProgress:(id)arg1;
- (void)transitionToCompleted:(bool)arg1 animated:(bool)arg2;

@end
