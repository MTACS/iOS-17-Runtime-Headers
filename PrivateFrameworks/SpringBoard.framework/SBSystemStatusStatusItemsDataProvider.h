
@interface SBSystemStatusStatusItemsDataProvider : NSObject <BSInvalidatable, SBDisplayReferenceModeStatusObserver> {
    bool  _alarmEnabled;
    STActivityAttribution * _attribution;
    SBDisplayReferenceModeMonitor * _displayReferenceModeMonitor;
    SBWindowScene * _mainDisplayWindowScene;
    NSDictionary * _statusItemAttributionsByIdentifier;
    STStatusItemsStatusDomainPublisher * _statusItemsPublisher;
    SBTelephonyManager * _telephonyManager;
    STTelephonyStatusDomain * _telephonyStatusDomain;
    STWifiStatusDomain * _wifiStatusDomain;
}

@property (getter=isAlarmEnabled, nonatomic) bool alarmEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBDisplayReferenceModeMonitor *displayReferenceModeMonitor;
@property (readonly) unsigned long long hash;
@property (nonatomic) SBWindowScene *mainDisplayWindowScene;
@property (nonatomic, readonly) NSDictionary *statusItemAttributionsByIdentifier;
@property (nonatomic, readonly) STStatusItemsStatusDomainPublisher *statusItemsPublisher;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBTelephonyManager *telephonyManager;
@property (nonatomic, readonly) STTelephonyStatusDomain *telephonyStatusDomain;
@property (nonatomic, readonly) STWifiStatusDomain *wifiStatusDomain;

- (void).cxx_destruct;
- (bool)_hasAttributionForStatusItemWithIdentifier:(id)arg1;
- (id)_identifiersForSupportedStatusItems;
- (bool)_isDisplayWarningItemEnabled;
- (bool)_isVPNItemEnabled;
- (void)_registerForNotifications;
- (void)_updateAllData;
- (void)_updateDataForAirPlay;
- (void)_updateDataForAirplaneMode;
- (void)_updateDataForAlarm;
- (void)_updateDataForCarPlay;
- (void)_updateDataForDisplayWarning;
- (void)_updateDataForLiquidDetection;
- (void)_updateDataForRotationLock;
- (void)_updateDataForStatusItemsWithIdentifiers:(id)arg1;
- (void)_updateDataForTTY;
- (void)_updateDataForVPN;
- (bool)_wantsAttributionForStatusItemWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)displayReferenceModeMonitor;
- (void)displayReferenceModeStatusDidChangeForDisplayWithConfiguration:(id)arg1 newStatus:(long long)arg2;
- (id)initWithMainDisplayWindowScene:(id)arg1;
- (void)invalidate;
- (bool)isAlarmEnabled;
- (id)mainDisplayWindowScene;
- (void)setAlarmEnabled:(bool)arg1;
- (void)setMainDisplayWindowScene:(id)arg1;
- (id)statusItemAttributionsByIdentifier;
- (id)statusItemsPublisher;
- (id)telephonyManager;
- (id)telephonyStatusDomain;
- (id)wifiStatusDomain;

@end
