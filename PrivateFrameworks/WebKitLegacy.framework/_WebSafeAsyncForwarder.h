
@interface _WebSafeAsyncForwarder : NSObject {
    _WebSafeForwarder * _forwarder;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithForwarder:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
