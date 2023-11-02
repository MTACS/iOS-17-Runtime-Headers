
@interface APBrokerHTTPUtilsTaskDelegate : NSObject <NSURLSessionTaskDelegate> {
    void * _logContext;
    NSString * _sslCertificateHostName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (id)initWithLogContext:(void*)arg1 sslCertificateHostName:(id)arg2;

@end
