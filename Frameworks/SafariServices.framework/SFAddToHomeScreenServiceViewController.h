
@interface SFAddToHomeScreenServiceViewController : UIViewController <SFAddToHomeScreenServiceProtocol, SFWebAppDataProviderDelegate> {
    SFWebAppDataProvider * _provider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)dataProvider:(id)arg1 didFinishWithResult:(bool)arg2;
- (void)didFetchManifestData:(id)arg1;
- (void)didFetchWebClipMetadata:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)arg1;
- (void)viewDidLoad;

@end
