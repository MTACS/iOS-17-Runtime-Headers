
@interface ICSLogger : NSObject {
    int  _logCount;
    <ICSLoggingDelegate> * _loggingDelegate;
}

+ (void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 message:(id)arg3;
+ (void)setDelegate:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 format:(id)arg3 args:(char *)arg4;
- (void)setDelegate:(id)arg1;

@end
