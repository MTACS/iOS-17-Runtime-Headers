
@interface EDSearchableIndexDiagnosticsController : NSObject <EFLoggable> {
    NSBackgroundActivityScheduler * _indexingDiagnosticsScheduler;
    EDSearchableIndexPersistence * _persistence;
    <EFCancelable> * _stateCancelable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSBackgroundActivityScheduler *indexingDiagnosticsScheduler;
@property (nonatomic, retain) EDSearchableIndexPersistence *persistence;
@property (nonatomic, retain) <EFCancelable> *stateCancelable;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)_debuggingDiagnostics;
- (void)_logDebuggingDiagnostics:(id)arg1;
- (void)_registerDebuggingDiagnosticsCaptureHandler;
- (void)_startLoggingDebuggingDiagnostics;
- (void)_stopCollection;
- (void)_stopLoggingDebuggingDiagnostics;
- (void)_unregisterDebuggingDiagnosticsCaptureHandler;
- (void)dealloc;
- (id)indexingDiagnosticsScheduler;
- (id)initWithPersistence:(id)arg1;
- (id)persistence;
- (void)setIndexingDiagnosticsScheduler:(id)arg1;
- (void)setPersistence:(id)arg1;
- (void)setStateCancelable:(id)arg1;
- (void)startCollection;
- (id)stateCancelable;

@end
