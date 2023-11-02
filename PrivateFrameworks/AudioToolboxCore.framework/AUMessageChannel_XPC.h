
@interface AUMessageChannel_XPC : NSObject <AUMessageChannel> {
    id /* block */  _callHostBlock;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, copy) id /* block */ callHostBlock;

- (void).cxx_destruct;
- (id)callAudioUnit:(id)arg1;
- (id /* block */)callHostBlock;
- (void)dealloc;
- (id)initWithListenerEndpoint:(id)arg1;
- (void)setCallHostBlock:(id /* block */)arg1;

@end
