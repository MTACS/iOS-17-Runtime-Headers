
@interface CGRemotePDFServiceProxy : NSObject <CGRemotePDFServiceProtocol> {
    NSXPCConnection * _connection;
    <CGRemotePDFServiceProtocol> * _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithError:(id*)arg1;
- (void)newPDFDocumentWithData:(id)arg1 withReply:(id /* block */)arg2;
- (void)newRemotePDFDocumentProxyWithData:(id)arg1 withReply:(id /* block */)arg2;

@end
