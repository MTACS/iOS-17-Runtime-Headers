
@interface TSBackgroundTasksBackgroundFetchScheduler : NSObject <TSBackgroundFetchScheduler> {
    void application;
    void minimumBackgroundFetchInterval;
    void taskIdentifier;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithApplication:(id)arg1 taskIdentifier:(id)arg2;
- (void)prepareForUseWithApplicationDelegate:(id)arg1;
- (void)setMinimumBackgroundFetchInterval:(double)arg1;

@end
