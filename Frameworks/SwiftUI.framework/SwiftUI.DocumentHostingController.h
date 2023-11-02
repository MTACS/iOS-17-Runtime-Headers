
@interface SwiftUI.DocumentHostingController : _TtGC7SwiftUI19UIHostingControllerGVS_15ModifiedContentVS_7AnyViewVS_20DocumentRootModifier__ <_UIDocumentViewControllerImplHost> {
    void configuration;
    void impl;
    void lastVersion;
    void rootModifier;
}

@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) NSUndoManager *undoManager;

- (void).cxx_destruct;
- (void)_updateContentUnavailableConfigurationUsingState:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)documentDidChange;
- (void)documentDidOpen;
- (id)initWithCoder:(id)arg1;
- (id)keyCommands;
- (void)navigationItemDidUpdate;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (id)undoManager;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
