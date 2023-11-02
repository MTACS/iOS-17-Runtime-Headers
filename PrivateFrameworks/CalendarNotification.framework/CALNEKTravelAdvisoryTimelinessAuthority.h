
@interface CALNEKTravelAdvisoryTimelinessAuthority : NSObject <CALNTravelAdvisoryTimelinessAuthority> {
    EKTravelAdvisoryTimelinessAuthority * _travelAdvisoryTimelinessAuthority;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) EKTravelAdvisoryTimelinessAuthority *travelAdvisoryTimelinessAuthority;

- (void).cxx_destruct;
- (id)initWithTravelAdvisoryTimelinessAuthority:(id)arg1;
- (unsigned long long)periodForHypothesis:(id)arg1;
- (id)startOfLeaveNowPeriodForHypothesis:(id)arg1;
- (id)startOfRunningLatePeriodForHypothesis:(id)arg1;
- (id)travelAdvisoryTimelinessAuthority;

@end
