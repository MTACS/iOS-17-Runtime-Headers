
@interface FCCAtypicalDayConfiguration : NSObject {
    NSArray * _allowedGoalTypes;
    NSString * _identifier;
    double  _minimumAheadPercentage;
    double  _minimumBehindPercentage;
    FCCPercentageOfDayRule * _percentageOfDayRule;
}

@property (nonatomic, readonly, copy) NSArray *allowedGoalTypes;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) double minimumAheadPercentage;
@property (nonatomic, readonly) double minimumBehindPercentage;
@property (nonatomic, readonly) FCCPercentageOfDayRule *percentageOfDayRule;

- (void).cxx_destruct;
- (id)allowedGoalTypes;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 minimumAheadPercentage:(double)arg2 minimumBehindPercentage:(double)arg3 percentageOfDayRule:(id)arg4 allowedGoalTypes:(id)arg5;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithTransportData:(id)arg1;
- (double)minimumAheadPercentage;
- (double)minimumBehindPercentage;
- (id)percentageOfDayRule;
- (id)protobuf;
- (id)transportData;

@end
