
@interface SBHMultiplexingViewController : UIViewController {
    NSString * _identifier;
    double  _level;
    UIViewController * _multiplexedViewController;
    bool  _multiplexedViewControllerShowsContentWhileDeactivated;
    SBHMultiplexingManager * _multiplexingManager;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) double level;
@property (nonatomic, readonly) UIViewController *multiplexedViewController;
@property (nonatomic) bool multiplexedViewControllerShowsContentWhileDeactivated;
@property (nonatomic, retain) SBHMultiplexingManager *multiplexingManager;
@property (nonatomic, retain) NSHashTable *observers;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_setUpMultiplexedViewController;
- (void)activateWithViewController:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)deactivate;
- (void)dealloc;
- (id)identifier;
- (id)initWithLevel:(double)arg1 identifier:(id)arg2;
- (double)level;
- (void)loadView;
- (id)multiplexedViewController;
- (bool)multiplexedViewControllerShowsContentWhileDeactivated;
- (id)multiplexingManager;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (bool)sbh_isMultiplexingViewController;
- (id)sbh_underlyingAvocadoHostViewControllers;
- (void)setMultiplexedViewControllerShowsContentWhileDeactivated:(bool)arg1;
- (void)setMultiplexingManager:(id)arg1;
- (void)setObservers:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillAppear:(bool)arg1;

@end
