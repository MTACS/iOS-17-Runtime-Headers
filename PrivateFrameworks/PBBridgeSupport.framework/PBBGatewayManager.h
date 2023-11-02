
@interface PBBGatewayManager : NSObject <DNDGlobalConfigurationServiceListener> {
    NSString * _allowedGroupName;
    NSArray * _bbSections;
    <PBBGatewayManagerDelegate> * _delegate;
    NSDateComponents * _dndFromComponents;
    NSDateComponents * _dndToComponents;
    unsigned long long  _doNotDisturbPrivilegedSenderType;
    NSString * _doNotDisturbPrivilegedSenderTypeGroupIdentifier;
    DNDGlobalConfigurationService * _globalConfigurationService;
    bool  _isScheduled;
    unsigned long long  _repeatedCallsEnabled;
    BBSettingsGateway * _settingsGateway;
}

@property (nonatomic, readonly) NSString *allowedGroupName;
@property (nonatomic, retain) NSArray *bbSections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PBBGatewayManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDateComponents *dndFromComponents;
@property (nonatomic, readonly) NSDateComponents *dndToComponents;
@property (nonatomic, readonly) unsigned long long doNotDisturbPrivilegedSenderType;
@property (nonatomic, readonly) NSString *doNotDisturbPrivilegedSenderTypeGroupIdentifier;
@property (nonatomic, retain) DNDGlobalConfigurationService *globalConfigurationService;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isScheduled;
@property (nonatomic) unsigned long long repeatedCallsEnabled;
@property (nonatomic, retain) BBSettingsGateway *settingsGateway;
@property (readonly) Class superclass;

+ (id)dateComponentsFromDNDScheduleTime:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)allowedGroupName;
- (id)bbSections;
- (void)dealloc;
- (id)delegate;
- (id)dndFromComponents;
- (id)dndToComponents;
- (unsigned long long)doNotDisturbPrivilegedSenderType;
- (id)doNotDisturbPrivilegedSenderTypeGroupIdentifier;
- (id)globalConfigurationService;
- (void)globalConfigurationService:(id)arg1 didReceiveUpdatedPairSyncState:(unsigned long long)arg2;
- (id)init;
- (bool)isScheduled;
- (void)loadBBSections;
- (void)loadDNDState;
- (bool)pairSyncEnabled;
- (bool)pairSyncStateEditable;
- (bool)repeatedCalls;
- (unsigned long long)repeatedCallsEnabled;
- (void)setBbSections:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGlobalConfigurationService:(id)arg1;
- (void)setPairSyncEnabled:(bool)arg1;
- (void)setRepeatedCallsEnabled:(unsigned long long)arg1;
- (void)setSettingsGateway:(id)arg1;
- (id)settingsGateway;

@end
