
@interface ARDaemonStatusLogger : NSObject

- (void)_logOrGenerateString:(id)arg1 fromDictionary:(id)arg2 forServerObject:(id)arg3 andProcessName:(id)arg4 withLogType:(id)arg5;
- (void)_logProcessInformationFromDictionary:(id)arg1 forServerObject:(id)arg2 andProcessName:(id)arg3 asInterval:(bool)arg4 generatedTestString:(id)arg5;
- (void)_logSystemInformationFromDictionary:(id)arg1 forServerObject:(id)arg2 asInterval:(bool)arg3 generatedTestString:(id)arg4;
- (id)generateStringFromStatusLogWithType:(id)arg1 fromDictionary:(id)arg2 forServerObject:(id)arg3 andProcessName:(id)arg4;
- (void)logStatusWithType:(id)arg1 fromDictionary:(id)arg2 forServerObject:(id)arg3 andProcessName:(id)arg4;

@end
