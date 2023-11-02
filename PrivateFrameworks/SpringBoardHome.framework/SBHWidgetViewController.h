
@interface SBHWidgetViewController : CHUISWidgetHostViewController {
    bool  _isInvalidated;
    bool  _isInvalidatingBackgroundAssertion;
    bool  _pendingStaticMode;
    NSMutableArray * _preventBackgroundingAssertions;
}

@property (nonatomic) <SBHWidgetViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_invalidateBackgroundingAssertion:(id)arg1;
- (id)acquirePreventSceneBackgroundingAssertionForReason:(id)arg1;
- (void)invalidate;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
