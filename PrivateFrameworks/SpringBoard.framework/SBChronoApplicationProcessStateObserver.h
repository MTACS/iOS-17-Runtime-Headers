
@interface SBChronoApplicationProcessStateObserver : NSObject {
    CHSApplicationProcessStateChangeConsumer * _chronoConsumer;
    SBIconController * _iconController;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_queue_handleApplicationProcessStateDidChangeIfNecessary:(id)arg1;
- (bool)_shouldInformChronoForApplication:(id)arg1;
- (void)applicationProcessStateDidChange:(id)arg1;
- (id)init;
- (id)initWithIconController:(id)arg1;

@end
