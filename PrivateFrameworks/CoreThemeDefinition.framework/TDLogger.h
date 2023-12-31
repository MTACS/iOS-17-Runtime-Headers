
@interface TDLogger : NSObject {
    int  _logMaxVerbosity;
    NSObject<OS_dispatch_queue> * _loggingQueue;
    int  _verbosity;
}

@property (nonatomic) int verbosity;

+ (id)defaultLogger;
+ (id)logger;

- (void)dealloc;
- (id)init;
- (bool)isVerbosityLogErrorsOnly;
- (bool)isVerbosityLogEverything;
- (bool)isVerbosityLogWarningsAndErrors;
- (void)logError:(id)arg1;
- (void)logErrorWithFormat:(id)arg1;
- (void)logExtra:(id)arg1;
- (void)logExtraWithFormat:(id)arg1;
- (void)logInfo:(id)arg1;
- (void)logInfoWithFormat:(id)arg1;
- (void)logMessage:(id)arg1 whenVerbosity:(int)arg2;
- (void)logWarning:(id)arg1;
- (void)logWarningWithFormat:(id)arg1;
- (void)setVerbosity:(int)arg1;
- (int)verbosity;
- (void)waitForLoggingToComplete;

@end
