
@interface SBMutableTransientOverlayPresentationRequest : SBTransientOverlayPresentationRequest

@property (getter=isAnimated, nonatomic) bool animated;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) BSProcessHandle *originatingProcess;
@property (nonatomic) bool shouldDismissSiri;
@property (nonatomic, retain) SBTransientOverlayViewController *viewController;
@property (nonatomic) SBWindowScene *windowScene;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAnimated:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setOriginatingProcess:(id)arg1;
- (void)setShouldDismissSiri:(bool)arg1;
- (void)setViewController:(id)arg1;
- (void)setWindowScene:(id)arg1;

@end
