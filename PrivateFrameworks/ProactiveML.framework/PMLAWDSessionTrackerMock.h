
@interface PMLAWDSessionTrackerMock : PMLAWDSessionTracker {
    NSMutableArray * _internalTrackedSessions;
    NSArray * _trackedSessions;
}

@property (nonatomic, readonly) NSArray *trackedSessions;

- (void).cxx_destruct;
- (void)clearTrackedSessions;
- (id)initWithModel:(id)arg1;
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;
- (id)trackedSessions;

@end
