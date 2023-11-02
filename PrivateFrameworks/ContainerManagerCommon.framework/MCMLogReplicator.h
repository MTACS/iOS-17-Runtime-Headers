
@interface MCMLogReplicator : NSObject <MCMVolumeChangeMonitorObserver> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithWorkloop:(id)arg1;
- (id)queue;
- (id)volumeChangedDispatchQueue;
- (void)volumeChangedWithEvents:(unsigned long long)arg1 newVolumeState:(unsigned long long)arg2;

@end
