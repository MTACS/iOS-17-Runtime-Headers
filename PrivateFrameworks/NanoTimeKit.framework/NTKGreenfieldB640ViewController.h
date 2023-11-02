
@interface NTKGreenfieldB640ViewController : UIViewController <NTKGreenfieldB640ContentViewControllerDelegate, NTKGreenfieldB640WatchFacesManagerDelegate> {
    NTKGreenfieldB640Manager * _b640Manager;
    NTKGreenfieldB640ContentViewController * _contentViewController;
    <NTKGreenfieldB640ViewControllerDelegate> * _delegate;
    UINavigationController * _hiddenNavigationController;
    NTKGreenfieldCompanionLoadingViewController * _loadingViewController;
    NSString * _sourceApplicationBundleIdentifier;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKGreenfieldB640ViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didTapCancelButton;
- (id)delegate;
- (void)didFinishAddingWatchFaceToLibrary:(id)arg1;
- (void)didStartDecodingWatchFaces:(id)arg1;
- (void)greenfieldB640ContentViewController:(id)arg1 handleButtonActionEvent:(long long)arg2;
- (void)greenfieldB640ContentViewController:(id)arg1 handleWatchFaceSelectedEventAtIndex:(long long)arg2;
- (void)greenfieldB640WatchFacesManager:(id)arg1 didSelectWatchFaceAtIndex:(long long)arg2;
- (void)greenfieldB640WatchFacesManager:(id)arg1 didSelectWatchFaceWithError:(id)arg2;
- (void)greenfieldB640WatchFacesManager:(id)arg1 updateStateToError:(id)arg2;
- (void)greenfieldB640WatchFacesManager:(id)arg1 updateStateToSelectWatchFacesState:(id)arg2;
- (id)initWithUrl:(id)arg1 sourceApplicationBundleIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
