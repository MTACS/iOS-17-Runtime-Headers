
@interface ICPlayActivityCenter : NSObject {
    NSXPCConnection * _daemonPlayActivityControllerConnection;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)_daemonPlayActivityControllerConnection;
- (void)dealloc;
- (void)flushPendingPlayActivityEventsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)recordPlayActivityEvents:(id)arg1 shouldFlush:(bool)arg2 withCompletionHandler:(id /* block */)arg3;

@end
