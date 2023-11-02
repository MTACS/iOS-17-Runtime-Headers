
@interface STStatusBarDataAdditionsStatusDomainData : NSObject <BSDebugDescriptionProviding, NSSecureCoding, STStatusDomainData, STStatusDomainDataDifferencing> {
    STDictionaryData * _entryDictionaryData;
}

@property (nonatomic, readonly, copy) STStatusBarDataActivityEntry *activityEntry;
@property (nonatomic, readonly, copy) STStatusBarDataBluetoothEntry *bluetoothEntry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) STDictionaryData *entryDictionaryData;
@property (nonatomic, readonly, copy) STStatusBarDataQuietModeEntry *focusModeEntry;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) STStatusBarDataLockEntry *lockEntry;
@property (nonatomic, readonly, copy) STStatusBarDataStringEntry *personNameEntry;
@property (nonatomic, readonly, copy) STStatusBarDataBoolEntry *ringerSilenceEntry;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) STStatusBarDataTetheringEntry *tetheringEntry;
@property (nonatomic, readonly, copy) STStatusBarDataThermalEntry *thermalEntry;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityEntry;
- (id)bluetoothEntry;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataByApplyingDiff:(id)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)diffFromData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entryDictionaryData;
- (id)focusModeEntry;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntryDictionaryData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lockEntry;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)personNameEntry;
- (id)ringerSilenceEntry;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)tetheringEntry;
- (id)thermalEntry;

@end
