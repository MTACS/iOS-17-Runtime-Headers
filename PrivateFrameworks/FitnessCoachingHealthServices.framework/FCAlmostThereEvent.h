
@interface FCAlmostThereEvent : NSObject <FCGoalProgressEvent> {
    FCCAlmostThereConfiguration * _configuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_userWillCompleteGoalByEndOfDay:(long long)arg1 model:(id)arg2;
- (id)eventIdentifier;
- (id)goalProgressContentForModel:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (double)minimumDayDuration;
- (id)nextFireDateWithModel:(id)arg1;
- (bool)shouldFireWithTypicalDayModel:(id)arg1 evaluationDelegate:(id)arg2;

@end
