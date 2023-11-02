
@interface WFAutomationTriggerDataSource : NSObject <HMHomeDelegate, WFDatabaseResultObserver, WFHomeManagerEventObserver> {
    WFDatabase * _database;
    <WFAutomationTriggerDataSourceDelegate> * _delegate;
    WFHomeManager * _homeManager;
    WFDatabaseResult * _personalAutomationsDatabaseResult;
}

@property (nonatomic, readonly) WFDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFAutomationTriggerDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFHomeManager *homeManager;
@property (nonatomic, readonly) WFDatabaseResult *personalAutomationsDatabaseResult;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allConfiguredTriggers;
- (id)allHomeTriggers;
- (id)database;
- (void)databaseResultDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)home:(id)arg1 didAddTrigger:(id)arg2;
- (void)home:(id)arg1 didRemoveTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateTrigger:(id)arg2;
- (void)homeDidUpdateName:(id)arg1;
- (id)homeManager;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)initWithDatabase:(id)arg1;
- (id)personalAutomationsDatabaseResult;
- (void)setDelegate:(id)arg1;
- (void)setHomeManager:(id)arg1;

@end
