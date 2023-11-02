
@interface ExtensionController : _EXExtensionViewController {
    void contentViewController;
    void xpcConnection;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (bool)shouldAcceptXPCConnection:(id)arg1;

@end
