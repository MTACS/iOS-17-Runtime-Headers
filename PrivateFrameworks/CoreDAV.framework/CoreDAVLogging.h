
@interface CoreDAVLogging : NSObject {
    NSObject<OS_dispatch_queue> * _delegateMuckingQueue;
    NSMutableDictionary * _logDelegates;
    NSMapTable * _primaryLogDelegate;
}

+ (id)sharedLogging;

- (void).cxx_destruct;
- (id)_delegatesToLogForProvider:(id)arg1;
- (void)_logOldMessageForAccountInfoProvider:(id)arg1 level:(unsigned char)arg2 format:(const char *)arg3;
- (bool)_shouldOutputAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2;
- (void)addLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (id)delegatesToLogTransmittedDataForAccountInfoProvider:(id)arg1;
- (id)init;
- (void)logDiagnosticForProvider:(id)arg1 withLevel:(long long)arg2 format:(id)arg3 args:(char *)arg4;
- (id)logHandleForAccountInfoProvider:(id)arg1;
- (void)removeLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (bool)shouldLogAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2;

@end
