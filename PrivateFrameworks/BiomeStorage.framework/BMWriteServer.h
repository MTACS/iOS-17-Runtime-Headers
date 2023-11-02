
@interface BMWriteServer : NSObject <NSXPCListenerDelegate> {
    NSString * _client;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
