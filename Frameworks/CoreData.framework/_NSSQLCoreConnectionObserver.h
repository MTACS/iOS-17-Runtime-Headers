
@interface _NSSQLCoreConnectionObserver : NSObject {
    NSSQLCore * _core;
    NSObject<OS_dispatch_queue> * _queue;
    int  _token;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
