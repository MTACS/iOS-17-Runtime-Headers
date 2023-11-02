
@interface HMDModernTransportMessageContextOptionsBuilder : NSObject {
    bool  _expectsMultipleResponses;
    NSString * _requestStartTimeHeaderKey;
    double  _timeToLive;
    NSString * _timeToLiveHeaderKey;
    double  _timeoutOverride;
    bool  _trackingDeviceReachability;
    NSSet * _transports;
}

@property bool expectsMultipleResponses;
@property (copy) NSString *requestStartTimeHeaderKey;
@property double timeToLive;
@property (copy) NSString *timeToLiveHeaderKey;
@property double timeoutOverride;
@property bool trackingDeviceReachability;
@property (copy) NSSet *transports;

- (void).cxx_destruct;
- (bool)expectsMultipleResponses;
- (id)requestStartTimeHeaderKey;
- (void)setExpectsMultipleResponses:(bool)arg1;
- (void)setRequestStartTimeHeaderKey:(id)arg1;
- (void)setTimeToLive:(double)arg1;
- (void)setTimeToLiveHeaderKey:(id)arg1;
- (void)setTimeoutOverride:(double)arg1;
- (void)setTrackingDeviceReachability:(bool)arg1;
- (void)setTransports:(id)arg1;
- (double)timeToLive;
- (id)timeToLiveHeaderKey;
- (double)timeoutOverride;
- (bool)trackingDeviceReachability;
- (id)transports;

@end
