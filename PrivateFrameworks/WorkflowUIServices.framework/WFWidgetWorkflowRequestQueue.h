
@interface WFWidgetWorkflowRequestQueue : NSObject {
    bool  _handlingRequest;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _log;
    NSMutableArray * _requests;
}

@property (getter=isHandlingRequest, nonatomic) bool handlingRequest;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) NSMutableArray *requests;

- (void).cxx_destruct;
- (void)_requeueFailedRequest:(id)arg1;
- (void)fetchNextQueuedItem;
- (void)getWidgetWorkflowWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getWidgetWorkflowsInCollectionWithIdentifier:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (bool)isHandlingRequest;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)log;
- (id)requests;
- (void)setHandlingRequest:(bool)arg1;

@end
