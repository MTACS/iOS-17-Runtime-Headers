
@interface _EXConnectionHandlerExtension : _EXExtension {
    <_EXConnectionHandler> * _connectionHandler;
    id  _principalObject;
}

@property (retain) <_EXConnectionHandler> *connectionHandler;
@property (retain) id principalObject;

// Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation

- (void).cxx_destruct;
- (id)connectionHandler;
- (Class)delegateClass;
- (void)didFinishLaunching;
- (id)principalObject;
- (void)setConnectionHandler:(id)arg1;
- (void)setPrincipalObject:(id)arg1;
- (bool)shouldAcceptConnection:(id)arg1;
- (void)willFinishLaunching;

// Image: /System/Library/Frameworks/ExtensionKit.framework/ExtensionKit

- (void)prepareForSceneConnectionWithConfiguration:(id)arg1;

@end
