
@interface EXExtensionRequest : NSObject {
    id  _assertion;
    NSExtensionContext * _context;
    NSXPCListenerEndpoint * _endpoint;
    NSArray * _inputItems;
    _EXExtensionInstanceIdentifier * _instanceIdentifier;
    unsigned long long  _options;
    _EXPersona * _persona;
    NSUUID * _pkUUID;
    <PKPlugInPrivate> * _plugIn;
    RBSProcessIdentifier * _processIdentifier;
    NSString * _sandboxProfileName;
    NSXPCConnection * _xpcConnection;
}

@property (retain) id assertion;
@property NSExtensionContext *context;
@property (retain) NSXPCListenerEndpoint *endpoint;
@property (copy) NSArray *inputItems;
@property (retain) _EXExtensionInstanceIdentifier *instanceIdentifier;
@property unsigned long long options;
@property (retain) _EXPersona *persona;
@property (retain) NSUUID *pkUUID;
@property (retain) <PKPlugInPrivate> *plugIn;
@property (retain) RBSProcessIdentifier *processIdentifier;
@property (copy) NSString *sandboxProfileName;
@property (retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)applyActiveWebPageAlternativeIfNeededForExtension:(id)arg1;
- (id)assertion;
- (id)context;
- (void)dealloc;
- (id)description;
- (id)endpoint;
- (id)init;
- (id)inputItems;
- (id)instanceIdentifier;
- (unsigned long long)options;
- (id)persona;
- (id)pkUUID;
- (id)plugIn;
- (id)processIdentifier;
- (id)sandboxProfileName;
- (void)setAssertion:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setInputItems:(id)arg1;
- (void)setInstanceIdentifier:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPersona:(id)arg1;
- (void)setPkUUID:(id)arg1;
- (void)setPlugIn:(id)arg1;
- (void)setProcessIdentifier:(id)arg1;
- (void)setSandboxProfileName:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
