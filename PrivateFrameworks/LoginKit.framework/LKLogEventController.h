
@interface LKLogEventController : NSObject {
    NSObject<OS_dispatch_semaphore> * _dynamicdsema;
    NSDate * _logEnumarationEndTime;
    id /* block */  _logEventHandler;
    NSMutableDictionary * _mutableKeychainItemsAddedByActivityID;
    bool  _streamingLogs;
    LKSwitchOperation * _switchOperation;
    NSMutableArray * _switchOperationsMutableArray;
}

@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *dynamicdsema;
@property (nonatomic, retain) NSDate *logEnumarationEndTime;
@property (nonatomic, copy) id /* block */ logEventHandler;
@property (nonatomic, retain) NSMutableDictionary *mutableKeychainItemsAddedByActivityID;
@property (nonatomic) bool streamingLogs;
@property (nonatomic, retain) LKSwitchOperation *switchOperation;
@property (nonatomic, retain) NSMutableArray *switchOperationsMutableArray;

+ (id)loginDetailsPredicate;

- (void).cxx_destruct;
- (void)_handleKeychainItemEventFromLogEvent:(id)arg1;
- (bool)_isKeychainLog:(id)arg1;
- (bool)_needToParseSecurityLogs;
- (void)_parseBuddLog:(id)arg1;
- (void)_parseKeychainLog:(id)arg1;
- (void)_parseSpringBoardLog:(id)arg1;
- (void)_parseUserManagementFrameworkLog:(id)arg1;
- (id)dynamicdsema;
- (void)enumurateLogEventsSynchronouslyFromDate:(id)arg1 predicate:(id)arg2 logEventHandler:(id /* block */)arg3;
- (void)enumuratePersistentLogsSynchronouslyFromDate:(id)arg1 logArchivePath:(id)arg2 predicate:(id)arg3 logEventHandler:(id /* block */)arg4;
- (id)init;
- (id)logEnumarationEndTime;
- (id /* block */)logEventHandler;
- (id)loginDetailsWithStartDate:(id)arg1 logArchivePath:(id)arg2;
- (id)mutableKeychainItemsAddedByActivityID;
- (void)setDynamicdsema:(id)arg1;
- (void)setLogEnumarationEndTime:(id)arg1;
- (void)setLogEventHandler:(id /* block */)arg1;
- (void)setMutableKeychainItemsAddedByActivityID:(id)arg1;
- (void)setStreamingLogs:(bool)arg1;
- (void)setSwitchOperation:(id)arg1;
- (void)setSwitchOperationsMutableArray:(id)arg1;
- (bool)streamingLogs;
- (id)switchOperation;
- (id)switchOperationsMutableArray;

@end
