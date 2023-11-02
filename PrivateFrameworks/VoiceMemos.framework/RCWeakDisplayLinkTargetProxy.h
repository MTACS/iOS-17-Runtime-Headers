
@interface RCWeakDisplayLinkTargetProxy : RCDisplayLinkTargetProxy {
    RCWeakRef * _weakTarget;
    SEL  _weakTargetSelector;
}

- (void)dealloc;
- (void)displayLinkFired:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end
