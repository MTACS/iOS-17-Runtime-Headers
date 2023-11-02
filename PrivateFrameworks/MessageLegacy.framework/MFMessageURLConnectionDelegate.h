
@interface MFMessageURLConnectionDelegate : NSObject <NSURLSessionDelegate> {
    EFPromise * _promise;
    NSURLResponse * _response;
    NSMutableData * _responseBody;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) EFFuture *future;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURLResponse *response;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)dealloc;
- (id)future;
- (id)init;
- (id)response;

@end
