
@interface SSInstallAttributionPingbackRequest : SSRequest <SSXPCCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end
