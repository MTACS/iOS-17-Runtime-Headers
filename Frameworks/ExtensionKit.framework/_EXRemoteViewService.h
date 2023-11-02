
@interface _EXRemoteViewService : _UIRemoteViewService {
    NSUUID * _contextToken;
    _EXExtensionProcessHandle * _extensionProcess;
}

@property (readonly) _EXExtensionProcessHandle *extensionProcess;

- (void).cxx_destruct;
- (void)beginUsing:(id /* block */)arg1;
- (id)contextToken;
- (void)endUsing:(id /* block */)arg1;
- (id)extensionProcess;
- (id)identifier;
- (id)initWithExtensionProcess:(id)arg1 contextToken:(id)arg2;
- (bool)multipleInstances;
- (id)multipleInstancesUUID;
- (bool)overridesHostAppearance;
- (int)processIdentifier;
- (id)viewControllerClassName;
- (id)xpcServiceNameRoot;

@end
