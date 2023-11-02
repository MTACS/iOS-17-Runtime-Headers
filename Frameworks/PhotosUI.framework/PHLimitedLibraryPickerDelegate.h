
@interface PHLimitedLibraryPickerDelegate : NSObject <PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UINavigationControllerDelegate> {
    PLAssetsdClient * _assetsdClient;
    id /* block */  _dismissalBlock;
    id /* block */  _finishedPickingBlock;
}

@property (nonatomic, retain) PLAssetsdClient *assetsdClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissalBlock;
@property (nonatomic, copy) id /* block */ finishedPickingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetsdClient;
- (id /* block */)dismissalBlock;
- (id /* block */)finishedPickingBlock;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setAssetsdClient:(id)arg1;
- (void)setDismissalBlock:(id /* block */)arg1;
- (void)setFinishedPickingBlock:(id /* block */)arg1;

@end
