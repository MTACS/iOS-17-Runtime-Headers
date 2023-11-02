
@interface TSApplicationBackgroundFetchScheduler : NSObject <TSBackgroundFetchScheduler> {
    void application;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithApplication:(id)arg1;
- (void)prepareForUseWithApplicationDelegate:(id)arg1;
- (void)setMinimumBackgroundFetchInterval:(double)arg1;

@end
