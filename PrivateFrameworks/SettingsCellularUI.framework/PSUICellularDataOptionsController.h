
@interface PSUICellularDataOptionsController : PSListController {
    PSUICoreTelephonyDataCache * _dataCache;
    PSSpecifier * _parentSpecifier;
    PSUICellularPlanManagerCache * _planManagerCache;
    struct __CTServerConnection { } * _serverConnection;
    CTServiceDescriptor * _serviceDescriptor;
    PSSimStatusCache * _simStatusCache;
}

@property (nonatomic, retain) PSUICoreTelephonyDataCache *dataCache;
@property (nonatomic, retain) PSUICellularPlanManagerCache *planManagerCache;
@property (nonatomic, retain) PSSimStatusCache *simStatusCache;

- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (id)dataCache;
- (void)dealloc;
- (id)getCDMARoamingStatus:(id)arg1;
- (id)getDataRoamingStatus:(id)arg1;
- (id)getDataRoamingStatusForService:(id)arg1;
- (id)getLogger;
- (id)init;
- (id)initWithParentSpecifier:(id)arg1;
- (id)initWithParentSpecifier:(id)arg1 simStatusCache:(id)arg2 planManagerCache:(id)arg3 dataCache:(id)arg4;
- (id)planManagerCache;
- (void)roamingOptionsDidChange;
- (id)roamingSettingsDescription:(id)arg1;
- (id)roamingSpecifiers;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setDataCache:(id)arg1;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setDataRoamingEnabledForService:(id)arg1 specifier:(id)arg2;
- (void)setPlanManagerCache:(id)arg1;
- (void)setSimStatusCache:(id)arg1;
- (id)simStatusCache;
- (id)specifiers;

@end
