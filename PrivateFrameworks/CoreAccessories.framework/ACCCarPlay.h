
@interface ACCCarPlay : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_init;
- (void)carPlayAppLinksStateForCertSerial:(id)arg1 withReply:(id /* block */)arg2;
- (void)carPlayIconStateForCertSerial:(id)arg1 andAppCategories:(unsigned long long)arg2 withReply:(id /* block */)arg3;
- (void)carPlayStartSessionForConnectionID:(unsigned int)arg1 properties:(id)arg2;
- (void)filterMatchingDigitalCarKeys:(id)arg1 forAccessory:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)isCarPlayPairedWithCertSerial:(id)arg1 withReply:(id /* block */)arg2;
- (void)isWirelessCarPlayAllowedForCertSerial:(id)arg1 withReply:(id /* block */)arg2;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
