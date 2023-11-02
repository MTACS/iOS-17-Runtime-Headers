
@interface MDMServiceDelegate : NSObject <NSXPCListenerDelegate> {
    MDMServerCore * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MDMServerCore *server;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithServer:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)server;
- (void)setServer:(id)arg1;

@end
