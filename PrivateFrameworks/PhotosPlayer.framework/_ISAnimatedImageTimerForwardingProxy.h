
@interface _ISAnimatedImageTimerForwardingProxy : NSObject {
    ISAnimatedImageTimer * __forwardingTarget;
}

@property (setter=_setForwardingTarget:, nonatomic) ISAnimatedImageTimer *_forwardingTarget;

- (void).cxx_destruct;
- (void)_displayLinkFire:(id)arg1;
- (id)_forwardingTarget;
- (void)_setForwardingTarget:(id)arg1;

@end
