
@interface CLEmergencyLocationSelector : NSObject <CLLocationManagerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithConfig:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 queue:(id)arg4;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)stopSession;

@end
