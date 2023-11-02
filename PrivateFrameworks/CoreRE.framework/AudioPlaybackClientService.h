
@interface AudioPlaybackClientService : NSObject <REAudioPlaybackClientService> {
    NSXPCConnection * _connection;
    struct atomic<unsigned long long> { 
        struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { 
            _Atomic unsigned long long __a_value; 
        } __a_; 
    }  _connectionIdentifier;
    NSObject<OS_dispatch_queue> * _engineQueue;
    id /* block */  _streamTokenDidCompleteCallback;
}

@property (readonly) bool connected;
@property (readonly) unsigned long long connectionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ streamTokenDidCompleteCallback;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)connected;
- (unsigned long long)connectionIdentifier;
- (void)didReceiveConnectionIdentifier:(unsigned long long)arg1;
- (id)initWithXPCEndpoint:(id)arg1 queue:(id)arg2;
- (void)setStreamTokenDidCompleteCallback:(id /* block */)arg1;
- (void)streamTokenDidComplete:(unsigned long long)arg1;
- (id /* block */)streamTokenDidCompleteCallback;

@end
