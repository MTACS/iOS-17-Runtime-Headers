
@interface SBWidgetMetricsServer : NSObject <BSServiceConnectionListenerDelegate, SBSWidgetMetricsServiceServerInterface> {
    <SBSWidgetMetricsProviding> * _ambientMetricsProvider;
    FBServiceClientAuthenticator * _authenticator;
    NSMutableArray * _connections;
    BSServiceConnectionListener * _listener;
    <SBSWidgetMetricsProviding> * _lockScreenMetricsProvider;
    NSObject<OS_dispatch_queue> * _queue;
    <SBSWidgetMetricsProviding> * _systemMetricsProvider;
}

@property (nonatomic, readonly) <SBSWidgetMetricsProviding> *ambientMetricsProvider;
@property (nonatomic, readonly) FBServiceClientAuthenticator *authenticator;
@property (nonatomic, readonly, copy) NSMutableArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BSServiceConnectionListener *listener;
@property (nonatomic, readonly) <SBSWidgetMetricsProviding> *lockScreenMetricsProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SBSWidgetMetricsProviding> *systemMetricsProvider;

- (void).cxx_destruct;
- (id)_defaultMetricsProviderForWidget:(id)arg1;
- (id)_metricsProviderForHostingEnvironment:(id)arg1;
- (id)ambientMetricsProvider;
- (id)authenticator;
- (id)connections;
- (void)dealloc;
- (id)init;
- (id)initWithSystemMetricsProvider:(id)arg1 lockScreenMetricsProvider:(id)arg2 ambientMetricsProvider:(id)arg3;
- (id)listener;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (id)lockScreenMetricsProvider;
- (id)previewMetricsSpecificationForBundleIdentifier:(id)arg1;
- (id)previewMetricsSpecificationForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3;
- (id)previewMetricsSpecificationsForBundleIdentifier:(id)arg1;
- (id)previewMetricsSpecificationsForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3;
- (id)queue;
- (id)systemMetricsForWidget:(id)arg1;
- (id)systemMetricsForWidget:(id)arg1 inHostingEnvironment:(id)arg2;
- (id)systemMetricsProvider;

@end
