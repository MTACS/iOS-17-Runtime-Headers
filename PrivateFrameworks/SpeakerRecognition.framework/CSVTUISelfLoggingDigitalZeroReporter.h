
@interface CSVTUISelfLoggingDigitalZeroReporter : NSObject <CSDigitalZeroReporting> {
    bool  _isMaxNumContinuousZerosOverThreshold;
    int  _maxNumAllowedContinuousZeros;
    int  _maxNumContinuousZeros;
    int  _pageNumber;
    NSString * _phId;
    NSUUID * _siriSetupID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)digitalZeroDetected;
- (id)initWithSiriSetupID:(id)arg1 PageNumber:(int)arg2 withPhId:(id)arg3;
- (void)logDigitalZeroDetectionComplete;
- (void)reportDigitalZerosWithAudioZeroRun:(float)arg1;

@end
