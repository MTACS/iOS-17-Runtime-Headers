
@interface MOVStreamTimestamps : NSObject {
    AVAssetTrack * _assetTrack;
    NSString * _name;
    bool  _shouldAppendEndOfStreamTimestamp;
    bool  _shouldStartTimestampsAtZero;
    SampleTimeList * _timeList;
}

@property (nonatomic, retain) AVAssetTrack *assetTrack;
@property (nonatomic, readonly) NSArray *cmtimes;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool shouldAppendEndOfStreamTimestamp;
@property (nonatomic) bool shouldStartTimestampsAtZero;
@property (nonatomic, retain) SampleTimeList *timeList;
@property (nonatomic, readonly) NSArray *times;

- (void).cxx_destruct;
- (id)assetTrack;
- (void)clearCachedProperties;
- (id)cmtimes;
- (unsigned long long)count;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })endTimeForAssetTrack:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })frameRangeFrom:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 to:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)init;
- (id)initWithAssetTrack:(id)arg1;
- (id)name;
- (id)sampleTimelineForAssetTrack:(id)arg1;
- (id)sampleTimelineForAssetTrack:(id)arg1 shouldStartTimestampsAtZero:(bool)arg2;
- (void)setAssetTrack:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShouldAppendEndOfStreamTimestamp:(bool)arg1;
- (void)setShouldStartTimestampsAtZero:(bool)arg1;
- (void)setTimeList:(id)arg1;
- (bool)shouldAppendEndOfStreamTimestamp;
- (bool)shouldStartTimestampsAtZero;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeAtIndex:(unsigned long long)arg1;
- (id)timeList;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)times;

@end
