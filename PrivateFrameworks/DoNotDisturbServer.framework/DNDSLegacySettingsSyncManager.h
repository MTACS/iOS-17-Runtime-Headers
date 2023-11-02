
@interface DNDSLegacySettingsSyncManager : NSObject <DNDSSettingsSyncManager> {
    NPSDomainAccessor * _accessor;
    <DNDSSettingsSyncManagerDataSource> * _dataSource;
    <DNDSSettingsSyncManagerDelegate> * _delegate;
    bool  _listen;
    NPSManager * _npsManager;
    bool  _send;
}

@property (nonatomic) <DNDSSettingsSyncManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSSettingsSyncManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)cleanupState;
+ (id)receiveManagerForPairedDevice:(id)arg1;
+ (id)sendManagerForPairedDevice:(id)arg1;

- (void).cxx_destruct;
- (void)_beginMonitoringForChanges;
- (void)_endMonitoringForChanges;
- (id)_initWithListen:(bool)arg1 send:(bool)arg2 pairedDevice:(id)arg3;
- (void)_propagateBypassSettings:(id)arg1;
- (void)_propagateScheduleSettings:(id)arg1;
- (void)_updateBypassSettings;
- (void)_updateScheduleSettingsWithDate:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)resume;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)update;

@end
