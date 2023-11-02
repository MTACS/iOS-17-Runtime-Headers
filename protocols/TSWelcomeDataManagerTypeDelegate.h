
@protocol TSWelcomeDataManagerTypeDelegate

@required

- (void)dataManager:(id <TSWelcomeDataManagerType>)arg1 error:(long long)arg2;
- (void)dataManager:(id <TSWelcomeDataManagerType>)arg1 userType:(long long)arg2;
- (void)dataManagerFeedPrepared:(id <TSWelcomeDataManagerType>)arg1;

@end
