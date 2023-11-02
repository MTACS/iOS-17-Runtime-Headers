
@interface SBRemoteTransientOverlayDismissalRequest : NSObject {
    bool  _animated;
    id /* block */  _completionHandler;
    bool  _shouldInvalidatePresentation;
    SBTransientOverlayViewController * _viewController;
}

@property (getter=isAnimated, nonatomic) bool animated;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) bool shouldInvalidatePresentation;
@property (nonatomic, readonly) SBTransientOverlayViewController *viewController;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithViewController:(id)arg1;
- (bool)isAnimated;
- (void)setAnimated:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setShouldInvalidatePresentation:(bool)arg1;
- (bool)shouldInvalidatePresentation;
- (id)viewController;

@end
