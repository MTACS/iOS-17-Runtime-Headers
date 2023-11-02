
@interface WFLogger : NSObject {
    unsigned long long  _destination;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    WFLoggerBase * _loggerBase;
    unsigned long long  _privacy;
    unsigned char  _wflEnableDualLoggingOnWatchClassDevice;
    unsigned char  _wflRunningOnWatchClassDevice;
}

@property (getter=getDestination, readonly) unsigned long long destination;
@property (getter=getLogLevelEnable, readonly) unsigned long long logLevelEnable;
@property (getter=getLogLevelPersist, readonly) unsigned long long logLevelPersist;
@property (getter=getLogLifespanInDays, readonly, copy) NSNumber *logLifespanInDays;
@property (getter=getLogPrivacy, readonly) unsigned long long logPrivacy;
@property (getter=getMaxFileSizeInMB, readonly) unsigned long long maxFileSizeInMB;

+ (id)sharedWFLoggerSingleton;

- (void)WFLog:(unsigned long long)arg1 message:(const char *)arg2;
- (void)dump;
- (unsigned long long)getDestination;
- (unsigned long long)getLogLevelEnable;
- (unsigned long long)getLogLevelPersist;
- (id)getLogLifespanInDays;
- (unsigned long long)getLogPrivacy;
- (unsigned long long)getMaxFileSizeInMB;
- (id)init;
- (id)loggerBase;
- (void)setDestinationCircularBuffer;
- (void)setDestinationFile:(struct __CFString { }*)arg1 runLoopRef:(struct __CFRunLoop { }*)arg2 runLoopMode:(struct __CFString { }*)arg3 classC:(unsigned char)arg4 dateFormatter:(struct __CFDateFormatter { }*)arg5 maxFileSizeInMB:(unsigned long long)arg6 logLifespanInDays:(unsigned long long)arg7;
- (void)setDestinationFileLocation:(struct __CFString { }*)arg1 fileNamePrefix:(struct __CFString { }*)arg2 runLoopRef:(struct __CFRunLoop { }*)arg3 runLoopMode:(struct __CFString { }*)arg4 classC:(unsigned char)arg5 dateFormatter:(struct __CFDateFormatter { }*)arg6 maxFileSizeInMB:(unsigned long long)arg7 logLifespanInDays:(unsigned long long)arg8;
- (void)setDestinationOsLog:(struct __CFString { }*)arg1 category:(struct __CFString { }*)arg2 logLifespanInDays:(unsigned long long)arg3 logLevel:(unsigned long long)arg4 logPrivacy:(unsigned long long)arg5;

@end
