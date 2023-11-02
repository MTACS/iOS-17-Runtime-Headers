
@interface _UIStickerPickerKeyboardSession : NSObject <_UIStickerPickerViewControllerDelegate> {
    <_UIStickerPickerKeyboardSessionDelegate> * _delegate;
    _UIStickerPickerViewController * _stickerPicker;
    UIResponder<UITextInput> * _textInput;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property <_UIStickerPickerKeyboardSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)insertStickerFromItemProvider:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)presentWithTextInput:(id)arg1 view:(id)arg2;
- (bool)remoteHandlesRecentsStickerDonation;
- (void)setDelegate:(id)arg1;
- (void)stickerPickerViewControllerDidDismiss;

@end
