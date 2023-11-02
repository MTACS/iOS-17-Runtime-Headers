
@interface ChronoKit.LiveWidgetContentViewController : ChronoKit.BaseWidgetContentViewController {
    void _animationsDisabledPreferenceObserver;
    void _areAnimationsPaused;
    void _cachedAnimationsDisabledPreference;
    void _isSnapshotting;
    void _rootViewModel;
    void hasAnimatableContent;
    void metrics;
    void viewModel;
    void widget;
}

@property (nonatomic, readonly) bool shouldAutomaticallyForwardAppearanceMethods;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
