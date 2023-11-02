
@interface _EXSceneSession : NSObject <NSXPCListenerDelegate, _EXConnectionHandler, _EXSceneSessionExtensionXPCProtocol> {
    _EXSceneConfiguration * _configuration;
    _EXExtension * _extension;
    bool  _hasSwiftUIContent;
    NSXPCListenerEndpoint * _hostEndpoint;
    NSUUID * _identifier;
    <_EXScene> * _scene;
    NSXPCListener * _sceneConnectionListener;
    NSXPCConnection * _sceneXPCConnection;
    NSXPCConnection * _sessionXPCConnection;
    unsigned long long  _signpost;
}

@property (copy) _EXSceneConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _EXExtension *extension;
@property (nonatomic, readonly) bool hasSwiftUIContent;
@property (readonly) unsigned long long hash;
@property (readonly) NSXPCListenerEndpoint *hostEndpoint;
@property (retain) NSUUID *identifier;
@property (readonly, copy) NSString *role;
@property (nonatomic, retain) <_EXScene> *scene;
@property (retain) NSXPCListener *sceneConnectionListener;
@property (nonatomic, retain) NSXPCConnection *sceneXPCConnection;
@property (nonatomic) NSXPCConnection *sessionXPCConnection;
@property (readonly) unsigned long long signpost;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configuration;
- (void)connectSceneSessionWithRequest:(id)arg1 reply:(id /* block */)arg2;
- (void)connectToScene:(id)arg1;
- (void)dealloc;
- (id)extension;
- (bool)hasSwiftUIContent;
- (id)hostEndpoint;
- (id)identifier;
- (id)initWithExtension:(id)arg1;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)makeConfigurationWithParameters:(id)arg1;
- (id)makeConnectionResponse;
- (id)makeSceneWithError:(id*)arg1;
- (id)makeXPCConnectionWithError:(id*)arg1;
- (id)role;
- (id)scene;
- (id)sceneConnectionListener;
- (id)sceneXPCConnection;
- (id)sessionXPCConnection;
- (void)setConfiguration:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setScene:(id)arg1;
- (void)setSceneConnectionListener:(id)arg1;
- (void)setSceneXPCConnection:(id)arg1;
- (void)setSessionXPCConnection:(id)arg1;
- (bool)shouldAcceptXPCConnection:(id)arg1;
- (unsigned long long)signpost;

@end
