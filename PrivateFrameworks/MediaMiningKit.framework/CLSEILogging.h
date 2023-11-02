
@interface CLSEILogging : NSObject {
    NSObject<OS_os_log> * _loggingConnection;
}

@property (readonly) NSObject<OS_os_log> *loggingConnection;

+ (id)sharedLogging;

- (void).cxx_destruct;
- (id)loggingConnection;

@end
