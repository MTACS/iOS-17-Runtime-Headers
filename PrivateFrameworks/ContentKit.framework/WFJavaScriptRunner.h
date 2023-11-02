
@interface WFJavaScriptRunner : WFSingleConnectionXPCListener <NSXPCListenerDelegate, WFJavaScriptRunnerHostProtocol> {
    NSItemProvider * _itemProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithItemProvider:(id)arg1;
- (id)itemProvider;
- (void)runJavaScript:(id)arg1 completionHandler:(id /* block */)arg2;

@end
