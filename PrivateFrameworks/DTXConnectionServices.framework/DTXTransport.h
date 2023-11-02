
@interface DTXTransport : NSObject {
    id /* block */  _dataReceivedHandler;
    NSObject<OS_dispatch_queue> * _handlerGuard;
    bool  _resumed;
    NSObject<OS_dispatch_queue> * _serializer;
    unsigned int  _status;
    DTXResourceTracker * _tracker;
}

@property (nonatomic, copy) id /* block */ dataReceivedHandler;
@property (readonly) NSArray *localAddresses;
@property (nonatomic, readonly) DTXResourceTracker *resourceTracker;
@property unsigned int status;

+ (bool)recognizesURL:(id)arg1;
+ (id)schemes;

- (void).cxx_destruct;
- (id /* block */)dataReceivedHandler;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (id)initWithRemoteAddress:(id)arg1;
- (id)initWithXPCRepresentation:(id)arg1;
- (id)localAddresses;
- (id)permittedBlockCompressionTypes;
- (void)received:(const char *)arg1 ofLength:(unsigned long long)arg2 destructor:(id /* block */)arg3;
- (id)resourceTracker;
- (void)serializedDisconnect:(id /* block */)arg1;
- (id)serializedXPCRepresentation;
- (void)setDataReceivedHandler:(id /* block */)arg1;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)status;
- (unsigned int)supportedDirections;
- (unsigned long long)transmit:(const void*)arg1 ofLength:(unsigned long long)arg2;

@end
