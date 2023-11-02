
@interface WFCloudKitSyncSession : NSObject

+ (long long)currentDefaultShortcutsVersion;
+ (long long)defaultShortcutsVersion;
+ (void)fetchCloudKitSyncFlagsIfNecessaryWithCompletionHandler:(id /* block */)arg1;
+ (bool)ignoresUserDeletedZoneErrors;
+ (void)initialize;
+ (bool)isSyncEnabled;
+ (bool)isWalrusEnabled;
+ (bool)isWalrusForcedEnabled;
+ (long long)lastSyncedFlagsHash;
+ (bool)needsDefaultShortcutUpdate;
+ (void)resolveWalrusStatus;
+ (void)setDefaultShortcutsVersion:(long long)arg1;
+ (void)setIgnoresUserDeletedZoneErrors:(bool)arg1;
+ (void)setLastSyncedFlagsHash:(long long)arg1;
+ (void)setSyncEnabled:(bool)arg1;
+ (void)setVoiceShortcutMigrationDidRun:(bool)arg1;
+ (void)setVoiceShortcutMigrationDidSync:(bool)arg1;
+ (void)setWalrusEnabled:(bool)arg1;
+ (void)setWalrusForcedEnabled:(bool)arg1;
+ (void)setZoneWasPurged:(bool)arg1;
+ (long long)syncedFlagsHash;
+ (bool)voiceShortcutMigrationDidRun;
+ (bool)voiceShortcutMigrationDidSync;
+ (bool)zoneWasPurged;

- (id)applyConflictResolution:(id)arg1 inDatabase:(id)arg2;

@end
