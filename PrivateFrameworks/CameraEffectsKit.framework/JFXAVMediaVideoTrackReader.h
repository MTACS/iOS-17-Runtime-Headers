
@interface JFXAVMediaVideoTrackReader : JFXAVMediaDataReader <JFXMediaVideoTrackReader> {
    JFXAVMediaVideoTrackReaderSample * _currentSample;
    JFXAVMediaVideoTrackReaderSample * _nextSample;
}

@property (nonatomic, retain) JFXAVMediaVideoTrackReaderSample *currentSample;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isScrubbing;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) JFXAVMediaVideoTrackReaderSample *nextSample;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } readableTimeRange;
@property (nonatomic, readonly) unsigned long long signPostID;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)JFX_preloadData;
- (void)JFX_updateCurrentSampleDurationIfNeeded;
- (id)createAssetReaderTrackOutput;
- (id)currentSample;
- (void)didUpdateReadingRange;
- (bool)hasRemainingAvailableData;
- (id)nextSample;
- (bool)readAheadToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)readAndDiscardRemainingAvailableData;
- (void)setCurrentSample:(id)arg1;
- (void)setNextSample:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTimeOfCurrentData;
- (id)videoSampleForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
