
@interface PXCMMSectionHeaderController : NSObject <PXChangeObserver, PXReusableObject, PXUIViewBasicTile> {
    UIButton * _actionButton;
    long long  _actionButtonType;
    unsigned long long  _activityType;
    <PXAssetImportStatusManager> * _importStatusManager;
    bool  _isViewLoaded;
    PXMomentShareStatusPresentation * _momentShareStatusPresentation;
    UILabel * _photosLabel;
    long long  _secondaryActionButtonType;
    UIButton * _secondaryButton;
    UIView * _underlyingView;
    PXCMMViewModel * _viewModel;
}

@property (setter=_setActionButtonType:, nonatomic) long long actionButtonType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setSecondaryActionButtonType:, nonatomic) long long secondaryActionButtonType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (id)_buttonLabelFont;
+ (id)_photosLabelFont;
+ (id)new;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_deselectAllAssets;
- (void)_handleActionButtonTapped:(id)arg1;
- (void)_handleSecondaryButtonTapped:(id)arg1;
- (void)_layoutButtonWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_loadViewIfNeeded;
- (void)_selectAllAssets;
- (void)_setActionButtonType:(long long)arg1;
- (void)_setSecondaryActionButtonType:(long long)arg1;
- (void)_updateActionButtons;
- (bool)_wantsActionButtons;
- (long long)actionButtonType;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (id)init;
- (id)initWithActivityType:(unsigned long long)arg1 viewModel:(id)arg2 momentShareStatusPresentation:(id)arg3 importStatusManager:(id)arg4;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)prepareForReuse;
- (long long)secondaryActionButtonType;
- (id)view;

@end
