
@interface NewsUI2.NewsActivityManager : NSObject <TSNewsActivityManagerType> {
    void newsUserActivityManager;
}

- (void).cxx_destruct;
- (void)clearAllSavedUserActivities;
- (void)deregisterActivityWithData:(id)arg1;
- (id)init;
- (void)registerCurrentActivityWithData:(id)arg1;

@end
