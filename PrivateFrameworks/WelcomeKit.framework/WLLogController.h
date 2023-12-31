
@interface WLLogController : NSObject {
    bool  _loggingEnabled;
}

+ (id)sharedLogger;

- (bool)_loggingEnabled;
- (void)_reloadLogPreferences;
- (id)init;
- (void)logMessageFromAddress:(void*)arg1 withLevel:(unsigned long long)arg2 format:(id)arg3 args:(char *)arg4;

@end
