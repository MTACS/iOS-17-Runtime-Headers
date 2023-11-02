
@interface _UIDocumentViewControllerImpl : NSObject {
    UIDocument * _document;
    NSObject<OS_dispatch_queue> * _documentBackgroundQueue;
    struct { 
        unsigned int isPresentedFromDocumentBrowser : 1; 
        unsigned int hasReceivedDocumentDidOpen : 1; 
    }  _flags;
    unsigned long long  _lastKnownState;
    _UIBarButtonItemActionBinding * _undoManagerBinding;
    UIBarButtonItemGroup * _undoRedoItemGroup;
    UIViewController<_UIDocumentViewControllerImplHost> * _viewController;
}

@property (nonatomic, retain) UIDocument *document;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *documentBackgroundQueue;
@property (nonatomic) unsigned long long lastKnownState;
@property (nonatomic, retain) _UIBarButtonItemActionBinding *undoManagerBinding;
@property (nonatomic, readonly) UIBarButtonItemGroup *undoRedoItemGroup;
@property (nonatomic, readonly) UIViewController<_UIDocumentViewControllerImplHost> *viewController;

- (void).cxx_destruct;
- (void)__openDocumentFromURL:(id)arg1;
- (void)__updateNavigationItemBackAction;
- (void)_closeDocumentIfNecessary;
- (void)_configureInitialNavigationItem;
- (void)_documentDidOpen;
- (void)_documentStateChanged:(id)arg1;
- (bool)_isConsideredVisible;
- (void)_localizedNameChanged:(id)arg1;
- (void)_presentDocumentPicker;
- (void)_registerDocumentObservers;
- (bool)_supportsDocumentPicker;
- (void)_unregisterDocumentObservers;
- (void)_updateContentUnavailableConfigurationUsingState:(id)arg1;
- (bool)_updateIsPresentedFromDocumentBrowser;
- (void)_updateNavigationItemIfNecessary;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (id)document;
- (id)documentBackgroundQueue;
- (id)initWithViewController:(id)arg1;
- (id)keyCommands;
- (unsigned long long)lastKnownState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)openDocumentIfNecessaryWithCompletionHandler:(id /* block */)arg1;
- (void)redo:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setDocumentBackgroundQueue:(id)arg1;
- (void)setLastKnownState:(unsigned long long)arg1;
- (void)setUndoManagerBinding:(id)arg1;
- (void)undo:(id)arg1;
- (id)undoManagerBinding;
- (id)undoRedoItemGroup;
- (id)viewController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
