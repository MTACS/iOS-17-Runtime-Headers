
@interface AUCrashHandler : NSObject <OSADiagnosticObserver> {
    id /* block */  _crashCallback;
    int  _watchedPid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_bundleIdentifierIsApple:(id)arg1;
+ (id)_deanonymizeUserHomePath:(id)arg1;
+ (bool)_isAppleApplicationInPath:(id)arg1 bundle:(id)arg2;
+ (bool)_pathIsApple:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didWriteDiagnosticLog:(id)arg1 logId:(id)arg2 logFilePath:(id)arg3 logInfo:(id)arg4 error:(id)arg5;
- (id)initWithPid:(int)arg1 withCrashBlock:(id /* block */)arg2;
- (void)willWriteDiagnosticLog:(id)arg1 logId:(id)arg2 logInfo:(id)arg3;

@end
