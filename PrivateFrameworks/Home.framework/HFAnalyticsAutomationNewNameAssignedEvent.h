
@interface HFAnalyticsAutomationNewNameAssignedEvent : HFAnalyticsEvent {
    NSNumber * _didNamingSucceed;
    NSNumber * _errorType;
    NSNumber * _modifiesExistingTrigger;
    NSNumber * _namingType;
}

@property (nonatomic, retain) NSNumber *didNamingSucceed;
@property (nonatomic, retain) NSNumber *errorType;
@property (nonatomic, retain) NSNumber *modifiesExistingTrigger;
@property (nonatomic, retain) NSNumber *namingType;

- (void).cxx_destruct;
- (id)didNamingSucceed;
- (id)errorType;
- (id)initWithData:(id)arg1;
- (id)modifiesExistingTrigger;
- (id)namingType;
- (id)payload;
- (void)setDidNamingSucceed:(id)arg1;
- (void)setErrorType:(id)arg1;
- (void)setModifiesExistingTrigger:(id)arg1;
- (void)setNamingType:(id)arg1;

@end
