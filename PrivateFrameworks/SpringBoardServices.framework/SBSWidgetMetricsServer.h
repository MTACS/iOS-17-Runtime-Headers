
@interface SBSWidgetMetricsServer : NSObject <SBSWidgetHostingEnvironmentMetricsProviding> {
    BSServiceConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)checkOutServerInstance;
+ (void)returnServerInstance:(id)arg1;

- (void).cxx_destruct;
- (void)_createConnection;
- (id)_init;
- (void)dealloc;
- (id)init;
- (id)previewMetricsSpecificationForBundleIdentifier:(id)arg1;
- (id)previewMetricsSpecificationForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3;
- (id)previewMetricsSpecificationsForBundleIdentifier:(id)arg1;
- (id)previewMetricsSpecificationsForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3;
- (id)systemMetricsForWidget:(id)arg1;
- (id)systemMetricsForWidget:(id)arg1 inHostingEnvironment:(id)arg2;

@end
