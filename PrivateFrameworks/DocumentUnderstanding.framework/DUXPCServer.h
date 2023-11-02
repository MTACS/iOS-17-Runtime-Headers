
@interface DUXPCServer : NSObject {
    NSObject<OS_dispatch_queue> * _documentUpdateQueue;
    NSObject<OS_xpc_object> * _listener;
}

+ (void)_registerDocumentUnderstandingListenerWithTextUnderstandingManager:(id)arg1;
+ (void)_registerPoemMonthlyActivityWithTextUnderstandingManager:(id)arg1;
+ (void)_registerPoemWeeklyActivityWithTextUnderstandingManager:(id)arg1;
+ (void)registerDUXPCListenersWithManager:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_newClientConnection:(id)arg1 withTextUnderstandingManager:(id)arg2;
- (void)_registerDocumentUpdateHandlerListenerWithTextUnderstandingManager:(id)arg1;
- (id)init;

@end
