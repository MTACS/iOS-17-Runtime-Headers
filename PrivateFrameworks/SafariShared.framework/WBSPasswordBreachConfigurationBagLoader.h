
@interface WBSPasswordBreachConfigurationBagLoader : NSObject <WBSRemotePlistControllerDelegate> {
    WBSRemotePlistController * _remotePlistController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedLoader;

- (void).cxx_destruct;
- (void)dealloc;
- (void)getConfigurationBagWithCompletionHandler:(id /* block */)arg1;
- (id)init;

@end
