
@interface NEFilterDataProvider : NEFilterProvider <NSExtensionRequestHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)applySettings:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)handleInboundDataCompleteForFlow:(id)arg1;
- (id)handleInboundDataFromFlow:(id)arg1 readBytesStartOffset:(unsigned long long)arg2 readBytes:(id)arg3;
- (id)handleNewFlow:(id)arg1;
- (id)handleOutboundDataCompleteForFlow:(id)arg1;
- (id)handleOutboundDataFromFlow:(id)arg1 readBytesStartOffset:(unsigned long long)arg2 readBytes:(id)arg3;
- (id)handleRemediationForFlow:(id)arg1;
- (void)handleRulesChanged;
- (void)resumeFlow:(id)arg1 withVerdict:(id)arg2;
- (void)updateFlow:(id)arg1 usingVerdict:(id)arg2 forDirection:(long long)arg3;

@end
