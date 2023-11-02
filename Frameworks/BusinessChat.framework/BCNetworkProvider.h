
@interface BCNetworkProvider : NSObject <BCNetworkProviderProtocol> {
    NSURLSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)performDataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;

@end
