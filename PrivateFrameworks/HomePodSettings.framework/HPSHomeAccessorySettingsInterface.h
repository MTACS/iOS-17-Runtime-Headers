
@interface HPSHomeAccessorySettingsInterface : NSObject {
    <HPSHomeAccessorySettingsConnectionInterfaceDelegate> * _delegate;
    bool  _isValidConnection;
    HPSHomeAccessoryInterfaceMediator * _mediator;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) <HPSHomeAccessorySettingsConnectionInterfaceDelegate> *delegate;
@property (nonatomic) bool isValidConnection;
@property (nonatomic, retain) HPSHomeAccessoryInterfaceMediator *mediator;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)accessoryDidUpdateValueForEndpointIdentifier:(id)arg1 keyPath:(id)arg2 value:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)fetchSettingForEndpointIdentifier:(id)arg1 keyPath:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleConnectionInterrupted;
- (void)handleConnectionInvalidated;
- (id)initWithDelegate:(id)arg1;
- (bool)isValidConnection;
- (id)mediator;
- (void)setDelegate:(id)arg1;
- (void)setIsValidConnection:(bool)arg1;
- (void)setMediator:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)subscribeToSettingForEndpointIdentifier:(id)arg1 keyPath:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)unsubscribeToSettingForEndpointIdentifier:(id)arg1 keyPath:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)xpcConnection;

@end
