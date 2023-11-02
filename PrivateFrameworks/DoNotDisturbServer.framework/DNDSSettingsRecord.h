
@interface DNDSSettingsRecord : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    DNDSBehaviorSettingsRecord * _behaviorSettings;
    DNDSConfigurationsRecord * _configurations;
    DNDSBypassSettingsRecord * _phoneCallBypassSettings;
    DNDSScheduleSettingsRecord * _scheduleSettings;
}

@property (nonatomic, readonly, copy) DNDSBehaviorSettingsRecord *behaviorSettings;
@property (nonatomic, readonly, copy) DNDSConfigurationsRecord *configurations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) DNDSBypassSettingsRecord *phoneCallBypassSettings;
@property (nonatomic, readonly, copy) DNDSScheduleSettingsRecord *scheduleSettings;
@property (readonly) Class superclass;

+ (id)backingStoreWithFileURL:(id)arg1;
+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;
+ (id)recordWithEncodedInfo:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_initWithBehaviorSettings:(id)arg1 phoneCallBypassSettings:(id)arg2 scheduleSettings:(id)arg3 configurations:(id)arg4;
- (id)_initWithRecord:(id)arg1;
- (id)behaviorSettings;
- (id)configurations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)phoneCallBypassSettings;
- (id)scheduleSettings;

@end
