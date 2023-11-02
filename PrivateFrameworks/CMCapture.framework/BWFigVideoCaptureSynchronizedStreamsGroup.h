
@interface BWFigVideoCaptureSynchronizedStreamsGroup : NSObject {
    NSArray * _activePortTypes;
    NSArray * _activeStreams;
    bool  _atomicMasterSlaveReconfigurationSupported;
    NSDictionary * _baseZoomFactorsByPortType;
    BWFigVideoCaptureStream * _cameraControlsStatisticsMasterStream;
    NSDictionary * _cameraPoseMatricesByPortType;
    NSDictionary * _cameraViewMatricesByPortType;
    NSDictionary * _clientBaseZoomFactorsByPortType;
    BWFigVideoCaptureStream * _currentMasterStream;
    NSDictionary * _currentSlaveConfigurationsByPortType;
    bool  _masterConfigurationSupported;
    int  _maximumNumberOfEnabledSlaveTimeMachines;
    int  _maximumNumberOfSlaveStreamsWithFrameProcessingEnabled;
    int  _maximumNumberOfSlaveStreamsWithoutFrameSkipping;
    bool  _readOnly;
    bool  _statsMasterHasBeenSet;
    BWFigCaptureSynchronizedStreamsGroup * _synchronizedStreamsGroup;
}

@property (nonatomic, readonly) NSArray *activePortTypes;
@property (nonatomic, copy) NSDictionary *baseZoomFactorsByPortType;
@property (nonatomic, readonly) BWFigVideoCaptureStream *cameraControlsStatisticsMasterStream;
@property (nonatomic, readonly) NSDictionary *clientBaseZoomFactorsByPortType;
@property (nonatomic, readonly) bool maximumNumberOfSlaveStreamsWithFrameProcessingEnabledSupported;
@property (nonatomic, readonly) bool maximumNumberOfSlaveStreamsWithoutFrameSkippingSupported;
@property (nonatomic, readonly) bool minimumMasterToSlaveFrameRateRatioSupported;
@property (nonatomic, readonly) BWFigCaptureSynchronizedStreamsGroup *syncGroup;

+ (void)initialize;

- (id)activePortTypes;
- (id)baseZoomFactorsByPortType;
- (id)cameraControlsStatisticsMasterStream;
- (id)cameraPoseMatrixForPortType:(id)arg1;
- (id)cameraViewMatrixForPortType:(id)arg1;
- (id)clientBaseZoomFactorsByPortType;
- (void)dealloc;
- (id)initWithSynchronizedStreamsGroup:(id)arg1 activeStreams:(id)arg2 readOnly:(bool)arg3 baseZoomFactorOverrides:(id)arg4 clientBaseZoomFactorsByPortType:(id)arg5 error:(int*)arg6;
- (bool)maximumNumberOfSlaveStreamsWithFrameProcessingEnabledSupported;
- (bool)maximumNumberOfSlaveStreamsWithoutFrameSkippingSupported;
- (unsigned int)minimumMasterToSlaveFrameRateRatio;
- (bool)minimumMasterToSlaveFrameRateRatioSupported;
- (void)setBaseZoomFactorsByPortType:(id)arg1;
- (int)setCameraControlsStatisticsMasterStream:(id)arg1;
- (int)setMasterStream:(id)arg1 allStreams:(id)arg2;
- (void)setMaximumNumberOfEnabledSlaveTimeMachines:(int)arg1;
- (void)setMaximumNumberOfSlaveStreamsWithFrameProcessingEnabled:(int)arg1;
- (void)setMaximumNumberOfSlaveStreamsWithoutFrameSkipping:(int)arg1;
- (void)setMinimumMasterToSlaveFrameRateRatio:(unsigned int)arg1;
- (id)syncGroup;

@end
