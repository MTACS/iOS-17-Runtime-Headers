
@interface NSFileAccessProcessManager : NSObject {
    id  _assertionToken;
    NSObject<OS_xpc_object> * _connection;
    BKSApplicationStateMonitor * _monitor;
    int  _pendingMessageCount;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _suspensionHandler;
    NSArray * _urls;
}

@property (copy) NSArray *URLs;
@property (copy) id /* block */ suspensionHandler;

+ (bool)needToManageConnection:(id)arg1 forURLs:(id)arg2;

- (id)URLs;
- (void)_ensureMonitor;
- (void)allowSuspension;
- (void)dealloc;
- (id)initWithClient:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)killProcessWithMessage:(id)arg1;
- (void)preventSuspensionWithActivityName:(id)arg1;
- (void)safelySendMessageWithReplyUsingBlock:(id /* block */)arg1;
- (void)setSuspensionHandler:(id /* block */)arg1;
- (void)setURLs:(id)arg1;
- (id /* block */)suspensionHandler;

@end
