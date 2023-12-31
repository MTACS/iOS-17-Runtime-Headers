
@interface BWLivePhotoMovieAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    int  _clientIDType;
    int  _errorStatus;
    double  _fileCoordinatorToWriterMovingWindowLatencyAverageInMilliseconds;
    double  _fileCoordinatorToWriterMovingWindowLatencyMaximumInMilliseconds;
    double  _fileCoordinatorToWriterMovingWindowLatencyMinimumInMilliseconds;
    long long  _fileCoordinatorToWriterMovingWindowLatencyNumberOfSamples;
    double  _fileCoordinatorToWriterMovingWindowLatencyStandardDeviationInMilliseconds;
    bool  _hasStillImagePTS;
    bool  _longPressMovie;
    double  _movieDurationInSeconds;
    bool  _originalRecording;
    bool  _overlappingCapture;
    bool  _recordingSucceeded;
    int  _sessionStatus;
    double  _stagingNodeOverallAverageTimeBetweenVideoFramesInMilliseconds;
    double  _stagingNodeOverallMaximumTimeBetweenVideoFramesInMilliseconds;
    double  _stagingNodeOverallMinimumTimeBetweenVideoFramesInMilliseconds;
    long long  _stagingNodeOverallNumberOfVideoFramesReceived;
    double  _stagingNodeOverallStandardDeviationOfTimeBetweenVideoFramesInMilliseconds;
    double  _stagingNodeValveActiveAverageTimeBetweenVideoFramesInMilliseconds;
    double  _stagingNodeValveActiveMaximumTimeBetweenVideoFramesInMilliseconds;
    double  _stagingNodeValveActiveMinimumTimeBetweenVideoFramesInMilliseconds;
    long long  _stagingNodeValveActiveNumberOfVideoFramesReceived;
    double  _stagingNodeValveActiveStandardDeviationOfTimeBetweenVideoFramesInMilliseconds;
    double  _stillTimeOffsetInSeconds;
    double  _stillTimeOffsetToAudioPrerollStartInMilliseconds;
    double  _stillTimeOffsetToAudioPrerollStopInMilliseconds;
    double  _stillTimeOffsetToVideoPrerollStartInMilliseconds;
    double  _stillTimeOffsetToVideoPrerollStopInMilliseconds;
    NSDictionary * _transitionVitalityFeatures;
    double  _transitionVitalityScoreV1;
}

@property (nonatomic) int clientIDType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int errorStatus;
@property (nonatomic) double fileCoordinatorToWriterMovingWindowLatencyAverageInMilliseconds;
@property (nonatomic) double fileCoordinatorToWriterMovingWindowLatencyMaximumInMilliseconds;
@property (nonatomic) double fileCoordinatorToWriterMovingWindowLatencyMinimumInMilliseconds;
@property (nonatomic) long long fileCoordinatorToWriterMovingWindowLatencyNumberOfSamples;
@property (nonatomic) double fileCoordinatorToWriterMovingWindowLatencyStandardDeviationInMilliseconds;
@property (nonatomic) bool hasStillImagePTS;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool longPressMovie;
@property (nonatomic) double movieDurationInSeconds;
@property (nonatomic) bool originalRecording;
@property (nonatomic) bool overlappingCapture;
@property (nonatomic) bool recordingSucceeded;
@property (nonatomic) int sessionStatus;
@property (nonatomic) double stagingNodeOverallAverageTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stagingNodeOverallMaximumTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stagingNodeOverallMinimumTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) long long stagingNodeOverallNumberOfVideoFramesReceived;
@property (nonatomic) double stagingNodeOverallStandardDeviationOfTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stagingNodeValveActiveAverageTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stagingNodeValveActiveMaximumTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stagingNodeValveActiveMinimumTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) long long stagingNodeValveActiveNumberOfVideoFramesReceived;
@property (nonatomic) double stagingNodeValveActiveStandardDeviationOfTimeBetweenVideoFramesInMilliseconds;
@property (nonatomic) double stillTimeOffsetInSeconds;
@property (nonatomic) double stillTimeOffsetToAudioPrerollStartInMilliseconds;
@property (nonatomic) double stillTimeOffsetToAudioPrerollStopInMilliseconds;
@property (nonatomic) double stillTimeOffsetToVideoPrerollStartInMilliseconds;
@property (nonatomic) double stillTimeOffsetToVideoPrerollStopInMilliseconds;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *transitionVitalityFeatures;
@property (nonatomic) double transitionVitalityScoreV1;

- (int)clientIDType;
- (void)dealloc;
- (int)errorStatus;
- (id)eventDictionary;
- (id)eventName;
- (double)fileCoordinatorToWriterMovingWindowLatencyAverageInMilliseconds;
- (double)fileCoordinatorToWriterMovingWindowLatencyMaximumInMilliseconds;
- (double)fileCoordinatorToWriterMovingWindowLatencyMinimumInMilliseconds;
- (long long)fileCoordinatorToWriterMovingWindowLatencyNumberOfSamples;
- (double)fileCoordinatorToWriterMovingWindowLatencyStandardDeviationInMilliseconds;
- (bool)hasStillImagePTS;
- (id)init;
- (bool)longPressMovie;
- (double)movieDurationInSeconds;
- (bool)originalRecording;
- (bool)overlappingCapture;
- (bool)recordingSucceeded;
- (void)reset;
- (int)sessionStatus;
- (void)setClientIDType:(int)arg1;
- (void)setErrorStatus:(int)arg1;
- (void)setFileCoordinatorToWriterMovingWindowLatencyAverageInMilliseconds:(double)arg1;
- (void)setFileCoordinatorToWriterMovingWindowLatencyMaximumInMilliseconds:(double)arg1;
- (void)setFileCoordinatorToWriterMovingWindowLatencyMinimumInMilliseconds:(double)arg1;
- (void)setFileCoordinatorToWriterMovingWindowLatencyNumberOfSamples:(long long)arg1;
- (void)setFileCoordinatorToWriterMovingWindowLatencyStandardDeviationInMilliseconds:(double)arg1;
- (void)setHasStillImagePTS:(bool)arg1;
- (void)setLongPressMovie:(bool)arg1;
- (void)setMovieDurationInSeconds:(double)arg1;
- (void)setOriginalRecording:(bool)arg1;
- (void)setOverlappingCapture:(bool)arg1;
- (void)setRecordingSucceeded:(bool)arg1;
- (void)setSessionStatus:(int)arg1;
- (void)setStagingNodeOverallAverageTimeBetweenVideoFramesInMilliseconds:(double)arg1;
- (void)setStagingNodeOverallMaximumTimeBetweenVideoFramesInMilliseconds:(double)arg1;
- (void)setStagingNodeOverallMinimumTimeBetweenVideoFramesInMilliseconds:(double)arg1;
- (void)setStagingNodeOverallNumberOfVideoFramesReceived:(long long)arg1;
- (void)setStagingNodeOverallStandardDeviationOfTimeBetweenVideoFramesInMilliseconds:(double)arg1;
- (void)setStagingNodeValveActiveAverageTimeBetweenVideoFramesInMilliseconds:(double)arg1;
- (void)setStagingNodeValveActiveMaximumTimeBetweenVideoFramesInMilliseconds:(double)arg1;
- (void)setStagingNodeValveActiveMinimumTimeBetweenVideoFramesInMilliseconds:(double)arg1;
- (void)setStagingNodeValveActiveNumberOfVideoFramesReceived:(long long)arg1;
- (void)setStagingNodeValveActiveStandardDeviationOfTimeBetweenVideoFramesInMilliseconds:(double)arg1;
- (void)setStillTimeOffsetInSeconds:(double)arg1;
- (void)setStillTimeOffsetToAudioPrerollStartInMilliseconds:(double)arg1;
- (void)setStillTimeOffsetToAudioPrerollStopInMilliseconds:(double)arg1;
- (void)setStillTimeOffsetToVideoPrerollStartInMilliseconds:(double)arg1;
- (void)setStillTimeOffsetToVideoPrerollStopInMilliseconds:(double)arg1;
- (void)setTransitionVitalityFeatures:(id)arg1;
- (void)setTransitionVitalityScoreV1:(double)arg1;
- (double)stagingNodeOverallAverageTimeBetweenVideoFramesInMilliseconds;
- (double)stagingNodeOverallMaximumTimeBetweenVideoFramesInMilliseconds;
- (double)stagingNodeOverallMinimumTimeBetweenVideoFramesInMilliseconds;
- (long long)stagingNodeOverallNumberOfVideoFramesReceived;
- (double)stagingNodeOverallStandardDeviationOfTimeBetweenVideoFramesInMilliseconds;
- (double)stagingNodeValveActiveAverageTimeBetweenVideoFramesInMilliseconds;
- (double)stagingNodeValveActiveMaximumTimeBetweenVideoFramesInMilliseconds;
- (double)stagingNodeValveActiveMinimumTimeBetweenVideoFramesInMilliseconds;
- (long long)stagingNodeValveActiveNumberOfVideoFramesReceived;
- (double)stagingNodeValveActiveStandardDeviationOfTimeBetweenVideoFramesInMilliseconds;
- (double)stillTimeOffsetInSeconds;
- (double)stillTimeOffsetToAudioPrerollStartInMilliseconds;
- (double)stillTimeOffsetToAudioPrerollStopInMilliseconds;
- (double)stillTimeOffsetToVideoPrerollStartInMilliseconds;
- (double)stillTimeOffsetToVideoPrerollStopInMilliseconds;
- (id)transitionVitalityFeatures;
- (double)transitionVitalityScoreV1;

@end
