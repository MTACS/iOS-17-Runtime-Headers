
@interface STUIDataAccessStatusDomain : STStatusDomain {
    NSMutableDictionary * _activeAttributionMinimumDisplayTimers;
    NSSet * _activeAttributions;
    NSMutableArray * _attributionsWaitingForMinimumDisplayTime;
    NSObject<OS_dispatch_queue> * _clientQueue;
    STUIDataAccessStatusDomainData * _currentData;
    NSObject<OS_dispatch_queue> * _internalQueue;
    STLocationStatusDomain * _locationDomain;
    STMediaStatusDomain * _mediaDomain;
    NSMutableDictionary * _recentAttributionExpirationTimers;
    NSMutableArray * _recentAttributions;
    <BSInvalidatable> * _stateCaptureHandle;
}

+ (unsigned long long)statusDomainName;

- (void).cxx_destruct;
- (id)data;
- (void)dealloc;
- (id)initWithServerHandle:(id)arg1;
- (void)invalidate;

@end
