
@protocol WFLogProtocol <NSObject>

@required

- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 cfStrMsg:(struct __CFString { }*)arg3;
- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 message:(const char *)arg3 valist:(char *)arg4;
- (void)dump;
- (unsigned long long)getLogLevelEnable;
- (unsigned long long)getLogLevelPersist;
- (NSNumber *)getLogLifespanInDays;
- (unsigned long long)getLogPrivacy;
- (unsigned long long)getMaxFileSizeInMB;
- (void)setLogLevelEnable:(unsigned long long)arg1;
- (void)setLogLevelPersist:(unsigned long long)arg1;
- (void)setLogLifespanInDays:(NSNumber *)arg1;
- (void)setLogPrivacy:(unsigned long long)arg1;
- (void)setMaxSizeInKb:(unsigned long long)arg1;

@end
