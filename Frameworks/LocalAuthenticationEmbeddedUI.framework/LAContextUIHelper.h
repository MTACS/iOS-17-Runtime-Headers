
@interface LAContextUIHelper : NSObject <LAContextObserver> {
    LAAuthorizationViewController * _ui;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)authenticateWithOptions:(id)arg1 availableMechanisms:(id)arg2 hostVC:(id)arg3 context:(id)arg4 reply:(id /* block */)arg5;
- (void)cancel;
- (void)contextDidBecomeInvalid:(id)arg1;
- (void)dealloc;

@end
