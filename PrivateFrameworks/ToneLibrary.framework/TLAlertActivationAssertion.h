
@interface TLAlertActivationAssertion : NSObject {
    _Atomic long long  _activeAcquisitionCount;
    TLAlert * _alert;
}

- (void).cxx_destruct;
- (void)_acquire;
- (void)_relinquish;
- (void)acquire;
- (void)dealloc;
- (id)description;
- (id)initWithAlert:(id)arg1;
- (void)relinquish;

@end
