
@interface ATXModeScoringSessionRange : NSObject {
    NSDate * _endDate;
    ATXModeEntityStore * _modeEntityStore;
    NSArray * _sessions;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) ATXModeEntityStore *modeEntityStore;
@property (nonatomic, readonly) NSArray *sessions;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (bool)_areTimesClose:(id)arg1 secondTime:(id)arg2;
- (bool)_shouldCoaleseNextSession:(id)arg1 currentBuffer:(id)arg2;
- (void)attachAppLaunches;
- (void)coalesceSessions;
- (id)endDate;
- (void)filterSessions;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 modeEntityStore:(id)arg3;
- (id)modeEntityStore;
- (void)populateInitialSessionsFromScreenTransitions;
- (id)sessions;
- (id)startDate;

@end
