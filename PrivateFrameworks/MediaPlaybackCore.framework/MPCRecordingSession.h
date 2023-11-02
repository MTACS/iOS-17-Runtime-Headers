
@interface MPCRecordingSession : NSObject <ICEnvironmentMonitorObserver, MPCSamplesRecorderDelegate> {
    MPCSamplesRecorder * _currentRecorder;
    int  _currentThermalLevel;
    MPCFirstFailureDetector * _firstFailureDetector;
    NSString * _modelID;
    NSString * _sessionID;
    bool  _shouldRecordSamples;
    MPCStatisticsReporter * _statisticsReporter;
    ICEnvironmentMonitor * _thermalMonitor;
}

@property (nonatomic, readonly) MPCSamplesRecorder *currentRecorder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MPCFirstFailureDetector *firstFailureDetector;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *modelID;
@property (nonatomic, readonly, copy) NSString *sessionID;
@property (nonatomic, readonly) MPCStatisticsReporter *statisticsReporter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ICEnvironmentMonitor *thermalMonitor;

- (void).cxx_destruct;
- (id)currentRecorder;
- (void)dealloc;
- (void)environmentMonitorDidChangeThermalLevel:(id)arg1;
- (id)firstFailureDetector;
- (void)flush;
- (id)initWithModelID:(id)arg1 samplingTime:(double)arg2 renderingLimit:(double)arg3 shouldRecordSamples:(bool)arg4;
- (id)modelID;
- (void)recordSample:(id)arg1;
- (void)samplesRecorderHasNewSamples:(id)arg1;
- (void)save;
- (id)sessionID;
- (id)statisticsReporter;
- (id)thermalMonitor;

@end
