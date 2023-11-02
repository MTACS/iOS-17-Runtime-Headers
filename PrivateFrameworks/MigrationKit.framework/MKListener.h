
@interface MKListener : NSObject {
    MKCertificate * _certificate;
    MKCertificate * _clientCertificate;
    NSData * _clientCertificateHash;
    NSMutableArray * _connectionQueuePool;
    NSMutableDictionary * _connections;
    <MKListenerDelegate> * _delegate;
    NSString * _host;
    long long  _lastUsedThreadIndex;
    NSObject<OS_nw_listener> * _listener;
    NSObject<OS_dispatch_queue> * _listenerQueue;
    unsigned long long  _numberOfThreads;
    unsigned long long  _port;
    NSString * _service;
    bool  _useTLS;
}

@property (nonatomic, retain) MKCertificate *certificate;
@property (nonatomic, retain) MKCertificate *clientCertificate;
@property (nonatomic, copy) NSData *clientCertificateHash;
@property (nonatomic) <MKListenerDelegate> *delegate;
@property (nonatomic, copy) NSString *host;
@property (nonatomic) unsigned long long numberOfThreads;
@property (nonatomic) unsigned long long port;
@property (nonatomic, copy) NSString *service;
@property (nonatomic) bool useTLS;

- (void).cxx_destruct;
- (void)cancel;
- (id)certificate;
- (id)clientCertificate;
- (id)clientCertificateHash;
- (void)connection:(id)arg1 DidChangeState:(int)arg2 error:(id)arg3 queue:(id)arg4;
- (void)connection:(id)arg1 didReceiveContent:(id)arg2 context:(id)arg3 completed:(bool)arg4 queue:(id)arg5 error:(id)arg6;
- (id)delegate;
- (void)didReceiveSecureOptions:(id)arg1;
- (void)didReceiveTCPOptions:(id)arg1;
- (void)didReceiveTrust:(id)arg1 complete:(id /* block */)arg2;
- (id)host;
- (void)listen;
- (void)listenerDidReceiveConnection:(id)arg1;
- (void)listenerDidReceiveState:(int)arg1 error:(id)arg2;
- (unsigned long long)numberOfThreads;
- (unsigned long long)port;
- (void)read:(id)arg1 queue:(id)arg2;
- (void)readData:(id)arg1;
- (void)sendData:(id)arg1 throughConnection:(id)arg2 close:(bool)arg3;
- (id)service;
- (void)setCertificate:(id)arg1;
- (void)setClientCertificate:(id)arg1;
- (void)setClientCertificateHash:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setNumberOfThreads:(unsigned long long)arg1;
- (void)setPort:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setUseTLS:(bool)arg1;
- (bool)useTLS;

@end
