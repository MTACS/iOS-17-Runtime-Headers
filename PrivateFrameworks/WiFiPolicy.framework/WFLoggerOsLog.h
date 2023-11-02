
@interface WFLoggerOsLog : WFLoggerBase {
    struct __CFString { } * _category;
    unsigned long long  _currentLevel;
    unsigned long long  _logLifeSpanInDays;
    NSObject<OS_os_log> * _osLog;
    NSMutableDictionary * _profileSettings;
    struct __CFString { } * _subSystem;
}

@property (getter=getProfileFilePath, readonly, copy) NSString *profileFilePath;

+ (void)WFLogOsLog:(unsigned long long)arg1 cfStrMsg:(struct __CFString { }*)arg2;
+ (unsigned char)convertWFLogLevelToOsLogLevel:(unsigned long long)arg1;

- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 cfStrMsg:(struct __CFString { }*)arg3;
- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 message:(const char *)arg3 valist:(char *)arg4;
- (unsigned char)convertLogLevel:(unsigned long long)arg1;
- (void)createOsLogProfile;
- (void)dealloc;
- (unsigned char)doesProfileExist:(id)arg1;
- (id)formatOsLogProfile:(id)arg1 levelEnabled:(id)arg2 levelPersist:(id)arg3 ttlDays:(id)arg4 privacy:(id)arg5;
- (id)getLevelEnabled:(id)arg1 category:(id)arg2;
- (id)getLevelPersist:(id)arg1 category:(id)arg2;
- (unsigned long long)getLogLevelEnable;
- (unsigned long long)getLogLevelPersist;
- (id)getLogLifespanInDays;
- (unsigned long long)getLogPrivacy;
- (unsigned long long)getMaxFileSizeInMB;
- (id)getPrivacy:(id)arg1 category:(id)arg2;
- (id)getProfileFilePath;
- (id)getTtlDays:(id)arg1 category:(id)arg2;
- (id)init:(id)arg1 subSystem:(struct __CFString { }*)arg2 category:(struct __CFString { }*)arg3 logLifespanInDays:(unsigned long long)arg4 logLevel:(unsigned long long)arg5 logPrivacy:(unsigned long long)arg6 dispatchQueue:(id)arg7;
- (id)mapLogLevelEnum:(unsigned long long)arg1;
- (unsigned long long)mapLogLevelStr:(id)arg1;
- (unsigned char)setLevelEnabled:(id)arg1 category:(id)arg2 value:(id)arg3;
- (unsigned char)setLevelPersist:(id)arg1 category:(id)arg2 value:(id)arg3;
- (void)setLogLevelEnable:(unsigned long long)arg1;
- (void)setLogLevelPersist:(unsigned long long)arg1;
- (void)setLogLifespanInDays:(id)arg1;
- (void)setLogPrivacy:(unsigned long long)arg1;
- (void)setMaxSizeInKb:(unsigned long long)arg1;
- (unsigned char)setPrivacy:(id)arg1 category:(id)arg2 value:(id)arg3;
- (unsigned char)setTtlDays:(id)arg1 category:(id)arg2 value:(id)arg3;
- (void)stopWatchingLogFile;
- (unsigned char)writeDictToFile:(id)arg1 idStr:(id)arg2;

@end
