
@interface MLBackgroundRunner : NSObject <_DASExtensionRunner> {
    _DASActivity * _activity;
    <NSObject> * _dataSource;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _shouldStop;
    MLBackgroundTask * _task;
    NSObject<OS_dispatch_queue> * _watchdogQueue;
}

@property (nonatomic, retain) _DASActivity *activity;
@property (nonatomic, retain) <NSObject> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool shouldStop;
@property (readonly) Class superclass;
@property (nonatomic, retain) MLBackgroundTask *task;
@property (retain) NSObject<OS_dispatch_queue> *watchdogQueue;

- (void).cxx_destruct;
- (id)activity;
- (bool)createExtensionDataSourceWithInfoKey:(id)arg1 conformingToProtocol:(id)arg2;
- (id)dataSource;
- (id)delegateQueue;
- (id)init;
- (bool)prepareForActivity:(id)arg1;
- (void)setActivity:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setShouldStop:(bool)arg1;
- (void)setTask:(id)arg1;
- (void)setWatchdogQueue:(id)arg1;
- (bool)shouldStop;
- (unsigned char)start;
- (void)stop;
- (id)task;
- (id)watchdogQueue;

@end
