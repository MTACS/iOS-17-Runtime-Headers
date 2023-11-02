
@interface CHLogger : NSObject {
    NSObject<OS_os_log> * _logHandle;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *logHandle;

- (void).cxx_destruct;
- (id)initWithDomain:(const char *)arg1;
- (id)logHandle;

@end
