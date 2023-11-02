
@interface ICQNetworkThrottleController : NSObject {
    NSUserDefaults * _defaults;
}

@property (nonatomic, retain) NSUserDefaults *defaults;

- (void).cxx_destruct;
- (id)defaults;
- (id)init;
- (void)request:(id)arg1 didCompleteWithError:(id)arg2;
- (bool)requestShouldThrottle:(id)arg1;
- (void)setDefaults:(id)arg1;

@end
