
@interface RERecentActionManager : RESingleton {
    NSMutableDictionary * _dateValues;
    NSLock * _lock;
    REPredictedActionServer * _server;
}

- (void).cxx_destruct;
- (id)_dataForAction:(id)arg1;
- (void)_handleRecentActionNotification:(id)arg1;
- (id)_init;
- (void)_storePerformAction:(id)arg1 date:(id)arg2 remote:(bool)arg3;
- (unsigned long long)actionNumberOfTimesPeformedToday:(id)arg1;
- (bool)actionWasPerformedLocally:(id)arg1;
- (void)dealloc;
- (void)didPerformAction:(id)arg1;
- (id)lastPerformedDateForAction:(id)arg1;

@end
