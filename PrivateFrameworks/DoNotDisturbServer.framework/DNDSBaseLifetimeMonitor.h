
@interface DNDSBaseLifetimeMonitor : NSObject <DNDSLifetimeMonitor, DNDSSysdiagnoseDataProvider> {
    NSArray * _activeLifetimeAssertionUUIDs;
    <DNDSLifetimeMonitorDataSource> * _dataSource;
    <DNDSLifetimeMonitorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSArray *activeLifetimeAssertionUUIDs;
@property (nonatomic) <DNDSLifetimeMonitorDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSLifetimeMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *sysdiagnoseDataIdentifier;

+ (Class)lifetimeClass;

- (void).cxx_destruct;
- (id)activeLifetimeAssertionUUIDs;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)queue;
- (void)refreshMonitorForDate:(id)arg1;
- (void)refreshMonitorFromQueueForDate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(bool)arg2;
- (id)sysdiagnoseDataIdentifier;
- (id)updateForModeAssertions:(id)arg1 date:(id)arg2;

@end
