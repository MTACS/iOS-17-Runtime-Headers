
@interface SCLSchedulingParameters : NSObject <NSCopying, SCLSchedulingParameters> {
    unsigned long long  _activationSetting;
    NSCalendar * _calendar;
    NSDate * _evaluationDate;
    SCLScheduleSettings * _scheduleSettings;
    bool  _suppressed;
}

@property (nonatomic) unsigned long long activationSetting;
@property (nonatomic, copy) NSCalendar *calendar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *evaluationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) SCLScheduleSettings *scheduleSettings;
@property (readonly) Class superclass;
@property (getter=isSuppressed, nonatomic) bool suppressed;

- (void).cxx_destruct;
- (unsigned long long)activationSetting;
- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)evaluationDate;
- (bool)isSuppressed;
- (id)scheduleSettings;
- (void)setActivationSetting:(unsigned long long)arg1;
- (void)setCalendar:(id)arg1;
- (void)setEvaluationDate:(id)arg1;
- (void)setScheduleSettings:(id)arg1;
- (void)setSuppressed:(bool)arg1;

@end
