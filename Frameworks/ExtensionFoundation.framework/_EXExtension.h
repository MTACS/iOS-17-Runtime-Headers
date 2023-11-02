
@interface _EXExtension : NSObject {
    id  _delegate;
    bool  _hasSwiftEntryPoint;
    _EXExtensionIdentity * _internalRep;
    id  _strongDelegate;
}

@property (readonly) NSString *bundleIdentifier;
@property (readonly) <_EXExtensionConfigurationProviding> *configuration;
@property (nonatomic) id delegate;
@property (readonly) Class delegateClass;
@property bool hasSwiftEntryPoint;
@property (readonly) struct { unsigned int x1[8]; } hostAuditToken;
@property (nonatomic, retain) _EXExtensionIdentity *internalRep;
@property (nonatomic, retain) id strongDelegate;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)configuration;
- (id)delegate;
- (Class)delegateClass;
- (void)didFinishLaunching;
- (bool)hasSwiftEntryPoint;
- (struct { unsigned int x1[8]; })hostAuditToken;
- (id)internalRep;
- (bool)loadDelegate;
- (void)prepareForSceneConnectionWithConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasSwiftEntryPoint:(bool)arg1;
- (void)setInternalRep:(id)arg1;
- (void)setStrongDelegate:(id)arg1;
- (bool)shouldAcceptConnection:(id)arg1;
- (id)strongDelegate;
- (void)willFinishLaunching;

@end
