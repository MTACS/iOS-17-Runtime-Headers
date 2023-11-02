
@interface SHInsightsNetworkRequester : NSObject <SHNetworkRequester>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)downloadResourceFromRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)response:(id)arg1 data:(id)arg2 error:(id)arg3;

@end
