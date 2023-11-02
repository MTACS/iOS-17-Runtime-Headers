
@interface HMFLocationAuthorization : HMFObject <CLLocationManagerDelegate, HMFLogging> {
    NSBundle * _bundle;
    NSString * _bundleIdentifier;
    CLLocationManager * _internal;
    struct hmf_unfair_data_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _lock;
    NSMutableSet * _observers;
    __HMFLocationAuthorizationMarkOperation * _operation;
    NSObject<OS_dispatch_queue> * _queue;
    __HMFLocationAuthorizationRequest * _request;
    long long  _state;
    int  _status;
}

@property (getter=isAuthorized, readonly) bool authorized;
@property (readonly) NSBundle *bundle;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) CLLocationManager *internal;
@property (getter=isMonitoring, readonly) bool monitoring;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) int status;
@property (readonly) Class superclass;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
+ (id)logCategory;
+ (id)sharedAuthorization;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)bundle;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)init;
- (id)initWithBundle:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)internal;
- (bool)isAuthorized;
- (bool)isMonitoring;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)locationOperationCompleted;
- (id)logIdentifier;
- (void)mark;
- (id)queue;
- (void)registerObserver:(id)arg1;
- (void)requestAuthorization:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setQueue:(id)arg1;
- (int)status;
- (void)unregisterObserver:(id)arg1;

@end
