
@interface NMSSHLogger : NSObject {
    bool  _enabled;
    id /* block */  _logBlock;
    unsigned long long  _logLevel;
    NSObject<OS_dispatch_queue> * _loggerQueue;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) id /* block */ logBlock;
@property (nonatomic) unsigned long long logLevel;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *loggerQueue;

+ (id)logger;
+ (id)sharedLogger;

- (void).cxx_destruct;
- (bool)isEnabled;
- (void)log:(id)arg1 level:(unsigned long long)arg2 flag:(unsigned long long)arg3;
- (id /* block */)logBlock;
- (void)logError:(id)arg1;
- (void)logInfo:(id)arg1;
- (unsigned long long)logLevel;
- (void)logVerbose:(id)arg1;
- (void)logWarn:(id)arg1;
- (id)loggerQueue;
- (void)setEnabled:(bool)arg1;
- (void)setLogBlock:(id /* block */)arg1;
- (void)setLogLevel:(unsigned long long)arg1;
- (void)setLoggerQueue:(id)arg1;

@end
