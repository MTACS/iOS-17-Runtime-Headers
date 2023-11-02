
@interface PUCompositeVideoActivity : PXActivity <PXChangeObserver> {
    bool  _cancelled;
    AVAssetExportSession * _exportSession;
    PUCompositeVideoGenerator * _generator;
    UIViewController * _presenterViewController;
    PXAlertController * _progressController;
}

@property (getter=isCancelled, nonatomic) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AVAssetExportSession *exportSession;
@property (nonatomic, retain) PUCompositeVideoGenerator *generator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *presenterViewController;
@property (nonatomic, retain) PXAlertController *progressController;
@property (readonly) Class superclass;

+ (bool)canPerformWithAssets:(id)arg1;

- (void).cxx_destruct;
- (void)_exportGeneratedVideo;
- (void)_finishWithSuccess:(bool)arg1 cancelled:(bool)arg2;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_sucessfullyFinishedSaving:(bool)arg1 error:(id)arg2;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)exportSession;
- (id)generator;
- (bool)isCancelled;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)prepareWithActivityItems:(id)arg1;
- (void)prepareWithViewController:(id)arg1 assets:(id)arg2;
- (id)presenterViewController;
- (id)progressController;
- (void)setCancelled:(bool)arg1;
- (void)setExportSession:(id)arg1;
- (void)setGenerator:(id)arg1;
- (void)setPresenterViewController:(id)arg1;
- (void)setProgressController:(id)arg1;

@end
