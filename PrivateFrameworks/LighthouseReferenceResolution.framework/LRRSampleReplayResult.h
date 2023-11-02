
@interface LRRSampleReplayResult : NSObject {
    NSDictionary * _comparatorResults;
    long long  _errorCode;
    bool  _evaluated;
    unsigned int  _repetitionCount;
    NSString * _replayedRequestId;
    double  _requestEndTs;
    double  _requestStartTs;
    NSString * _sourceRequestId;
    NSString * _sourceTrpId;
    NSString * _strRequestEnd;
    NSString * _strRequestStart;
    double  _timeRequestInterval;
    bool  _userWasHabitualInSameWeek;
}

@property (nonatomic, copy) NSDictionary *comparatorResults;
@property (nonatomic) long long errorCode;
@property (nonatomic) bool evaluated;
@property (nonatomic) unsigned int repetitionCount;
@property (nonatomic, copy) NSString *replayedRequestId;
@property (nonatomic) double requestEndTs;
@property (nonatomic) double requestStartTs;
@property (nonatomic, copy) NSString *sourceRequestId;
@property (nonatomic, copy) NSString *sourceTrpId;
@property (nonatomic, copy) NSString *strRequestEnd;
@property (nonatomic, copy) NSString *strRequestStart;
@property (nonatomic) double timeRequestInterval;
@property (nonatomic) bool userWasHabitualInSameWeek;

- (void).cxx_destruct;
- (id)comparatorResults;
- (long long)errorCode;
- (bool)evaluated;
- (id)init;
- (unsigned int)repetitionCount;
- (id)replayedRequestId;
- (double)requestEndTs;
- (double)requestStartTs;
- (void)setComparatorResults:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setEvaluated:(bool)arg1;
- (void)setRepetitionCount:(unsigned int)arg1;
- (void)setReplayedRequestId:(id)arg1;
- (void)setRequestEndTs:(double)arg1;
- (void)setRequestStartTs:(double)arg1;
- (void)setSourceRequestId:(id)arg1;
- (void)setSourceTrpId:(id)arg1;
- (void)setStrRequestEnd:(id)arg1;
- (void)setStrRequestStart:(id)arg1;
- (void)setTimeRequestInterval:(double)arg1;
- (void)setUserWasHabitualInSameWeek:(bool)arg1;
- (id)sourceRequestId;
- (id)sourceTrpId;
- (id)strRequestEnd;
- (id)strRequestStart;
- (double)timeRequestInterval;
- (bool)userWasHabitualInSameWeek;

@end
