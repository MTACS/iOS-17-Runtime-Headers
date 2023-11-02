
@interface PXPhotosStatusToggleButtonController : NSObject <PXPhotosGlobalFooterViewDelegate, UIPopoverPresentationControllerDelegate> {
    UIButton * _button;
    <PXPhotosStatusToggleButtonControllerDelegate> * _delegate;
    PXFooterViewModel * _footerViewModel;
    UIViewController * _presentedPopOverViewController;
}

@property (nonatomic, readonly) UIButton *button;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPhotosStatusToggleButtonControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleButtonAction:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)button;
- (id)delegate;
- (id)initWithFooterViewModel:(id)arg1 buttonConfiguration:(id)arg2;
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;
- (void)photosGlobalFooterViewDidChangeHeight:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
