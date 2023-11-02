
@interface AAUIRemoteUIController : RemoteUIController {
    NSURLRequest * _currentRequest;
    NSString * _identifier;
    NSHTTPURLResponse * _redirectResponse;
}

@property (nonatomic, readonly) NSURLRequest *currentRequest;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSHTTPURLResponse *redirectResponse;

- (void).cxx_destruct;
- (void)_loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)currentRequest;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)loader:(id)arg1 connection:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4;
- (void)loader:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)redirectResponse;
- (void)setIdentifier:(id)arg1;
- (void)setRedirectResponse:(id)arg1;

@end