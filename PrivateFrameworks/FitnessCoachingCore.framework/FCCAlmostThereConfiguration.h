
@interface FCCAlmostThereConfiguration : NSObject {
    NSArray * _coalescingRules;
    double  _goalBufferPercentage;
    long long  _goalType;
    NSString * _identifier;
    double  _minimumPercentageComplete;
    FCCTimeOfDayRule * _timeOfDayRule;
}

@property (nonatomic, readonly, copy) NSArray *coalescingRules;
@property (nonatomic, readonly) double goalBufferPercentage;
@property (nonatomic, readonly) long long goalType;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) double minimumPercentageComplete;
@property (nonatomic, readonly) FCCTimeOfDayRule *timeOfDayRule;

- (void).cxx_destruct;
- (id)coalescingRules;
- (id)description;
- (double)goalBufferPercentage;
- (long long)goalType;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 minimumPercentageComplete:(double)arg2 goalBufferPercentage:(double)arg3 coalescingRules:(id)arg4 timeOfDayRule:(id)arg5 goalType:(long long)arg6;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithTransportData:(id)arg1;
- (double)minimumPercentageComplete;
- (id)protobuf;
- (id)timeOfDayRule;
- (id)transportData;

@end
