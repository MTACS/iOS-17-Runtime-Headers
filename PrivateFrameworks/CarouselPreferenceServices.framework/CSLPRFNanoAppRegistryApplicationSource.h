
@interface CSLPRFNanoAppRegistryApplicationSource : NSObject {
    <CSLPRFNanoAppRegistryApplicationSourceDelegate> * _delegate;
    NARApplicationWorkspace * _workspace;
}

@property (nonatomic) <CSLPRFNanoAppRegistryApplicationSourceDelegate> *delegate;

- (void).cxx_destruct;
- (void)_appsDidChange;
- (void)allApplicationsWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
