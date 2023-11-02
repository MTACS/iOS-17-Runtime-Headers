
@interface CPSNavigationAlertFocusButton : CPSButton {
    CPAlertAction * _alertAction;
    bool  _isPrimary;
    CPSNavigationAlertProgressView * _progressView;
}

@property (nonatomic) CPAlertAction *alertAction;
@property (nonatomic) bool isPrimary;
@property (nonatomic) CPSNavigationAlertProgressView *progressView;

+ (id)buttonWithAction:(id)arg1 progressView:(id)arg2 isPrimary:(bool)arg3;

- (void).cxx_destruct;
- (id)alertAction;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isPrimary;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)progressView;
- (void)setAlertAction:(id)arg1;
- (void)setIsPrimary:(bool)arg1;
- (void)setProgressView:(id)arg1;

@end
