
@interface SBSystemStatusStatusBarOverridesArchiver : NSObject {
    STStatusBarOverridesStatusDomain * _overridesDomain;
    STStatusBarOverridesStatusDomainPublisher * _overridesPublisher;
    NSObject<OS_dispatch_queue> * _queue;
    STStatusBarData * _queue_statusBarData;
}

+ (id)_archiveFileURL;

- (void).cxx_destruct;
- (void)_queue_persistUpdatedData:(id)arg1;
- (id)_queue_readStatusBarData;
- (void)_queue_setupObservingAndReconcileInitialState;
- (void)_queue_writeOutStatusBarData:(id)arg1;
- (void)dealloc;
- (id)init;

@end
