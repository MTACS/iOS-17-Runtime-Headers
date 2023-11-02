
@interface CARSetupHeadUnitPairingPrompt : NSObject {
    NSXPCConnection * _connection;
    <CARSetupHeadUnitPairingPromptDelegate> * _delegate;
    NSString * _keyIdentifier;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) <CARSetupHeadUnitPairingPromptDelegate> *delegate;
@property (nonatomic, readonly) NSString *keyIdentifier;

- (void).cxx_destruct;
- (void)_handleConnectionReset;
- (void)_handleDidFinishWithResult:(bool)arg1;
- (void)_setupConnection;
- (void)_synchronous_servicePerform:(id /* block */)arg1;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)headUnitPairingPromptViewController;
- (id)initWithKeyIdentifier:(id)arg1;
- (void)invalidate;
- (id)keyIdentifier;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)wantsToPresentHeadUnitPairing;

@end
