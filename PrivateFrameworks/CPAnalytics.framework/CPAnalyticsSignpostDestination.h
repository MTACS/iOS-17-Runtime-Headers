
@interface CPAnalyticsSignpostDestination : NSObject <CPAnalyticsDestination> {
    CPAnalytics * _cpAnalyticsInstance;
    NSMutableIndexSet * _startedSignpostIDs;
}

@property (nonatomic) CPAnalytics *cpAnalyticsInstance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableIndexSet *startedSignpostIDs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkSignpostsEndForEvent:(id)arg1;
- (void)_sendCPAnalyticsEvent:(id)arg1 withPayload:(id)arg2 withDuration:(double)arg3;
- (void)_trackSignpostsStartForEvent:(id)arg1;
- (id)cpAnalyticsInstance;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (void)processEvent:(id)arg1;
- (void)setCpAnalyticsInstance:(id)arg1;
- (id)startedSignpostIDs;
- (void)updateWithConfig:(id)arg1;

@end
