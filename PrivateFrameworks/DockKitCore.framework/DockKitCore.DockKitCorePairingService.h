
@interface DockKitCore.DockKitCorePairingService : NSObject <DockKitCore.XPCPairingClientProtocol> {
    void XPCTIMEOUT;
    void _checkQueue;
    void _pairingDelegate;
    void _xpcConnection;
    void _xpcConnectionError;
    void _xpcConnectionLock;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)pairingStatusWithInfo:(id)arg1 state:(long long)arg2 metadata:(id)arg3 error:(id)arg4;
- (void)setSetupPayloadWithUri:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 17: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, unsigned long, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
