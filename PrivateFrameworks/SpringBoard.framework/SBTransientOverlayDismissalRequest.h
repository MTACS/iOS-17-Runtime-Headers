
@interface SBTransientOverlayDismissalRequest : NSObject <NSCopying, NSMutableCopying> {
    bool  _animated;
    id /* block */  _completionHandler;
    long long  _requestType;
    SBTransientOverlayViewController * _viewController;
    SBWindowScene * _windowScene;
}

@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) long long requestType;
@property (nonatomic, readonly) SBTransientOverlayViewController *viewController;
@property (nonatomic, readonly) SBWindowScene *windowScene;

+ (id)dismissalRequestForAllViewControllers;
+ (id)dismissalRequestForAllViewControllersInWindowScene:(id)arg1;
+ (id)dismissalRequestForViewController:(id)arg1;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1;
- (id)_init;
- (id /* block */)completionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isAnimated;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)requestType;
- (id)viewController;
- (id)windowScene;

@end
