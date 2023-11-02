
@interface CalLocationAuthorization : NSObject <CLLocationManagerDelegate> {
    id  _bundleOrBundleIdentifier;
    NSObject<OS_dispatch_group> * _initializationGroup;
    CLLocationManager * _locationManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    CalLocationAuthorizationStatus * _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_cachedInstanceForBundleID:(id)arg1 bundle:(id)arg2;
+ (id)_keyForBundleID:(id)arg1 bundle:(id)arg2;
+ (id)authorizationForBundleIdentifier:(id)arg1 bundle:(id)arg2 createIfNecessary:(bool)arg3;
+ (int)authorizationStatusForBundle:(id)arg1;
+ (void)authorizationStatusForBundle:(id)arg1 completion:(id /* block */)arg2;
+ (int)authorizationStatusForBundleIdentifier:(id)arg1;
+ (int)authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2;
+ (void)authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2 completion:(id /* block */)arg3;
+ (void)authorizationStatusForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (void)initializeQueueAndInstancesIfNeeded;
+ (id)locationAuthorizationAsyncCallersQueue;
+ (unsigned long long)locationPrecisionForBundleIdentifier:(id)arg1;
+ (unsigned long long)locationPrecisionForBundleIdentifier:(id)arg1 bundle:(id)arg2;
+ (id)logHandle;
+ (bool)preciseLocationAuthorizedForBundle:(id)arg1;
+ (void)preciseLocationAuthorizedForBundle:(id)arg1 completion:(id /* block */)arg2;
+ (bool)preciseLocationAuthorizedForBundleIdentifier:(id)arg1;
+ (bool)preciseLocationAuthorizedForBundleIdentifier:(id)arg1 bundle:(id)arg2;
+ (void)preciseLocationAuthorizedForBundleIdentifier:(id)arg1 bundle:(id)arg2 completion:(id /* block */)arg3;
+ (void)preciseLocationAuthorizedForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (unsigned long long)ttlLocationStatus;
+ (void)ttlLocationStatusWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)authorizationStatus;
- (id)initWithBundleID:(id)arg1 bundle:(id)arg2 queue:(id)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (unsigned long long)waitForPrecision;

@end
