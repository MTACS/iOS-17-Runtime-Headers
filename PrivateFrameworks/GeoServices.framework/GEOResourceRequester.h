
@interface GEOResourceRequester : NSObject {
    <GEOResourceRequesterProxy> * _proxy;
}

+ (void)setProxyClass:(Class)arg1;
+ (id)sharedRequester;

- (void).cxx_destruct;
- (void)fetchResources:(id)arg1 force:(bool)arg2 manifestConfiguration:(id)arg3 auditToken:(id)arg4 queue:(id)arg5 handler:(id /* block */)arg6;
- (void)fetchResources:(id)arg1 force:(bool)arg2 manifestConfiguration:(id)arg3 auditToken:(id)arg4 signpostID:(unsigned long long)arg5 queue:(id)arg6 handler:(id /* block */)arg7;
- (id)init;
- (id)initWithProxy:(id)arg1;

@end
