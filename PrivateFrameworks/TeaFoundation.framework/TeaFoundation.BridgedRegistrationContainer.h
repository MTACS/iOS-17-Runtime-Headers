
@interface TeaFoundation.BridgedRegistrationContainer : NSObject <TFRegistrationContainer> {
    void registrationContainer;
}

- (void).cxx_destruct;
- (id)init;
- (id)registerClass:(Class)arg1 factory:(id /* block */)arg2;
- (id)registerClass:(Class)arg1 name:(id)arg2 factory:(id /* block */)arg3;
- (id)registerProtocol:(id)arg1 factory:(id /* block */)arg2;
- (id)registerProtocol:(id)arg1 name:(id)arg2 factory:(id /* block */)arg3;
- (id)registerUncheckedProtocol:(id)arg1 factory:(id /* block */)arg2;
- (id)registerUncheckedProtocol:(id)arg1 name:(id)arg2 factory:(id /* block */)arg3;

@end
