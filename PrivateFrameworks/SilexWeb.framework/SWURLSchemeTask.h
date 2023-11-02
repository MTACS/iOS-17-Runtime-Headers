
@interface SWURLSchemeTask : NSObject <WKURLSchemeTask> {
    id /* block */  _completionBlock;
    <SWLogger> * _logger;
    <WKURLSchemeTask> * _task;
}

@property (setter=onCompletion:, nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SWLogger> *logger;
@property (nonatomic, readonly, copy) NSURLRequest *request;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <WKURLSchemeTask> *task;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)didFailWithError:(id)arg1;
- (void)didFinish;
- (void)didReceiveData:(id)arg1;
- (void)didReceiveResponse:(id)arg1;
- (id)initWithTask:(id)arg1 logger:(id)arg2;
- (id)logger;
- (void)onCompletion:(id /* block */)arg1;
- (void)performBlockOnMainThread:(id /* block */)arg1;
- (id)request;
- (id)task;

@end
