
@interface PHAActivityLog : NSObject {
    double  _absoluteEndTime;
    double  _absoluteStartTime;
    double  _duration;
    unsigned long long  _graphRequestInterruptionCount;
    NSDate * _startDate;
    unsigned long long  _status;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) unsigned long long status;

- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (id)init;
- (void)markProcessingInterruptedByGraphRequest;
- (void)markProcessingStopped:(unsigned long long)arg1;
- (id)startDate;
- (unsigned long long)status;

@end
