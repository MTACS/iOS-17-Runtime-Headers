
@interface FCCGoalProgressContent : NSObject <FCCDataSerializable> {
    NSString * _eventIdentifier;
    double  _expectedGoalValue;
    long long  _goalTypeToHighlight;
    NSArray * _goalTypesToDisplay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *eventIdentifier;
@property (nonatomic, readonly) double expectedGoalValue;
@property (nonatomic, readonly) long long goalTypeToHighlight;
@property (nonatomic, readonly, copy) NSArray *goalTypesToDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)eventIdentifier;
- (double)expectedGoalValue;
- (long long)goalTypeToHighlight;
- (id)goalTypesToDisplay;
- (id)initWithEventIdentifier:(id)arg1 goalTypesToDisplay:(id)arg2 goalTypeToHighlight:(long long)arg3 expectedGoalValue:(double)arg4;
- (id)initWithTransportData:(id)arg1;
- (id)transportData;

@end
