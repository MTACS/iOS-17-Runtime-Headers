
@interface HMDModernTransportMessageContextOptions : NSObject {
    bool  _expectsMultipleResponses;
    NSString * _requestStartTimeHeaderKey;
    double  _timeToLive;
    NSString * _timeToLiveHeaderKey;
    double  _timeoutOverride;
    bool  _trackingDeviceReachability;
    NSSet * _transports;
}

@property (readonly) bool expectsMultipleResponses;
@property (readonly) NSString *requestStartTimeHeaderKey;
@property (readonly) double timeToLive;
@property (readonly) NSString *timeToLiveHeaderKey;
@property (readonly) double timeoutOverride;
@property (getter=isTrackingDeviceReachability, readonly) bool trackingDeviceReachability;
@property (readonly) NSSet *transports;

+ (id)newWithBuilder:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)expectsMultipleResponses;
- (id)initWithBuilder:(id)arg1;
- (bool)isTrackingDeviceReachability;
- (id)requestStartTimeHeaderKey;
- (double)timeToLive;
- (id)timeToLiveHeaderKey;
- (double)timeoutOverride;
- (id)transports;

@end
