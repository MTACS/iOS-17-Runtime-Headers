
@interface CMMagicMountManagerInternal : NSObject {
    bool  _apWakesAllowed;
    void * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    struct CMMagicMountStateStruct { 
        double timestamp; 
        long long mountStatus; 
    }  _currentMagicMountState;
    struct Dispatcher { int (**x1)(); id x2; } * _magicMountStateDispatcher;
    id /* block */  _magicMountStateHandler;
    NSOperationQueue * _magicMountStateQueue;
    bool  _serviceEnabled;
}

- (id).cxx_construct;
- (void)connect;
- (void)dealloc;
- (id)init;
- (void)sendAPWakesRequestPrivate;
- (void)sendServiceRequestPrivate;
- (void)teardownPrivate;

@end
