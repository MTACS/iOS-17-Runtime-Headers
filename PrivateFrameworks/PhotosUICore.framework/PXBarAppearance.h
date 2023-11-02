
@interface PXBarAppearance : PXObservable <PXChangeObserver, PXMutableBarAppearance> {
    PXBarAnimationOptions * __animationOptions;
    <PXBarAppearanceImplementationDelegate> * __implementationDelegate;
    long long  __preferredStatusBarUpdateAnimation;
    long long  _barAppearancePreferredStatusBarStyle;
    bool  _enabled;
    <PXBarAppearanceImplementationDelegate> * _implementationDelegate;
    struct { 
        bool respondsToWillUpdateBarAppearanceOnViewWillAppear; 
        bool respondsToIsStatusBarVisible; 
    }  _implementationDelegateFlags;
    UIColor * _navigationBarTintColor;
    bool  _prefersNavigationBarVisible;
    bool  _prefersStatusBarVisible;
    bool  _prefersTabBarVisible;
    bool  _prefersToolbarVisible;
    bool  _prefersViewIsAppearingForAppearanceUpdates;
    long long  _transitionsCounter;
    UIViewController * _viewController;
}

@property (setter=_setAnimationOptions:, nonatomic, copy) PXBarAnimationOptions *_animationOptions;
@property (setter=_setImplementationDelegate:, nonatomic) <PXBarAppearanceImplementationDelegate> *_implementationDelegate;
@property (setter=_setPreferredStatusBarUpdateAnimation:, nonatomic) long long _preferredStatusBarUpdateAnimation;
@property (nonatomic, readonly) long long barAppearancePreferredStatusBarStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXBarAppearanceImplementationDelegate> *implementationDelegate;
@property (nonatomic, readonly, copy) UIColor *navigationBarTintColor;
@property (nonatomic, readonly) bool prefersNavigationBarVisible;
@property (nonatomic, readonly) bool prefersStatusBarVisible;
@property (nonatomic, readonly) bool prefersTabBarVisible;
@property (nonatomic, readonly) bool prefersToolbarVisible;
@property (nonatomic) bool prefersViewIsAppearingForAppearanceUpdates;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewController;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)_sharedDefaultImplementationDelegate;

- (void).cxx_destruct;
- (id)_animationOptions;
- (id)_implementationDelegate;
- (void)_performBarsTransition:(id /* block */)arg1;
- (long long)_preferredStatusBarUpdateAnimation;
- (void)_setAnimationOptions:(id)arg1;
- (void)_setImplementationDelegate:(id)arg1;
- (void)_setNavigationBarTintColor:(id)arg1 withAnimationOptions:(id)arg2;
- (void)_setNavigationBarVisible:(bool)arg1 withAnimationOptions:(id)arg2;
- (void)_setPreferredStatusBarUpdateAnimation:(long long)arg1;
- (void)_setTabBarVisible:(bool)arg1 withAnimationOptions:(id)arg2;
- (void)_setToolbarVisible:(bool)arg1 withAnimationOptions:(id)arg2;
- (void)_update;
- (void)_updateImplementationDelegate;
- (void)_updateOnViewAppearance:(bool)arg1;
- (void)_updateOnViewWillAppear:(bool)arg1;
- (void)_updateStatusBarStyleAndVisibilityWithAnimationOptions:(id)arg1;
- (void)_updateWithAnimationOptions:(id)arg1 isStatusBarHidden:(bool)arg2;
- (long long)adjustedPreferredStatusBarStyle:(long long)arg1;
- (long long)adjustedPreferredStatusBarUpdateAnimation:(long long)arg1;
- (bool)adjustedPrefersStatusBarHidden:(bool)arg1;
- (long long)barAppearancePreferredStatusBarStyle;
- (id)implementationDelegate;
- (id)init;
- (id)initWithViewController:(id)arg1;
- (bool)isEnabled;
- (id)mutableChangeObject;
- (id)navigationBarTintColor;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (void)performChangesWithAnimationOptions:(id)arg1 changes:(id /* block */)arg2;
- (bool)prefersNavigationBarVisible;
- (bool)prefersStatusBarVisible;
- (bool)prefersTabBarVisible;
- (bool)prefersToolbarVisible;
- (bool)prefersViewIsAppearingForAppearanceUpdates;
- (void)setBarAppearancePreferredStatusBarStyle:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImplementationDelegate:(id)arg1;
- (void)setNavigationBarTintColor:(id)arg1;
- (void)setPrefersNavigationBarVisible:(bool)arg1;
- (void)setPrefersStatusBarVisible:(bool)arg1;
- (void)setPrefersTabBarVisible:(bool)arg1;
- (void)setPrefersToolbarVisible:(bool)arg1;
- (void)setPrefersViewIsAppearingForAppearanceUpdates:(bool)arg1;
- (id)viewController;
- (void)viewControllerViewDidDisappear:(bool)arg1;
- (void)viewControllerViewIsAppearing:(bool)arg1;
- (void)viewControllerViewWillAppear:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (id)defaultImplementationDelegate;

@end
