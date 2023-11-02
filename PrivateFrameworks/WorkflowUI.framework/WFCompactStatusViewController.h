
@interface WFCompactStatusViewController : WFCompactPlatterViewController {
    WFDialogAttribution * _attribution;
    NSProgress * _progress;
    WFCompactStopButton * _stopButton;
}

@property (nonatomic, retain) WFDialogAttribution *attribution;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, readonly) WFCompactStopButton *stopButton;

- (void).cxx_destruct;
- (id)attribution;
- (void)loadView;
- (void)popCompletedCheckmark;
- (id)progress;
- (void)setAttribution:(id)arg1;
- (void)setProgress:(id)arg1;
- (id)stopButton;
- (void)transitionToCompleted:(bool)arg1 animated:(bool)arg2;

@end
