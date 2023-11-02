
@interface WFLoggerBase : NSObject <WFLogProtocol> {
    WFLogger * _ctxt;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned char  _internalInstall;
}

@property (readonly) unsigned char WFIsInternalInstall;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=getLogLevelEnable) unsigned long long logLevelEnable;
@property (getter=getLogLevelPersist) unsigned long long logLevelPersist;
@property (getter=getLogLifespanInDays, copy) NSNumber *logLifespanInDays;
@property (getter=getLogPrivacy) unsigned long long logPrivacy;
@property (getter=getMaxFileSizeInMB) unsigned long long maxSizeInKb;
@property (readonly) Class superclass;

- (unsigned char)WFIsInternalInstall;
- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 cfStrMsg:(struct __CFString { }*)arg3;
- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 message:(const char *)arg3 valist:(char *)arg4;
- (void)dump;
- (unsigned long long)getLogLevelEnable;
- (unsigned long long)getLogLevelPersist;
- (id)getLogLifespanInDays;
- (unsigned long long)getLogPrivacy;
- (unsigned long long)getMaxFileSizeInMB;
- (void)setLogLevelEnable:(unsigned long long)arg1;
- (void)setLogLevelPersist:(unsigned long long)arg1;
- (void)setLogLifespanInDays:(id)arg1;
- (void)setLogPrivacy:(unsigned long long)arg1;
- (void)setMaxSizeInKb:(unsigned long long)arg1;
- (void)stopWatchingLogFile;

@end
