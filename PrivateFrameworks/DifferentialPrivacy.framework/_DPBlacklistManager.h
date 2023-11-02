
@interface _DPBlacklistManager : NSObject <_DPMaintenance>

+ (bool)createRuntimeBlacklistDirectory:(id)arg1;
+ (id)keepLatestRuntimeBlacklistInDirectory:(id)arg1 compareToSystemBlacklistInDirectory:(id)arg2;
+ (unsigned long long)memoryRequiredBySystemBlacklistInDirectory:(id)arg1 runtimeBlacklistInDirectory:(id)arg2 blacklist:(id)arg3;
+ (unsigned long long)memorySizeWithDirectory:(id)arg1;
+ (void)processRuntimeBlacklist;
+ (void)processRuntimeBlacklist:(id)arg1 systemDirectory:(id)arg2 runtimeDirectory:(id)arg3 blacklistLengthLimit:(unsigned long long)arg4;
+ (bool)removeAllFilesFromDirectory:(id)arg1;
+ (bool)removeBlacklistFileWithKey:(id)arg1 fromDirectory:(id)arg2;
+ (bool)saveBlacklist:(id)arg1 forKey:(id)arg2 runtimeDirectory:(id)arg3;
+ (bool)saveBlacklist:(id)arg1 knownVersionByKey:(id)arg2 systemDirectory:(id)arg3 runtimeDirectory:(id)arg4;
+ (bool)saveBlacklist:(id)arg1 systemDirectory:(id)arg2 runtimeDirectory:(id)arg3 memoryLimit:(unsigned long long)arg4;
+ (bool)validateBlacklist:(id)arg1;

- (void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2;

@end
