
@interface AVAudioSessionXPCServer : NSObject <NSXPCListenerDelegate> {
    NSXPCInterface * _callbackInterface;
    struct unique_ptr<std::promise<void>, std::default_delete<std::promise<void>>> { 
        struct __compressed_pair<std::promise<void> *, std::default_delete<std::promise<void>>> { 
            void *__value_; 
        } __ptr_; 
    }  _clientDeathPromise;
    NSMutableArray * _connections;
    struct unique_ptr<std::promise<void>, std::default_delete<std::promise<void>>> { 
        struct __compressed_pair<std::promise<void> *, std::default_delete<std::promise<void>>> { 
            void *__value_; 
        } __ptr_; 
    }  _deallocPromise;
    NSXPCInterface * _exportedInterface;
    NSXPCListener * _listener;
    bool  _needsDefaultWorldInit;
    <AVAudioSessionServerDelegate> * _serverDelegate;
    struct World { }  _world;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)init2;
- (id)initWithDelegate:(id)arg1;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)removeConnection:(id)arg1;
- (void)start;

@end
