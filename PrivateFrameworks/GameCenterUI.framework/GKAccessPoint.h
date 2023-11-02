
@interface GKAccessPoint : NSObject <GKGameCenterControllerDelegate> {
    bool  _active;
    double  _delay;
    bool  _focused;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameInScreenCoordinates;
    GKGameCenterViewController * _gameCenterViewController;
    long long  _hideCount;
    bool  _isPresentingGameCenter;
    long long  _location;
    UIWindow * _parentWindow;
    NSObject * _privateImplementation;
    bool  _showHighlights;
    UIGestureRecognizer * _tapGestureRecognizer;
    double  _timeLastShown;
    id  _viewController;
    bool  _visible;
    bool  _willBecomeActive;
    UIWindow * _window;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) double delay;
@property (getter=isFocused, nonatomic) bool focused;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameInScreenCoordinates;
@property (nonatomic, retain) GKGameCenterViewController *gameCenterViewController;
@property (nonatomic) long long hideCount;
@property (nonatomic) bool isPresentingGameCenter;
@property (nonatomic) long long location;
@property (nonatomic) UIWindow *parentWindow;
@property (nonatomic, retain) NSObject *privateImplementation;
@property (nonatomic) bool showHighlights;
@property (nonatomic, retain) UIGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) double timeLastShown;
@property (nonatomic, retain) id viewController;
@property (getter=isVisible, nonatomic) bool visible;
@property (nonatomic) bool willBecomeActive;
@property (nonatomic, retain) UIWindow *window;

+ (id)shared;

- (void).cxx_destruct;
- (void)configureIfNeeded;
- (double)delay;
- (void)dismissGameCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInScreenCoordinates;
- (id)gameCenterViewController;
- (void)gameCenterViewControllerDidFinish:(id)arg1;
- (void)hideAccessPoint;
- (long long)hideCount;
- (bool)isActive;
- (bool)isFocused;
- (bool)isPresentingGameCenter;
- (bool)isVisible;
- (void)loadModels;
- (long long)location;
- (id)parentWindow;
- (id)privateImplementation;
- (void)recordAccessPointClick;
- (void)removeWindow;
- (void)resetUI;
- (void)setActive:(bool)arg1;
- (void)setDelay:(double)arg1;
- (void)setFocused:(bool)arg1;
- (void)setFrameInScreenCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGameCenterViewController:(id)arg1;
- (void)setHideCount:(long long)arg1;
- (void)setIsPresentingGameCenter:(bool)arg1;
- (void)setLocation:(long long)arg1;
- (void)setParentWindow:(id)arg1;
- (void)setPrivateImplementation:(id)arg1;
- (void)setShowHighlights:(bool)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTimeLastShown:(double)arg1;
- (void)setViewController:(id)arg1;
- (void)setVisible:(bool)arg1;
- (void)setWillBecomeActive:(bool)arg1;
- (void)setWindow:(id)arg1;
- (void)showAccessPoint;
- (void)showDashboardWithAchievementID:(id)arg1;
- (void)showDashboardWithState:(long long)arg1 dismiss:(id /* block */)arg2;
- (bool)showHighlights;
- (void)showWindow;
- (id)tapGestureRecognizer;
- (double)timeLastShown;
- (void)triggerAccessPointWithAchievementID:(id)arg1;
- (void)triggerAccessPointWithHandler:(id /* block */)arg1;
- (void)triggerAccessPointWithState:(long long)arg1 handler:(id /* block */)arg2;
- (void)updateUI;
- (id)viewController;
- (bool)willBecomeActive;
- (id)window;

@end
