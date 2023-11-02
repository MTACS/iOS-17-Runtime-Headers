
@interface JFXAVMediaDataReader : NSObject <JFXMediaDataReader> {
    AVAsset * _asset;
    AVAssetReader * _assetReader;
    AVAssetReaderTrackOutput * _assetReaderTrackOutput;
    AVAssetTrack * _assetTrack;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _currentReadingRange;
    NSError * _error;
    bool  _isScrubbing;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _minimumFrameDuration;
    NSString * _name;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _readableTimeRange;
    unsigned long long  _signPostID;
    long long  _status;
}

@property (nonatomic, retain) AVAsset *asset;
@property (nonatomic, retain) AVAssetReader *assetReader;
@property (nonatomic, retain) AVAssetReaderTrackOutput *assetReaderTrackOutput;
@property (nonatomic, retain) AVAssetTrack *assetTrack;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } currentReadingRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isScrubbing;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minimumFrameDuration;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } readableTimeRange;
@property (nonatomic) unsigned long long signPostID;
@property (nonatomic) long long status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })JFX_allMediaTimeRange;
- (void)JFX_configureAssetReaderToReadFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)JFX_configureAssetReaderTrackOutput;
- (void)JFX_releaseReadersForReset;
- (bool)JFX_resetReaderFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)JFX_resetReaderIfNecessaryToSeekFromStartTimeOfCurrentData:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)JFX_resetReadingRangeWhenScrubbingToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)JFX_shouldResetReaderWhenSeekingFromStartTimeOfCurrentData:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)asset;
- (id)assetReader;
- (id)assetReaderTrackOutput;
- (id)assetTrack;
- (bool)beginReading;
- (bool)beginReadingAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)beginReadingAtTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)cancelReadingForReaderReset;
- (id)createAssetReader;
- (id)createAssetReaderTrackOutput;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })currentReadingRange;
- (void)didFailWithError:(id)arg1;
- (void)didUpdateReadingRange;
- (id)error;
- (bool)hasRemainingAvailableData;
- (id)initWithAVAssetTrack:(id)arg1 withName:(id)arg2;
- (bool)isScrubbing;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumFrameDuration;
- (id)name;
- (bool)prepareAssetReaderForReading;
- (bool)readAheadToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)readAndDiscardRemainingAvailableData;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })readableTimeRange;
- (bool)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)seekingAheadIsExpensiveFromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setAsset:(id)arg1;
- (void)setAssetReader:(id)arg1;
- (void)setAssetReaderTrackOutput:(id)arg1;
- (void)setAssetTrack:(id)arg1;
- (void)setCurrentReadingRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setError:(id)arg1;
- (void)setIsScrubbing:(bool)arg1;
- (void)setReadableTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setSignPostID:(unsigned long long)arg1;
- (void)setStatus:(long long)arg1;
- (unsigned long long)signPostID;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTimeOfCurrentData;
- (long long)status;

@end
