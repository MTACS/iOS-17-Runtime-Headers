
@interface SATimeRangeOfSamples : NSObject {
    unsigned long long  _endSampleIndex;
    SATimestamp * _endTime;
    unsigned long long  _startSampleIndex;
    SATimestamp * _startTime;
}

@property unsigned long long endSampleIndex;
@property (retain) SATimestamp *endTime;
@property unsigned long long startSampleIndex;
@property (retain) SATimestamp *startTime;

- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)endSampleIndex;
- (id)endTime;
- (id)initWithStartTime:(id)arg1 endTime:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4;
- (void)setEndSampleIndex:(unsigned long long)arg1;
- (void)setEndTime:(id)arg1;
- (void)setStartSampleIndex:(unsigned long long)arg1;
- (void)setStartTime:(id)arg1;
- (unsigned long long)startSampleIndex;
- (id)startTime;

@end
