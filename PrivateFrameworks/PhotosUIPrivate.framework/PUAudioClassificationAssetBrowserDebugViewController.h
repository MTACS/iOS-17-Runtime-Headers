
@interface PUAudioClassificationAssetBrowserDebugViewController : PUPhotosAlbumViewController {
    NSString * _audioClassificationName;
}

@property (nonatomic, copy) NSString *audioClassificationName;

- (void).cxx_destruct;
- (id)_cloneAsset:(id)arg1 toDirectory:(id)arg2;
- (void)_fileRadarWithIncorrectAssets:(id)arg1;
- (void)_presentTapToRadar;
- (bool)_writeDiagnosticsToURL:(id)arg1 incorrectAssets:(id)arg2;
- (id)audioClassificationName;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out bool*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (void)setAudioClassificationName:(id)arg1;
- (void)viewDidLoad;

@end
