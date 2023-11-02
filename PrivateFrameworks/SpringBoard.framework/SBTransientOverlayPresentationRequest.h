
@interface SBTransientOverlayPresentationRequest : NSObject <NSCopying, NSMutableCopying> {
    bool  _animated;
    id /* block */  _completionHandler;
    BSProcessHandle * _originatingProcess;
    bool  _shouldDismissSiri;
    SBTransientOverlayViewController * _viewController;
    SBWindowScene * _windowScene;
}

@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) BSProcessHandle *originatingProcess;
@property (nonatomic, readonly) bool shouldDismissSiri;
@property (nonatomic, readonly) SBTransientOverlayViewController *viewController;
@property (nonatomic, readonly) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1;
- (id /* block */)completionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithViewController:(id)arg1;
- (bool)isAnimated;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)originatingProcess;
- (bool)shouldDismissSiri;
- (id)viewController;
- (id)windowScene;

@end
