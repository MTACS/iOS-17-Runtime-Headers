
@interface GCDaemon : NSObject <NSObject> {
    GCConfigurationAssetManagementServiceConnection * _configAssetManagementServiceConnection;
    _GCGenericDeviceDBServiceConnection * _configGenericDeviceDBServiceConnection;
    GCConfigXPCServiceConnection * _configServiceConnection;
    NSObject<OS_dispatch_workloop> * _workloop;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createRootWorkloop;

- (void).cxx_destruct;
- (id)init;
- (id)serviceFor:(id)arg1 client:(id)arg2;

@end
