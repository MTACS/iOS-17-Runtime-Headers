
@interface UISApplicationStateService : NSObject <BSServiceConnectionListenerDelegate, UISApplicationStateXPCServerInterface> {
    FBSSerialQueue * _calloutQueue;
    <UISApplicationStateServiceDelegate> * _delegate;
    struct { 
        unsigned int delegateDataSourceForApplicationBundleIdentifier : 1; 
    }  _delegateFlags;
    BSServiceConnectionListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UISApplicationStateServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dataSourceForApplicationBundleIdentifier:(id)arg1;
- (bool)_isCurrentConnectionAuthorizedForApplicationBundleIdentifier:(id)arg1 description:(id)arg2;
- (bool)_isCurrentConnectionAuthorizedForApplicationBundleIdentifier:(id)arg1 description:(id)arg2 legacyEntitlement:(id)arg3;
- (id)_operatingBundleIdentifier;
- (void)badgeValueWithCompletion:(id /* block */)arg1;
- (id)delegate;
- (id)init;
- (id)initWithCalloutQueue:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)nextWakeIntervalSinceReferenceDateWithCompletion:(id /* block */)arg1;
- (oneway void)setBadgeNumber:(id)arg1;
- (oneway void)setBadgeString:(id)arg1;
- (void)setBadgeValue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (oneway void)setMinimumBackgroundFetchInterval:(id)arg1;
- (oneway void)setNextWakeIntervalSinceReferenceDate:(id)arg1;
- (oneway void)setUsesBackgroundNetwork:(id)arg1;
- (void)usesBackgroundNetworkWithCompletion:(id /* block */)arg1;

@end
