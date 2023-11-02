
@interface CPAnalyticsLogDestination : NSObject <CPAnalyticsDestination> {
    NSObject<OS_os_log> * _log;
    NSArray * _logEventMatchers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) NSArray *logEventMatchers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_descriptionComponentsForEvent:(id)arg1 forProperties:(id)arg2;
- (id)_logEventMatchersInConfiguration:(id)arg1;
- (id)init;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (id)log;
- (void)logEvent:(id)arg1 withLabel:(id)arg2 shouldLogEventName:(bool)arg3 propertiesToLog:(id)arg4 publicPropertiesToLog:(id)arg5;
- (id)logEventMatchers;
- (void)processEvent:(id)arg1;
- (void)updateWithConfig:(id)arg1;

@end
