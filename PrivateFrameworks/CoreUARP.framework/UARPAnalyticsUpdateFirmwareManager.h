
@interface UARPAnalyticsUpdateFirmwareManager : NSObject {
    UARPController * _controller;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_source> * _purgeTimer;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _stateArray;
}

- (void).cxx_destruct;
- (void)configurePurgeTimer;
- (void)dealloc;
- (id)description;
- (id)initWithController:(id)arg1 queue:(id)arg2;
- (void)purgeStaleUpdateStateRecords;
- (void)setAccessoryIDUnreachable:(id)arg1;
- (void)stagingCompleteForAccessoryID:(id)arg1 assetID:(id)arg2 status:(unsigned long long)arg3;
- (void)stagingStartedForAccessoryID:(id)arg1 assetID:(id)arg2 userIntent:(bool)arg3;
- (void)updateComplete:(id)arg1;
- (id)updateStateForAccessoryID:(id)arg1 assetID:(id)arg2;
- (id)updateStatesForAccessoryID:(id)arg1;

@end
