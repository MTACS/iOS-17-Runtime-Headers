
@interface SBPresentationObservationToken : NSObject <BSInvalidatable> {
    id /* block */  _didDismissHandler;
    id /* block */  _didPresentHandler;
    long long  _state;
    id /* block */  _willDismissHandler;
    id /* block */  _willPresentHandler;
    SBWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didDismissHandler;
@property (nonatomic, copy) id /* block */ didPresentHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ willDismissHandler;
@property (nonatomic, copy) id /* block */ willPresentHandler;
@property (nonatomic, readonly) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (void)didDismiss;
- (id /* block */)didDismissHandler;
- (void)didPresent;
- (id /* block */)didPresentHandler;
- (id)initWithScene:(id)arg1;
- (void)invalidate;
- (void)setDidDismissHandler:(id /* block */)arg1;
- (void)setDidPresentHandler:(id /* block */)arg1;
- (void)setWillDismissHandler:(id /* block */)arg1;
- (void)setWillPresentHandler:(id /* block */)arg1;
- (long long)state;
- (void)willDismiss;
- (id /* block */)willDismissHandler;
- (void)willPresent;
- (id /* block */)willPresentHandler;
- (id)windowScene;

@end
