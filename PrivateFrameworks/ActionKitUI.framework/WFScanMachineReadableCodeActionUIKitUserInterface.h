
@interface WFScanMachineReadableCodeActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFScanMachineReadableCodeActionUserInterface> {
    id /* block */  _completionHandler;
    UINavigationController * _navigationController;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)finishWithCode:(id)arg1 error:(id)arg2;
- (id)navigationController;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setNavigationController:(id)arg1;
- (void)showWithCompletionHandler:(id /* block */)arg1;

@end
