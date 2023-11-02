
@interface FCCCompletionOffTrackConfiguration : NSObject {
    NSArray * _allowedGoalTypes;
    NSArray * _coalescingRules;
    double  _goalBufferPercentage;
    NSString * _identifier;
    FCCPercentageOfDayRule * _percentageOfDayRule;
}

@property (nonatomic, readonly, copy) NSArray *allowedGoalTypes;
@property (nonatomic, readonly, copy) NSArray *coalescingRules;
@property (nonatomic, readonly) double goalBufferPercentage;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) FCCPercentageOfDayRule *percentageOfDayRule;

- (void).cxx_destruct;
- (id)allowedGoalTypes;
- (id)coalescingRules;
- (id)description;
- (double)goalBufferPercentage;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 goalBufferPercentage:(double)arg2 coalescingRules:(id)arg3 percentageOfDayRule:(id)arg4 allowedGoalTypes:(id)arg5;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithTransportData:(id)arg1;
- (id)percentageOfDayRule;
- (id)protobuf;
- (id)transportData;

@end
