
@interface PXDisplayAssetImageAnalysisOverlayView : UIView {
    PXDisplayAssetViewModel * _viewModel;
}

@property (nonatomic, readonly) PXDisplayAssetViewModel *viewModel;

+ (bool)changedImageAnalysisOverlayNeededForViewModelChange:(unsigned long long)arg1;
+ (bool)isImageAnalysisOverlayNeededForViewModel:(id)arg1;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)arg1;
- (id)viewModel;

@end
