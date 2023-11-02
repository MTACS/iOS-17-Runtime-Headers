
@interface HMDModernTransportDeviceReachabilityObserverListenerContext : NSObject {
    HMDDeviceAddress * _address;
    NSHashTable * _listeners;
    NSNumber * _reachability;
    double  _unreachableStartTime;
}

@property (nonatomic, retain) HMDDeviceAddress *address;
@property (nonatomic, readonly) NSHashTable *listeners;
@property (nonatomic, retain) NSNumber *reachability;
@property (nonatomic) double unreachableStartTime;

- (void).cxx_destruct;
- (id)address;
- (id)initWithAddress:(id)arg1;
- (id)listeners;
- (id)reachability;
- (void)setAddress:(id)arg1;
- (void)setReachability:(id)arg1;
- (void)setUnreachableStartTime:(double)arg1;
- (double)unreachableStartTime;

@end
