
@interface TeaFoundation.BridgedCallbackRegistration : NSObject <TFCallbackRegistration> {
    void callback;
}

- (void).cxx_destruct;
- (id)init;
- (void)whenResolvingClass:(Class)arg1 scope:(id)arg2 callbackBlock:(id /* block */)arg3;
- (void)whenResolvingProtocol:(id)arg1 scope:(id)arg2 callbackBlock:(id /* block */)arg3;

@end
