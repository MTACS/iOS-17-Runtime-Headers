
@interface IRAnalyticsManager : NSObject {
    IRBackgroundActivitiesManager * _backgroundActivitiesManager;
}

@property (nonatomic) IRBackgroundActivitiesManager *backgroundActivitiesManager;

+ (void)_AnalyticsSendEventLazyForEventIdentifier:(id)arg1 clientIdentifier:(id)arg2 analytics:(id)arg3;
+ (bool)_isClientAllowedCA:(id)arg1;
+ (void)logUiEvent:(id)arg1 withService:(id)arg2 forCandidateIdentifier:(id)arg3 systemState:(id)arg4 candidatesContainer:(id)arg5 miloPrediction:(id)arg6 inspections:(id)arg7 statisticsManager:(id)arg8;

- (void).cxx_destruct;
- (void)_handleCoreAnalyticsXPCActivity;
- (id)backgroundActivitiesManager;
- (id)initWithBackgroundActivitiesManager:(id)arg1;
- (void)setBackgroundActivitiesManager:(id)arg1;

@end
