
@interface SBDisableActiveInterfaceOrientationChangeAssertion : NSObject <BSInvalidatable> {
    bool  _invalidated;
    bool  _nudge;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithReason:(id)arg1 nudgeOrientationOnInvalidate:(bool)arg2;
- (void)invalidate;

@end
