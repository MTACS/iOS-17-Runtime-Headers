
@interface AUPBClientConnection : NSObject {
    <AUPBInspecting> * proxyInterface;
    NSXPCConnection * xpcconnection;
}

@property (nonatomic, retain) <AUPBInspecting> *proxyInterface;
@property (nonatomic, retain) NSXPCConnection *xpcconnection;

- (id)proxyInterface;
- (void)setProxyInterface:(id)arg1;
- (void)setXpcconnection:(id)arg1;
- (id)xpcconnection;

@end
