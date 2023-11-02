
@interface AVContentKeyPSSHRequestTracker : NSObject {
    NSMutableArray * _requests;
    long long  _totalExpectedRequestCount;
}

- (void)addRequest:(id)arg1;
- (void)dealloc;
- (bool)haveAllRequestsBeenReceived;
- (id)initWithRequestCount:(long long)arg1;
- (id)requests;

@end
