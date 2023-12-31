
@interface PUPhotoKitMediaProviderDownloadSimulation : NSObject {
    double  __simulatedProgress;
    double  __updateInterval;
    double  _downloadDuration;
    bool  _shouldSimulateFailure;
}

@property (setter=_setSimulatedProgress:, nonatomic) double _simulatedProgress;
@property (nonatomic, readonly) double _updateInterval;
@property (nonatomic) double downloadDuration;
@property (nonatomic) bool shouldSimulateFailure;

- (void)_setSimulatedProgress:(double)arg1;
- (double)_simulatedProgress;
- (double)_updateInterval;
- (void)_updateSimulatedDownload;
- (void)beginSimulation;
- (double)downloadDuration;
- (void)endSimulationWithError:(id)arg1;
- (id)init;
- (void)setDownloadDuration:(double)arg1;
- (void)setShouldSimulateFailure:(bool)arg1;
- (bool)shouldSimulateFailure;
- (void)updateSimulationWithProgress:(double)arg1;

@end
