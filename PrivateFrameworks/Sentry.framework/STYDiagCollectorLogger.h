
@interface STYDiagCollectorLogger : NSObject {
    NSObject<OS_os_log> * _logHandle;
}

@property (retain) NSObject<OS_os_log> *logHandle;

+ (id)sharedLogger;

- (void).cxx_destruct;
- (id)logHandle;
- (void)setLogHandle:(id)arg1;

@end
