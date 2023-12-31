
@interface NRDeviceDiscoveryController : NSObject

@property (nonatomic, readonly) NSArray *devices;

+ (id)sharedInstance;

- (void)begin;
- (id)devices;
- (void)end;
- (id)init;
- (void)overrideSignalStrengthLimit:(long long)arg1;

@end
