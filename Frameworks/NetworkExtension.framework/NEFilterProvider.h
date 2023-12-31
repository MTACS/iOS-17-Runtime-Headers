
@interface NEFilterProvider : NEProvider <NSExtensionRequestHandling> {
    NEFilterProviderConfiguration * _filterConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NEFilterProviderConfiguration *filterConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)filterConfiguration;
- (void)handleReport:(id)arg1;
- (void)setFilterConfiguration:(id)arg1;
- (void)startFilterWithCompletionHandler:(id /* block */)arg1;
- (void)stopFilterWithReason:(long long)arg1 completionHandler:(id /* block */)arg2;

@end
