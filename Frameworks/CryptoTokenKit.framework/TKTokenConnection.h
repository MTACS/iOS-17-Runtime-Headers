
@interface TKTokenConnection : NSObject <NSXPCListenerDelegate> {
    id  _initialKeepAlive;
    NSXPCListener * _listener;
    NSMapTable * _sessions;
    TKToken * _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id initialKeepAlive;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (nonatomic, readonly) NSMapTable *sessions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TKToken *token;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithToken:(id)arg1;
- (id)initialKeepAlive;
- (void)invalidate;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)sessions;
- (void)setInitialKeepAlive:(id)arg1;
- (id)token;

@end
