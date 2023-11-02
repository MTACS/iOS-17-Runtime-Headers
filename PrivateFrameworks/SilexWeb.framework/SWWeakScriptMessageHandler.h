
@interface SWWeakScriptMessageHandler : NSObject <WKScriptMessageHandler> {
    <WKScriptMessageHandler> * _scriptMessageHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <WKScriptMessageHandler> *scriptMessageHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithScriptMessageHandler:(id)arg1;
- (id)scriptMessageHandler;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;

@end
