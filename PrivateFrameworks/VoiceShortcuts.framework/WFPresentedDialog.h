
@interface WFPresentedDialog : NSObject {
    id /* block */  _completionHandler;
    WFWorkflowRunningContext * _context;
    unsigned long long  _presentationMode;
    WFDialogRequest * _request;
    WFDialogResponse * _response;
}

@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, readonly) WFWorkflowRunningContext *context;
@property (nonatomic, readonly) unsigned long long presentationMode;
@property (nonatomic, readonly) WFDialogRequest *request;
@property (nonatomic, retain) WFDialogResponse *response;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)context;
- (id)initWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 runningContext:(id)arg3 completionHandler:(id /* block */)arg4;
- (unsigned long long)presentationMode;
- (id)request;
- (id)response;
- (void)setResponse:(id)arg1;

@end
