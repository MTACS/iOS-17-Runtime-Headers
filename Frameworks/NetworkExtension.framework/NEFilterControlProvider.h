
@interface NEFilterControlProvider : NEFilterProvider <NSExtensionRequestHandling> {
    NSDictionary * _URLAppendStringMap;
    NSDictionary * _remediationMap;
}

@property (copy) NSDictionary *URLAppendStringMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSDictionary *remediationMap;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLAppendStringMap;
- (void)handleNewFlow:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleRemediationForFlow:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)notifyRulesChanged;
- (id)remediationMap;
- (void)setRemediationMap:(id)arg1;
- (void)setURLAppendStringMap:(id)arg1;

@end
