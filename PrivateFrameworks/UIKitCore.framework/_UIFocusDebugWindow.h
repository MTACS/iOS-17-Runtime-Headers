
@interface _UIFocusDebugWindow : UIWindow {
    NSArray * _cacheModules;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastDragPoint;
    UIScrollView * _scrollView;
    NSTimer * _timer;
}

+ (bool)_isSystemWindow;
+ (bool)hasAnyModules;
+ (id)moduleClasses;

- (void).cxx_destruct;
- (bool)_isEligibleForFocusOcclusion;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (void)_update:(id)arg1;
- (void)_updateTimer;
- (bool)canBecomeKeyWindow;
- (void)drag:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithWindowScene:(id)arg1;
- (bool)isTransparentFocusItem;
- (void)setHidden:(bool)arg1;

@end
