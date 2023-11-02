
@interface SAReplay : NSObject <OSActivityStreamDelegate, OSDeviceDelegate, OSLogPersistenceDelegate> {
    SAAnalytics * _analytics;
    NSMutableDictionary * _eventMessages;
    NSMutableArray * _eventOrder;
    NSURL * _inputPersistencePath;
    NSURL * _outputPath;
    OSLogPersistence * _persistence;
    NSObject<OS_dispatch_semaphore> * _persistenceWait;
    SAService * _service;
    OSActivityStream * _stream;
    NSObject<OS_dispatch_semaphore> * _streamWait;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *eventMessages;
@property (nonatomic, retain) NSMutableArray *eventOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)activityStream:(id)arg1 deviceUDID:(id)arg2 deviceID:(id)arg3 status:(long long)arg4 error:(id)arg5;
- (bool)activityStream:(id)arg1 results:(id)arg2;
- (id)eventMessages;
- (id)eventOrder;
- (id)initWithLogArchive:(id)arg1 outputPath:(id)arg2 inputPersistencePath:(id)arg3;
- (bool)persistence:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)persistenceDidFinishReadingForStartDate:(id)arg1 endDate:(id)arg2;
- (void)replaySingleEventLogString:(id)arg1;
- (void)replayWithStartDate:(id)arg1 endDate:(id)arg2;
- (void)setEventMessages:(id)arg1;
- (void)setEventOrder:(id)arg1;
- (void)streamDidFail:(id)arg1 error:(id)arg2;
- (void)streamDidStart:(id)arg1;
- (void)streamDidStop:(id)arg1;

@end
