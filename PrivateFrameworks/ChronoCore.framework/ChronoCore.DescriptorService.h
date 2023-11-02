
@interface ChronoCore.DescriptorService : NSObject {
    void _descriptorPublisher;
    void _extensionPublisher;
    void _queue_currentExtensionsAndCompletionsBeingFetched;
    void _queue_extensionEvents;
    void _queue_queryTimer;
    void _queue_readyDataSources;
    void _queue_tasks;
    void _test_noRetries;
    void descriptorCache;
    void descriptorProvider;
    void extensionManager;
    void finishLaunchingToken;
    void hostService;
    void initialQueryTimerInterval;
    void intentResolver;
    void keybagStateProvider;
    void persistentSubscriptions;
    void preferences;
    void queryTimerInterval;
    void queryTimerLeeway;
    void queue;
    void remoteWidgetDescriptorService;
    void taskService;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
