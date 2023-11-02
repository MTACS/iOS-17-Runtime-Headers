
@interface HookLocationManager : CLLocationManager <GPSSupport__AutoHook>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)load;
+ (id)optionalMethods;
+ (id)targetClasses;

- (id)hook__initWithDelegate:(id)arg1 onQueue:(id)arg2;
- (id)hook_initWithEffectiveBundleIdentifier:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;
- (id)hook_location;
- (void)hook_requestLocation;
- (void)hook_setDelegate:(id)arg1;
- (void)hook_startUpdatingHeading;
- (void)hook_startUpdatingLocation;
- (void)hook_stopUpdatingHeading;
- (void)hook_stopUpdatingLocation;
- (void)orig_setDelegate:(id)arg1;
- (id)original__initWithDelegate:(id)arg1 onQueue:(id)arg2;
- (id)original_initWithEffectiveBundleIdentifier:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;
- (id)original_location;
- (void)original_requestLocation;
- (void)original_startUpdatingHeading;
- (void)original_startUpdatingLocation;
- (void)original_stopUpdatingHeading;
- (void)original_stopUpdatingLocation;

@end
