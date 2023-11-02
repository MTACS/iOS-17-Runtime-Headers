
@interface CalMigrationBackup : NSObject

+ (bool)backupCalendarDirectory:(id)arg1 intoArchiveNamed:(id)arg2 error:(id*)arg3;
+ (bool)removeExistingBackupWithArchiveName:(id)arg1 inCalendarDirectory:(id)arg2 error:(id*)arg3;
+ (bool)shouldBackupCalendarDirectory:(id)arg1 withPrivacySafePathProvider:(id)arg2;

@end
