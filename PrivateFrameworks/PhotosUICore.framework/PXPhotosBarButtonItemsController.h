
@interface PXPhotosBarButtonItemsController : NSObject {
    _PXPhotosBarButtonSpecManager * _specManager;
    PXPhotosViewModel * _viewModel;
}

@property (nonatomic, readonly) _PXPhotosBarButtonSpecManager *specManager;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;

- (void).cxx_destruct;
- (id)_createBarButtonItemWithTitle:(id)arg1 orSystemItem:(long long)arg2 orSystemIconName:(id)arg3 target:(id)arg4 action:(SEL)arg5 menuAction:(SEL)arg6;
- (id)createBarButtonItemWithSystemIconName:(id)arg1 target:(id)arg2 action:(SEL)arg3 menuAction:(SEL)arg4;
- (id)createBarButtonItemWithSystemItem:(long long)arg1 target:(id)arg2 action:(SEL)arg3 menuAction:(SEL)arg4;
- (id)createBarButtonItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 menuAction:(SEL)arg4;
- (id)init;
- (id)initWithExtendedTraitCollection:(id)arg1 viewModel:(id)arg2;
- (id)specManager;
- (id)viewModel;

@end
