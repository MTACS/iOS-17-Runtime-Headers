
@interface MKHTTPServer : NSObject <MKListenerDelegate> {
    MKCertificate * _certificate;
    MKCertificate * _clientCertificate;
    <MKHTTPServerDelegate> * _delegate;
    MKListener * _listener;
    MKHTTPParser * _parser;
    unsigned long long  _port;
    NSMutableDictionary * _requests;
    NSMutableDictionary * _routers;
    NSString * _service;
    bool  _useHTTPS;
}

@property (nonatomic, retain) MKCertificate *certificate;
@property (nonatomic, retain) MKCertificate *clientCertificate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKHTTPServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long port;
@property (nonatomic, copy) NSString *service;
@property (readonly) Class superclass;
@property (nonatomic) bool useHTTPS;

- (void).cxx_destruct;
- (void)addRouter:(id)arg1 method:(unsigned long long)arg2 path:(id)arg3;
- (void)cancel;
- (id)certificate;
- (id)clientCertificate;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)delegate;
- (id)init;
- (void)listener:(id)arg1 didOpen:(long long)arg2;
- (void)listenerDidCancel:(id)arg1;
- (id)method:(unsigned long long)arg1;
- (unsigned long long)port;
- (id)routerForMethod:(id)arg1 path:(id)arg2;
- (void)run;
- (id)service;
- (void)setCertificate:(id)arg1;
- (void)setClientCertificate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPort:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setUseHTTPS:(bool)arg1;
- (bool)useHTTPS;

@end
