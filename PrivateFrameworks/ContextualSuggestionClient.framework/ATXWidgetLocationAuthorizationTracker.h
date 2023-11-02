
@interface ATXWidgetLocationAuthorizationTracker : NSObject <CLLocationManagerDelegate> {
    NSString * _containerBundleIdentifier;
    NSString * _extensionBundleIdentifier;
    CLLocationManager * _manager;
    NSObject<OS_dispatch_queue> * _queue;
    NSNumber * _queue_authorizedForWidgetUpdates;
    NSObject<OS_dispatch_semaphore> * _sem;
}

@property (getter=isContainerAuthorizedForWidgetUpdates, nonatomic, readonly) bool containerAuthorizedForWidgetUpdates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool widgetWantsLocation;

- (void).cxx_destruct;
- (id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2;
- (bool)isContainerAuthorizedForWidgetUpdates;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (bool)widgetWantsLocation;

@end
