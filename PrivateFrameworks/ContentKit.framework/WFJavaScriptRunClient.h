
@interface WFJavaScriptRunClient : NSObject {
    NSXPCListenerEndpoint * _endpoint;
}

@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;

- (void).cxx_destruct;
- (id)endpoint;
- (id)initWithEndpoint:(id)arg1;
- (void)runJavaScript:(id)arg1 completionHandler:(id /* block */)arg2;

@end
