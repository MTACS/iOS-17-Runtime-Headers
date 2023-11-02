
@interface TeaFoundation.BridgedContext : NSObject <TFContext> {
    void context;
}

- (void).cxx_destruct;
- (id)init;
- (void)useObject:(id)arg1 forClass:(Class)arg2;
- (void)useObject:(id)arg1 forClass:(Class)arg2 name:(id)arg3;
- (void)useObject:(id)arg1 forProtocol:(id)arg2;
- (void)useObject:(id)arg1 forProtocol:(id)arg2 name:(id)arg3;
- (void)whenResolvingClass:(Class)arg1 scope:(id)arg2 callbackBlock:(id /* block */)arg3;
- (void)whenResolvingProtocol:(id)arg1 scope:(id)arg2 callbackBlock:(id /* block */)arg3;

@end
