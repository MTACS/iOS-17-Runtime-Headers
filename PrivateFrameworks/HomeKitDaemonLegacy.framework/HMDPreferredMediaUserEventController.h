
@interface HMDPreferredMediaUserEventController : NSObject <HMDFetchedSettingsDriverDelegate> {
    <HMDPreferredMediaUserEventControllerDataSource> * _dataSource;
    <HMDFetchedSettingsDriver> * _driver;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) <HMDPreferredMediaUserEventControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <HMDFetchedSettingsDriver> *driver;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_postUpdateEventsIfDifferent:(id)arg1;
- (id)dataSource;
- (id)driver;
- (void)driver:(id)arg1 didUpdatePrimaryUserInfo:(id)arg2;
- (void)driver:(id)arg1 didUpdateSettings:(id)arg2;
- (void)driverDidReload:(id)arg1;
- (id)eventSource;
- (double)eventTimestamp;
- (id)initWithDataSource:(id)arg1 queue:(id)arg2 driver:(id)arg3;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)updatePreferredMediaUserWithPrimaryUserInfo:(id)arg1 completion:(id /* block */)arg2;

@end
