
@interface WDAuthorizationRecord : NSObject {
    _HKAuthorizationRecord * _internalAuthorizationRecord;
    long long  _status;
}

@property long long status;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInternalAuthorizationRecord:(id)arg1;
- (bool)requestedReading;
- (bool)requestedSharing;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
