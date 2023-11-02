
@interface PUPhotosDetailsViewController : PXPhotosDetailsUIViewController <PUAccessoryContentViewController, PUAssetViewModelChangeObserver> {
    <PUAccessoryContentViewControllerDelegate> * _accessoryContentViewControllerDelegate;
    PUAssetViewModel * _assetViewModel;
    double  _maxVisibleHeightInEdit;
    struct { 
        bool scrollViewControllerDidScroll; 
        bool scrollViewControllerContentBoundsDidChange; 
    }  _superRespondsTo;
}

@property (nonatomic) <PUAccessoryContentViewControllerDelegate> *accessoryContentViewControllerDelegate;
@property (nonatomic, readonly) PUAssetViewModel *assetViewModel;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxVisibleHeightInEdit;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumContentSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_configureVisualSearchTopResultItem;
- (void)_updateContentUnavailableConfigurationUsingState:(id)arg1;
- (id)accessoryContentViewControllerDelegate;
- (id)assetViewModel;
- (bool)contentAreaContainsPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBoundsInCoordinateSpace:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)editingDidChange:(bool)arg1;
- (void)editorHeightDidChange;
- (id)initWithContext:(id)arg1 configuration:(id)arg2;
- (id)initWithContext:(id)arg1 configuration:(id)arg2 assetViewModel:(id)arg3;
- (id)initWithContext:(id)arg1 options:(unsigned long long)arg2;
- (double)maxVisibleHeightInEdit;
- (struct CGSize { double x1; double x2; })minimumContentSize;
- (unsigned long long)occludedContentEdges;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })px_safeAreaInsets;
- (void)scrollViewControllerContentBoundsDidChange:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)setAccessoryContentViewControllerDelegate:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 changeReason:(long long)arg2;
- (void)setEmpty:(bool)arg1;
- (void)setMaxVisibleContentInsetsWhenInEdit:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMaxVisibleHeightInEdit:(double)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)visualSearchLookupWidgetDidTap;

@end
