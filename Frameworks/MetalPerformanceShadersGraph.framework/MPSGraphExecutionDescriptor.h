
@interface MPSGraphExecutionDescriptor : MPSGraphObject {
    NSMutableArray * _anePowerWaitEvents;
    bool  _breakUpMetalEncoders;
    bool  _briefProfilingOpNames;
    MPSGraphCompilationDescriptor * _compilationDescriptor;
    id /* block */  _completionHandler;
    bool  _enableCommitAndContinue;
    bool  _enableProfilingOpNames;
    bool  _generateRuntimeExecutionReport;
    id /* block */  _scheduledHandler;
    NSMutableArray * _signalEvents;
    NSMutableArray * _waitEvents;
    bool  _waitUntilCompleted;
}

@property bool breakUpMetalEncoders;
@property bool briefProfilingOpNames;
@property (copy) MPSGraphCompilationDescriptor *compilationDescriptor;
@property (copy) id /* block */ completionHandler;
@property bool enableCommitAndContinue;
@property bool enableProfilingOpNames;
@property bool generateRuntimeExecutionReport;
@property (copy) id /* block */ scheduledHandler;
@property bool waitUntilCompleted;

- (void).cxx_destruct;
- (bool)breakUpMetalEncoders;
- (bool)briefProfilingOpNames;
- (id)compilationDescriptor;
- (id /* block */)completionHandler;
- (bool)enableCommitAndContinue;
- (bool)enableProfilingOpNames;
- (bool)generateRuntimeExecutionReport;
- (id)init;
- (id /* block */)scheduledHandler;
- (void)setBreakUpMetalEncoders:(bool)arg1;
- (void)setBriefProfilingOpNames:(bool)arg1;
- (void)setCompilationDescriptor:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setEnableCommitAndContinue:(bool)arg1;
- (void)setEnableProfilingOpNames:(bool)arg1;
- (void)setGenerateRuntimeExecutionReport:(bool)arg1;
- (void)setScheduledHandler:(id /* block */)arg1;
- (void)setWaitUntilCompleted:(bool)arg1;
- (void)signalEvent:(id)arg1 atExecutionEvent:(unsigned long long)arg2 value:(unsigned long long)arg3;
- (void)waitForANEPrePowerUpEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)waitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (bool)waitUntilCompleted;

@end
