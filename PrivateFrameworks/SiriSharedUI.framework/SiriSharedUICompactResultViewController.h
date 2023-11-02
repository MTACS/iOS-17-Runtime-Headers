
@interface SiriSharedUICompactResultViewController : UIViewController {
    SiriSharedUIContentPlatterViewController * _contentPlatterViewController;
}

@property (nonatomic, readonly) SiriSharedUICompactResultView *compactResultView;
@property (nonatomic, copy) SiriSharedUIContentPlatterViewController *contentPlatterViewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)compactResultView;
- (id)contentPlatterViewController;
- (void)loadView;
- (void)setContentPlatterViewController:(id)arg1;

@end
