
@interface SBInAppStatusBarHiddenAssertion : NSObject <BSInvalidatable> {
    NSString * _identifier;
    id /* block */  _invalidationBlock;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 invalidationBlock:(id /* block */)arg3;
- (void)invalidate;
- (void)invalidateWithAnimation:(bool)arg1;

@end
