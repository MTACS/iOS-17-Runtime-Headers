
@interface TeaFoundation.BridgedResolver : NSObject <TFResolver> {
    void resolver;
}

- (void).cxx_destruct;
- (id)init;
- (id)resolveClass:(Class)arg1;
- (id)resolveClass:(Class)arg1 contextBlock:(id /* block */)arg2;
- (id)resolveClass:(Class)arg1 name:(id)arg2;
- (id)resolveClass:(Class)arg1 name:(id)arg2 contextBlock:(id /* block */)arg3;
- (id)resolveOptionalClass:(Class)arg1;
- (id)resolveOptionalClass:(Class)arg1 contextBlock:(id /* block */)arg2;
- (id)resolveOptionalClass:(Class)arg1 name:(id)arg2;
- (id)resolveOptionalClass:(Class)arg1 name:(id)arg2 contextBlock:(id /* block */)arg3;
- (id)resolveOptionalProtocol:(id)arg1;
- (id)resolveOptionalProtocol:(id)arg1 contextBlock:(id /* block */)arg2;
- (id)resolveOptionalProtocol:(id)arg1 name:(id)arg2;
- (id)resolveOptionalProtocol:(id)arg1 name:(id)arg2 contextBlock:(id /* block */)arg3;
- (id)resolveProtocol:(id)arg1;
- (id)resolveProtocol:(id)arg1 contextBlock:(id /* block */)arg2;
- (id)resolveProtocol:(id)arg1 name:(id)arg2;
- (id)resolveProtocol:(id)arg1 name:(id)arg2 contextBlock:(id /* block */)arg3;

@end
