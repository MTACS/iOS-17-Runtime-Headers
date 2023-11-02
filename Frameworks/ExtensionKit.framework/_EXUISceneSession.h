
@interface _EXUISceneSession : _EXSceneSession <NSXPCListenerDelegate> {
    _EXPromise * _initializationPromise;
    _EXExtensionRootViewController * _rootViewController;
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) _EXPromise *initializationPromise;
@property (nonatomic, retain) _EXExtensionRootViewController *rootViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)connectToScene:(id)arg1;
- (id)initWithExtension:(id)arg1;
- (id)initializationPromise;
- (id)makeConfigurationWithParameters:(id)arg1;
- (id)makeConnectionResponse;
- (id)makeSceneWithError:(id*)arg1;
- (id)rootViewController;
- (void)setInitializationPromise:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
