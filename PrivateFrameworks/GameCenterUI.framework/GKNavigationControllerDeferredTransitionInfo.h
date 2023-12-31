
@interface GKNavigationControllerDeferredTransitionInfo : NSObject {
    bool  _animated;
    int  _type;
    UIViewController * _viewController;
}

@property (nonatomic) bool animated;
@property (nonatomic) int type;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (bool)animated;
- (void)setAnimated:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setViewController:(id)arg1;
- (int)type;
- (id)viewController;

@end
