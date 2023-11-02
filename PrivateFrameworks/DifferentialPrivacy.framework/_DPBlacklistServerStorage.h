
@interface _DPBlacklistServerStorage : NSObject <_DPMaintenance> {
    NSObject<OS_xpc_object> * _activity;
    NSString * _storePath;
}

@property (nonatomic) NSObject<OS_xpc_object> *activity;
@property (nonatomic, retain) NSDate *lastUpdateDate;
@property (nonatomic, retain) NSString *storePath;

- (void).cxx_destruct;
- (void)_attributeQueryOperation:(id)arg1;
- (id)_blacklistURLByKeyFrom:(id)arg1;
- (void)_executeQueryOperation:(id)arg1 onOperationQueue:(id)arg2 onCompletion:(id /* block */)arg3;
- (id)_predicateForFetchQuery;
- (id)_publicDatabaseForBlacklists;
- (id)_queryOperationFromCursor:(id)arg1;
- (void)_requestLatestBlacklists:(id /* block */)arg1;
- (id)activity;
- (id)init;
- (id)initWithCustomStorePath:(id)arg1;
- (id)lastUpdateDate;
- (bool)prepareRuntimeBlacklistFolder:(id*)arg1;
- (bool)requestLatestBlacklistsSynchronously:(id*)arg1 error:(id*)arg2 lastRecordModifiedAt:(id*)arg3;
- (id)saveBlacklistsToRuntimeFolder:(id)arg1;
- (void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2;
- (void)setActivity:(id)arg1;
- (void)setLastUpdateDate:(id)arg1;
- (void)setStorePath:(id)arg1;
- (id)storePath;
- (bool)updateRuntimeBlacklistsFromServer;

@end
