
@interface WFWidgetCache : NSObject <WFObservableResultObserver> {
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _queue;
    WFWidgetWorkflowRequestQueue * _requestQueue;
    NSMutableDictionary * _resultsByIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) WFWidgetWorkflowRequestQueue *requestQueue;
@property (nonatomic, readonly) NSMutableDictionary *resultsByIdentifier;
@property (readonly) Class superclass;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)init;
- (id)log;
- (void)observableResultDidChange:(id)arg1;
- (id)queue;
- (void)queue_getWidgetWorkflowWithIdentifier:(id)arg1;
- (void)queue_getWidgetWorkflowsInCollectionWithIdentifier:(id)arg1 limit:(unsigned long long)arg2;
- (void)queue_notifyObserversOfChange:(id)arg1 forIdentifier:(id)arg2;
- (void)queue_storeAndNotifyWithResult:(id)arg1 forIdentifier:(id)arg2 resultsLimit:(unsigned long long)arg3;
- (id)requestQueue;
- (id)resultsByIdentifier;
- (id)widgetWorkflowWithIdentifier:(id)arg1;
- (id)widgetWorkflowsInCollectionWithIdentifier:(id)arg1 limit:(unsigned long long)arg2;

@end
