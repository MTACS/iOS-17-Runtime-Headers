
@interface SUControllerLogger : NSObject {
    NSObject<OS_os_log> * _logError;
    NSObject<OS_os_log> * _logInfo;
    long long  _logLevel;
    NSObject<OS_os_log> * _logNotice;
}

@property (nonatomic) long long logLevel;

+ (id)sharedLogger;

- (void).cxx_destruct;
- (id)init;
- (void)logAtLevel:(long long)arg1 label:(const char *)arg2 format:(id)arg3;
- (long long)logLevel;
- (void)setLogLevel:(long long)arg1;
- (void)setLoglevel:(long long)arg1;

@end
