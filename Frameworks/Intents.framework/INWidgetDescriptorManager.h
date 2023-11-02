
@interface INWidgetDescriptorManager : NSObject <CHSWidgetDescriptorProviderObserver> {
    NSMutableArray * _completionHandlers;
    bool  _observing;
    CHSWidgetDescriptorProvider * _provider;
    NSObject<OS_dispatch_queue> * _queue;
    INWatchdogTimer * _watchdogTimer;
    NSSet * _widgetDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSSet *widgetDescriptors;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_notifyCompletionHandlersWithWidgetDescriptors:(id)arg1;
- (void)_startObservingDescriptors;
- (void)dealloc;
- (void)descriptorsDidChangeForDescriptorProvider:(id)arg1;
- (void)getDescriptorForIntent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getDescriptorsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)setWidgetDescriptors:(id)arg1;
- (id)widgetDescriptors;

@end
