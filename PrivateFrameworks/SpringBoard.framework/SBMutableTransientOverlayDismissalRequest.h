
@interface SBMutableTransientOverlayDismissalRequest : SBTransientOverlayDismissalRequest

@property (getter=isAnimated, nonatomic) bool animated;
@property (nonatomic, copy) id /* block */ completionHandler;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAnimated:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
