
@interface SBDeviceOrientationUpdateDeferralAssertion : NSObject <BSInvalidatable> {
    SBDeviceOrientationUpdateManager * _hackyBackReference;
    bool  _invalidated;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=_setHackyBackReference:, nonatomic) SBDeviceOrientationUpdateManager *hackyBackReference;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setHackyBackReference:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)hackyBackReference;
- (id)init;
- (id)initWithReason:(id)arg1;
- (void)invalidate;
- (bool)isInvalidated;
- (id)reason;

@end
