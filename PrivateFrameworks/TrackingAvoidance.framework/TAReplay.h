
@interface TAReplay : NSObject <OSActivityStreamDelegate, OSDeviceDelegate, OSLogPersistenceDelegate> {
    TAAnalyticsManager * _analyticsManager;
    NSURL * _inputPersistencePath;
    NSURL * _outputPath;
    OSLogPersistence * _persistence;
    NSObject<OS_dispatch_semaphore> * _persistenceWait;
    TATrackingAvoidanceService * _service;
    OSActivityStream * _stream;
    NSObject<OS_dispatch_semaphore> * _streamWait;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)activityStream:(id)arg1 deviceUDID:(id)arg2 deviceID:(id)arg3 status:(long long)arg4 error:(id)arg5;
- (bool)activityStream:(id)arg1 results:(id)arg2;
- (id)initWithLogArchive:(id)arg1 outputPath:(id)arg2 inputPersistencePath:(id)arg3 settings:(id)arg4;
- (bool)persistence:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)persistenceDidFinishReadingForStartDate:(id)arg1 endDate:(id)arg2;
- (void)replaySingleEventLogString:(id)arg1;
- (void)replayWithStartDate:(id)arg1 endDate:(id)arg2;
- (void)streamDidFail:(id)arg1 error:(id)arg2;
- (void)streamDidStart:(id)arg1;
- (void)streamDidStop:(id)arg1;

@end
