
@interface _UIConcreteRemoteViewService : _UIRemoteViewService {
    NSUUID * _contextToken;
    NSExtension * _extension;
    bool  _overridesHostAppearance;
}

@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) <PKPlugIn> *plugin;

- (void).cxx_destruct;
- (void)beginUsing:(id /* block */)arg1;
- (id)contextToken;
- (void)endUsing:(id /* block */)arg1;
- (id)extension;
- (id)identifier;
- (id)initWithExtension:(id)arg1 andContextToken:(id)arg2;
- (id)multipleInstanceUUID;
- (bool)multipleInstances;
- (bool)overridesHostAppearance;
- (id)plugin;
- (int)processIdentifier;
- (void)setExtension:(id)arg1;
- (void)setPlugin:(id)arg1;
- (void)updateOverridesHostAppearance;
- (id)viewControllerClassName;
- (id)xpcServiceNameRoot;

@end
