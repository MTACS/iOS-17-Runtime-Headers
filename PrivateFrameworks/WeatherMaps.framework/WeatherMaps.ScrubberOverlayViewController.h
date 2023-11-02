
@interface WeatherMaps.ScrubberOverlayViewController : UIViewController {
    void delegate;
    void hideDelay;
    void hideTimer;
    void horizontalPadding;
    void scrubberForecastHintView;
    void scrubberView;
    void store;
    void storeObserver;
    void verticalSpacingBeneathForecastHint;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
