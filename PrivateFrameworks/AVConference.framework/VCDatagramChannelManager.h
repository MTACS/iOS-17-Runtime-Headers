
@interface VCDatagramChannelManager : NSObject {
    NSMutableDictionary * _datagramChannels;
    NSMutableDictionary * _destinations;
    unsigned int  _nextToken;
    id /* block */  _readHandler;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _stateLock;
}

@property (copy) id /* block */ readHandler;

+ (id)sharedInstance;

- (id)addDatagramChannelWithDescriptor:(int)arg1 eventHandler:(id /* block */)arg2 error:(id*)arg3;
- (id)addDatagramChannelWithDescriptor:(int)arg1 eventHandler:(id /* block */)arg2 writeCompletionHandler:(id /* block */)arg3 error:(id*)arg4;
- (id)addDatagramChannelWithDestination:(id)arg1 eventHandler:(id /* block */)arg2 dataPath:(int)arg3 error:(id*)arg4;
- (id)addDatagramChannelWithDestination:(id)arg1 eventHandler:(id /* block */)arg2 error:(id*)arg3;
- (id)addDatagramChannelWithDestination:(id)arg1 eventHandler:(id /* block */)arg2 writeCompletionHandler:(id /* block */)arg3 dataPath:(int)arg4 error:(id*)arg5;
- (id)datagramChannelWithChannelToken:(unsigned int)arg1;
- (void)dealloc;
- (void)executeBlockForIDSDestination:(id)arg1 blockToExecute:(id /* block */)arg2;
- (id)init;
- (bool)isEmulatedDatagramChannelEnabledViaDefaults;
- (id /* block */)readHandler;
- (void)removeDatagramChannel:(id)arg1;
- (void)setReadHandler:(id /* block */)arg1;
- (bool)setupDatagramChannel:(id)arg1 eventHandler:(id /* block */)arg2 writeCompletionHandler:(id /* block */)arg3 error:(id*)arg4;
- (id)setupEmulatedDatagramChannelWithDestination:(id)arg1 datagramChannel:(id)arg2;

@end
