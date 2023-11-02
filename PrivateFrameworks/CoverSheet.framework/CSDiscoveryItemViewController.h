
@interface CSDiscoveryItemViewController : UIViewController <CSListItemHosting> {
    id /* block */  _firstDidAppearCompletion;
    PLPlatterDiscoveryView * _platterDiscoveryView;
    bool  _screenOn;
    bool  _visible;
}

@property (nonatomic) double containerCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ firstDidAppearCompletion;
@property (readonly) unsigned long long hash;
@property (getter=isListAppeared, nonatomic) bool listAppeared;
@property (nonatomic, retain) PLPlatterDiscoveryView *platterDiscoveryView;
@property (getter=isScreenOn, nonatomic) bool screenOn;
@property (readonly) Class superclass;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_callFirstDidAppearCompletionIfNecessary;
- (bool)_canShowWhileLocked;
- (id /* block */)firstDidAppearCompletion;
- (id)initWithPlatterDiscoveryView:(id)arg1 firstDidAppearCompletion:(id /* block */)arg2;
- (bool)isScreenOn;
- (bool)isVisible;
- (void)loadView;
- (id)platterDiscoveryView;
- (void)setFirstDidAppearCompletion:(id /* block */)arg1;
- (void)setPlatterDiscoveryView:(id)arg1;
- (void)setScreenOn:(bool)arg1;
- (void)setVisible:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
