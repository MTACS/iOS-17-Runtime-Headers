
@interface _TSHostingViewInvocationTarget : NSProxy {
    id /* block */  _handler;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithHandler:(id /* block */)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
