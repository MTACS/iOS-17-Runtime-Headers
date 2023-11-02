
@interface STMutableStatusBarDataAdditionsStatusDomainData : STStatusBarDataAdditionsStatusDomainData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (nonatomic, copy) STStatusBarDataActivityEntry *activityEntry;
@property (nonatomic, copy) STStatusBarDataBluetoothEntry *bluetoothEntry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) STMutableDictionaryData *entryDictionaryData;
@property (nonatomic, copy) STStatusBarDataQuietModeEntry *focusModeEntry;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) STStatusBarDataLockEntry *lockEntry;
@property (nonatomic, copy) STStatusBarDataStringEntry *personNameEntry;
@property (nonatomic, copy) STStatusBarDataBoolEntry *ringerSilenceEntry;
@property (readonly) Class superclass;
@property (nonatomic, copy) STStatusBarDataTetheringEntry *tetheringEntry;
@property (nonatomic, copy) STStatusBarDataThermalEntry *thermalEntry;

- (bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entryDictionaryData;
- (id)initWithEntryDictionaryData:(id)arg1;
- (void)setActivityEntry:(id)arg1;
- (void)setBluetoothEntry:(id)arg1;
- (void)setFocusModeEntry:(id)arg1;
- (void)setLockEntry:(id)arg1;
- (void)setPersonNameEntry:(id)arg1;
- (void)setRingerSilenceEntry:(id)arg1;
- (void)setTetheringEntry:(id)arg1;
- (void)setThermalEntry:(id)arg1;

@end
