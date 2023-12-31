
@interface CPLProxyPullSession : CPLProxySession <CPLPullChangeSessionImplementation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;

- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getChangeBatchWithCompletionHandler:(id /* block */)arg1;

@end
