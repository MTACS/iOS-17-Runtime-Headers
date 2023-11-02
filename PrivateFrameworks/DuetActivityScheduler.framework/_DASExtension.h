
@interface _DASExtension : NSObject <NSExtensionRequestHandling> {
    _DASActivity * _activity;
    _DASExtensionRemoteContext * _context;
    NSObject<OS_os_log> * _log;
    <_DASExtensionRunner> * _runner;
    NSDate * _startTime;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, retain) _DASActivity *activity;
@property (nonatomic, retain) _DASExtensionRemoteContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) <_DASExtensionRunner> *runner;
@property (nonatomic, retain) NSDate *startTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (void)_activityCompletedWithStatus:(unsigned char)arg1;
- (id)activity;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)context;
- (id)init;
- (id)log;
- (id)runner;
- (void)runner:(id)arg1 performActivity:(id)arg2;
- (void)setActivity:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setRunner:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)startTime;
- (void)suspend;
- (id)transaction;

@end
