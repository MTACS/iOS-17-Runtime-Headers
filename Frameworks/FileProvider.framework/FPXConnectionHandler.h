
@interface FPXConnectionHandler : _EXExtension <_EXConnectionHandler> {
    FPXExtensionContext * _currentContext;
}

- (void).cxx_destruct;
- (Class)delegateClass;
- (void)invalidateCurrentContext;
- (id)makeNewContext;
- (bool)shouldAcceptConnection:(id)arg1;
- (bool)shouldAcceptXPCConnection:(id)arg1;

@end
