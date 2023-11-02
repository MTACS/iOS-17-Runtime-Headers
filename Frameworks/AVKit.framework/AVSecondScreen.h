
@interface AVSecondScreen : NSObject {
    bool  _TVOutScreen;
    CADisplay * _debugInfoDisplay;
    AVObservationController * _observationController;
    UIScreen * _screen;
    AVSecondScreenConnection * _secondScreenConnection;
    long long  _state;
    UIWindow * _window;
    UIWindowScene * _windowScene;
}

@property (getter=isTVOutScreen, nonatomic, readonly) bool TVOutScreen;
@property (nonatomic, retain) CADisplay *debugInfoDisplay;
@property (nonatomic, readonly) AVObservationController *observationController;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sceneBounds;
@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, retain) AVSecondScreenConnection *secondScreenConnection;
@property (nonatomic, readonly) long long state;
@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, readonly) UIWindowScene *windowScene;

- (void).cxx_destruct;
- (bool)_isWindowSceneAvailable;
- (void)_updatePreferredDisplayCriteria;
- (void)connectWithSecondScreenConnection:(id)arg1;
- (void)dealloc;
- (id)debugInfoDisplay;
- (id)initWithScene:(id)arg1;
- (bool)isAvailable;
- (bool)isTVOutScreen;
- (id)observationController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sceneBounds;
- (id)screen;
- (id)secondScreenConnection;
- (void)setDebugInfoDisplay:(id)arg1;
- (void)setSecondScreenConnection:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setWindow:(id)arg1;
- (long long)state;
- (id)window;
- (id)windowScene;

@end
