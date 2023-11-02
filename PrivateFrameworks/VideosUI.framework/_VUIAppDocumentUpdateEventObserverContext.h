
@interface _VUIAppDocumentUpdateEventObserverContext : NSObject {
    NSSet * _eventDescriptors;
    NSMutableDictionary * _refreshTimerByEventDescriptor;
    id /* block */  _refreshTimerFiredBlock;
    UIViewController * _viewController;
}

@property (nonatomic, copy) NSSet *eventDescriptors;
@property (nonatomic, retain) NSMutableDictionary *refreshTimerByEventDescriptor;
@property (nonatomic, copy) id /* block */ refreshTimerFiredBlock;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_cancelAllRefreshTimers;
- (void)_cancelRefreshTimer:(id)arg1;
- (void)_cancelRefreshTimers:(id)arg1;
- (id)_refreshTimerWithRefreshTimeEventDescriptor:(id)arg1;
- (void)_startRefreshTimer:(id)arg1;
- (void)dealloc;
- (id)eventDescriptors;
- (void)invalidate;
- (id)refreshTimerByEventDescriptor;
- (id /* block */)refreshTimerFiredBlock;
- (void)setEventDescriptors:(id)arg1;
- (void)setRefreshTimerByEventDescriptor:(id)arg1;
- (void)setRefreshTimerFiredBlock:(id /* block */)arg1;
- (void)setViewController:(id)arg1;
- (void)updateDescriptorsWithDescriptors:(id)arg1;
- (id)viewController;

@end
