
@interface PXPhotosFilterToggleButtonController : NSObject <PXChangeObserver> {
    UIButton * _button;
    PXPhotosViewModel * _viewModel;
}

@property (nonatomic, readonly) UIButton *button;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;

- (void).cxx_destruct;
- (void)_setupButtonWithConfiguration:(id)arg1;
- (void)_updateButton;
- (id)button;
- (id)initWithViewModel:(id)arg1 buttonConfiguration:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)viewModel;

@end
