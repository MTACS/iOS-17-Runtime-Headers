
@interface AUDeveloperSettingsDatabase : NSObject {
    NSObject<OS_os_log> * _log;
}

@property (readonly) NSDictionary *accessoriesDictionary;

+ (id)sharedDatabase;

- (void).cxx_destruct;
- (id)accessoriesDictionary;
- (void)accessoryNameForIdentifier:(id)arg1 name:(id*)arg2 serialNumber:(id*)arg3 fusingType:(unsigned long long*)arg4;
- (void)addAccessoryWithSerialNumber:(id)arg1 info:(id)arg2;
- (id)init;
- (bool)isSeedParticipationEnabled:(id)arg1;
- (bool)isValidLocationType:(unsigned long long)arg1;
- (void)migrateExistingDefaults;
- (void)removeAccessoryWithSerialNumber:(id)arg1;
- (id)seedParticipationDictionary;
- (void)setAccessoriesDictionary:(id)arg1;
- (void)updateAccessory:(id)arg1 locationType:(unsigned long long)arg2;
- (unsigned long long)urlLocationTypeForAccessory:(id)arg1;

@end
