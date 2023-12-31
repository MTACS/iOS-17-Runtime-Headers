
@interface UINavigationDeferredTransitionContext : NSObject {
    _UINavigationControllerPalette * _incomingTopPalette;
    _UINavigationControllerPalette * _outgoingTopPalette;
}

@property (nonatomic, retain) _UINavigationControllerPalette *incomingTopPalette;
@property (nonatomic, retain) _UINavigationControllerPalette *outgoingTopPalette;

- (void).cxx_destruct;
- (id)incomingTopPalette;
- (id)outgoingTopPalette;
- (void)setIncomingTopPalette:(id)arg1;
- (void)setOutgoingTopPalette:(id)arg1;

@end
