
@interface WFInteractionCardProgressViewController : UIViewController {
    SUICProgressEventViewController * _progressEventViewController;
}

@property (nonatomic, retain) SUICProgressEventViewController *progressEventViewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)handleEvent:(unsigned long long)arg1;
- (void)loadView;
- (id)progressEventViewController;
- (void)setProgressEventViewController:(id)arg1;

@end
