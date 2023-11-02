
@interface MPSGraphExecutableExecutionDescriptor : MPSGraphObject <NSCopying> {
    NSMutableArray * _anePowerWaitEvents;
    bool  _breakUpMetalEncoders;
    bool  _briefProfilingOpNames;
    id /* block */  _completionGraphHandler;
    id /* block */  _completionHandler;
    bool  _enableCommitAndContinue;
    bool  _enableProfilingOpNames;
    bool  _generateRuntimeExecutionReport;
    id /* block */  _scheduledGraphHandler;
    id /* block */  _scheduledHandler;
    NSMutableArray * _signalEvents;
    NSMutableArray * _waitEvents;
    bool  _waitUntilCompleted;
}

@property bool breakUpMetalEncoders;
@property bool briefProfilingOpNames;
@property (copy) id /* block */ completionGraphHandler;
@property (copy) id /* block */ completionHandler;
@property bool enableCommitAndContinue;
@property bool enableProfilingOpNames;
@property bool generateRuntimeExecutionReport;
@property (copy) id /* block */ scheduledGraphHandler;
@property (copy) id /* block */ scheduledHandler;
@property bool waitUntilCompleted;

- (void).cxx_destruct;
- (bool)breakUpMetalEncoders;
- (bool)briefProfilingOpNames;
- (id /* block */)completionGraphHandler;
- (id /* block */)completionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enableCommitAndContinue;
- (bool)enableProfilingOpNames;
- (bool)generateRuntimeExecutionReport;
- (id)init;
- (id)initWithGraphExecutionDescriptor:(id)arg1;
- (id /* block */)scheduledGraphHandler;
- (id /* block */)scheduledHandler;
- (void)setBreakUpMetalEncoders:(bool)arg1;
- (void)setBriefProfilingOpNames:(bool)arg1;
- (void)setCompletionGraphHandler:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setEnableCommitAndContinue:(bool)arg1;
- (void)setEnableProfilingOpNames:(bool)arg1;
- (void)setGenerateRuntimeExecutionReport:(bool)arg1;
- (void)setScheduledGraphHandler:(id /* block */)arg1;
- (void)setScheduledHandler:(id /* block */)arg1;
- (void)setWaitUntilCompleted:(bool)arg1;
- (void)signalEvent:(id)arg1 atExecutionEvent:(unsigned long long)arg2 value:(unsigned long long)arg3;
- (void)waitForANEPrePowerUpEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)waitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (bool)waitUntilCompleted;

@end
