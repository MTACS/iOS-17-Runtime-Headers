
@interface DBWidgetViewController : UIViewController <DBWidgetViewFocusEnabledProviding> {
    UIView * _contentView;
    UIView * _dimmingView;
    <DBEnvironment> * _environment;
    bool  _hidden;
    bool  _wantsLargeSize;
}

@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *dimmingView;
@property (nonatomic, readonly) <DBEnvironment> *environment;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, readonly) NSArray *linearFocusItems;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsLargeSize;

- (void).cxx_destruct;
- (void)_wallpaperChanged:(id)arg1;
- (id)contentView;
- (id)dimmingView;
- (bool)entireWidgetFocusable;
- (id)environment;
- (id)initWithEnvironment:(id)arg1;
- (void)invalidateConstraints;
- (bool)isHidden;
- (id)linearFocusItems;
- (void)loadView;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setContentView:(id)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setWantsLargeSize:(bool)arg1;
- (id)snapshotViewAfterScreenUpdates:(bool)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateAppearanceForWallpaper;
- (bool)wantsLargeSize;
- (void)widgetViewTapped;

@end
