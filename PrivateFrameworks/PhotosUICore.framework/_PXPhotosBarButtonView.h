
@interface _PXPhotosBarButtonView : UIView <PXChangeObserver> {
    SEL  _action;
    UIBarButtonItem * _barButtonItem;
    PXCuratedLibraryOverlayButton * _button;
    id  _changeDeliveryHandle;
    PXPhotosHeaderCustomizationModel * _headerCustomizationModel;
    SEL  _menuAction;
    _PXPhotosBarButtonSpecManager * _specManager;
    NSString * _systemIconImageName;
    long long  _systemItem;
    id  _target;
    NSString * _title;
    PXUpdater * _updater;
    PXPhotosViewModel * _viewModel;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic) UIBarButtonItem *barButtonItem;
@property (nonatomic, readonly) PXCuratedLibraryOverlayButton *button;
@property (nonatomic, retain) id changeDeliveryHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXPhotosHeaderCustomizationModel *headerCustomizationModel;
@property (nonatomic, readonly) SEL menuAction;
@property (nonatomic, readonly) _PXPhotosBarButtonSpecManager *specManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *systemIconImageName;
@property (nonatomic, readonly) long long systemItem;
@property (nonatomic, readonly) id target;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;

- (void).cxx_destruct;
- (id)_createButtonConfiguration;
- (void)_handleAction;
- (void)_handleMenuAction;
- (void)_handleWillDismissMenu;
- (void)_handleWillDisplayMenu;
- (void)_invalidateAlpha;
- (void)_invalidateButtons;
- (void)_pauseChangeDelivery;
- (void)_resumeChangeDeliveryIfPossible;
- (void)_updateAlpha;
- (void)_updateButtons;
- (SEL)action;
- (id)barButtonItem;
- (id)button;
- (id)changeDeliveryHandle;
- (void)dealloc;
- (id)headerCustomizationModel;
- (id)initWithTitle:(id)arg1 orSystemItem:(long long)arg2 orSystemIconName:(id)arg3 target:(id)arg4 action:(SEL)arg5 menuAction:(SEL)arg6 specManager:(id)arg7 viewModel:(id)arg8;
- (void)layoutSubviews;
- (SEL)menuAction;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setBarButtonItem:(id)arg1;
- (void)setChangeDeliveryHandle:(id)arg1;
- (id)specManager;
- (id)systemIconImageName;
- (long long)systemItem;
- (id)target;
- (void)tintColorDidChange;
- (id)title;
- (id)updater;
- (id)viewModel;

@end
