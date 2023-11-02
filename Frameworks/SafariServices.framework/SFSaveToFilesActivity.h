
@interface SFSaveToFilesActivity : _SFActivity <_SFSaveToFilesOperationDelegate> {
    _SFActivityItemCustomizationController * _customizationController;
    _SFSaveToFilesOperation * _operation;
    bool  _presentAnimated;
    id /* block */  _presentationCompletionHandler;
    UIViewController * _presentedViewController;
    UIViewController * _presenterViewController;
    bool  _supportsDownloads;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsDownloads;

- (void).cxx_destruct;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)_managesOwnPresentation;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)activityType;
- (id)customizationControllerForSaveToFilesOperation:(id)arg1;
- (id)initWithActivityItemProviderCollection:(id)arg1 customizationController:(id)arg2;
- (void)saveToFilesOperation:(id)arg1 didFinishWithSuccess:(bool)arg2;
- (void)saveToFilesOperation:(id)arg1 presentViewController:(id)arg2;
- (bool)saveToFilesOperationShouldDismissViewControllerAfterCompletion:(id)arg1;
- (bool)saveToFilesOperationSupportsDownloads:(id)arg1;
- (void)setSupportsDownloads:(bool)arg1;
- (bool)supportsDownloads;

@end
