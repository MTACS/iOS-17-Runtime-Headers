
@interface DKPromptCloudUploadViewController : OBWelcomeController {
    id /* block */  _eraseNowBlock;
    id /* block */  _hasInternetConnectivity;
    id /* block */  _presentNetworkSettings;
    id /* block */  _shouldWarnForDataUsage;
    id /* block */  _uploadThenEraseBlock;
}

@property (nonatomic, copy) id /* block */ eraseNowBlock;
@property (nonatomic, copy) id /* block */ hasInternetConnectivity;
@property (nonatomic, copy) id /* block */ presentNetworkSettings;
@property (nonatomic, copy) id /* block */ shouldWarnForDataUsage;
@property (nonatomic, copy) id /* block */ uploadThenEraseBlock;

- (void).cxx_destruct;
- (void)_eraseTapped:(id)arg1;
- (void)_uploadTapped:(id)arg1;
- (id /* block */)eraseNowBlock;
- (id /* block */)hasInternetConnectivity;
- (id)init;
- (id /* block */)presentNetworkSettings;
- (void)setEraseNowBlock:(id /* block */)arg1;
- (void)setHasInternetConnectivity:(id /* block */)arg1;
- (void)setPresentNetworkSettings:(id /* block */)arg1;
- (void)setShouldWarnForDataUsage:(id /* block */)arg1;
- (void)setUploadThenEraseBlock:(id /* block */)arg1;
- (id /* block */)shouldWarnForDataUsage;
- (id /* block */)uploadThenEraseBlock;
- (void)viewDidLoad;

@end
