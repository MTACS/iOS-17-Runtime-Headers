
@interface PXEditSCAPReviewActivity : PXActivity <PXPhotosViewDelegate> {
    PXPhotosUIViewController * _presentedGridViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (readonly) Class superclass;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (bool)allowsContextMenuInteractionForPhotosViewController:(id)arg1;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dismissGrid;
- (bool)photosViewController:(id)arg1 didPickAssetReference:(id)arg2;

@end
