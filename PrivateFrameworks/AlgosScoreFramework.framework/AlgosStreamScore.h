
@interface AlgosStreamScore : NSObject {
    bool  _debug;
    bool  _enforceStreamEnd;
    bool  _music;
    double  logisticScale;
    void * streamData;
}

@property (nonatomic) bool debug;
@property (nonatomic) bool enforceStreamEnd;
@property (nonatomic) bool music;

+ (id)streamScore;

- (void)addRawStreamEvent:(int)arg1 start:(double)arg2 end:(double)arg3 weight:(double)arg4 quality:(double)arg5 params:(id)arg6;
- (void)addStreamEnd:(double)arg1;
- (void)addStreamFailure:(double)arg1 weight:(double)arg2;
- (void)addStreamPenalty:(double)arg1 amount:(double)arg2;
- (void)addStreamStall:(double)arg1 end:(double)arg2 quality:(double)arg3 weight:(double)arg4;
- (void)addStreamStall:(double)arg1 end:(double)arg2 quality:(double)arg3 weight:(double)arg4 params:(id)arg5;
- (void)addStreamStart:(double)arg1 play:(double)arg2;
- (void)addStreamStartupStall:(double)arg1 end:(double)arg2 quality:(double)arg3 weight:(double)arg4;
- (void)addStreamTierSwitch:(double)arg1 end:(double)arg2 quality:(double)arg3 weight:(double)arg4;
- (void)clearStreamRows;
- (void)dealloc;
- (bool)debug;
- (bool)enforceStreamEnd;
- (double)findTotalTime:(id)arg1 debug:(bool)arg2;
- (id)init;
- (bool)music;
- (bool)restoreEventsFromFile:(id)arg1 clear:(bool)arg2;
- (bool)saveEventsToFile:(id)arg1;
- (id)scoreStreaming:(id)arg1;
- (void)setDebug:(bool)arg1;
- (void)setEnforceStreamEnd:(bool)arg1;
- (void)setMusic:(bool)arg1;

@end
