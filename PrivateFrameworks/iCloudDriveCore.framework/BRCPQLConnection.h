
@interface BRCPQLConnection : PQLConnection {
    NSString * _assertionPersonaIdentifier;
    bool  _autovacuumInProgress;
    br_pacer * _batchingPacer;
    int  _changeCount;
    long long  _changesOverride;
    bool  _flushImmediately;
    double  _flushInterval;
    bool  _isReadonly;
    unsigned long long  _vmStepsExecuted;
}

@property (nonatomic, retain) NSString *assertionPersonaIdentifier;
@property (nonatomic, readonly) bool isReadonly;
@property (nonatomic, copy) id /* block */ lockedHandler;
@property (nonatomic) bool profilingEnabled;
@property (nonatomic, readonly) unsigned long long vmStepsExecuted;

- (void).cxx_destruct;
- (void)_setErrorHandlerWithDBCorruptionHandler:(id /* block */)arg1;
- (void)_setLockedHandler;
- (bool)_shouldFlushWithChangeCount:(int)arg1;
- (bool)_validateIsRunningWithCorrectPersona;
- (void)assertOnQueue;
- (id)assertionPersonaIdentifier;
- (bool)attachDBAtPath:(id)arg1 as:(id)arg2 error:(id*)arg3;
- (void)autovacuumIfNeeded;
- (void)brc_close;
- (bool)brc_closeWithError:(id*)arg1;
- (long long)changes;
- (void)disableProfilingForQueriesInBlock:(id /* block */)arg1;
- (bool)execute:(id)arg1;
- (bool)execute:(id)arg1 args:(char *)arg2;
- (bool)executeRaw:(id)arg1;
- (bool)executeWithErrorHandler:(id /* block */)arg1 sql:(id)arg2;
- (bool)executeWithExpectedIndex:(id)arg1 sql:(id)arg2;
- (bool)executeWithSlowStatementRadar:(id)arg1 sql:(id)arg2;
- (id)fetch:(id)arg1;
- (id)fetch:(id)arg1 args:(char *)arg2;
- (id)fetchObject:(id /* block */)arg1 sql:(id)arg2;
- (id)fetchObject:(id /* block */)arg1 sql:(id)arg2 args:(char *)arg3;
- (id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3;
- (id)fetchObjectOfClass:(Class)arg1 initializer:(SEL)arg2 sql:(id)arg3 args:(char *)arg4;
- (id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2;
- (id)fetchObjectOfClass:(Class)arg1 sql:(id)arg2 args:(char *)arg3;
- (id)fetchWithSlowStatementRadar:(id)arg1 objectOfClass:(Class)arg2 sql:(id)arg3;
- (id)fetchWithSlowStatementRadar:(id)arg1 objectWithConstructor:(id /* block */)arg2 sql:(id)arg3;
- (id)fetchWithSlowStatementRadar:(id)arg1 sql:(id)arg2;
- (void)flushToMakeEditsVisibleToIPCReaders;
- (void)flushWithCheckPoint:(bool)arg1 completionBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithLabel:(id)arg1 dbCorruptionHandler:(id /* block */)arg2;
- (bool)isReadonly;
- (bool)needsAutovacuum;
- (bool)openAtURL:(id)arg1 withFlags:(int)arg2 error:(id*)arg3;
- (bool)profilingEnabled;
- (void)setAssertionPersonaIdentifier:(id)arg1;
- (void)setProfilingEnabled:(bool)arg1;
- (void)setProfilingHook:(id /* block */)arg1;
- (long long)sizeInBytes;
- (void)usePacedBatchingOnTargetQueue:(id)arg1 withInterval:(double)arg2 changeCount:(int)arg3;
- (unsigned long long)vmStepsExecuted;

@end
