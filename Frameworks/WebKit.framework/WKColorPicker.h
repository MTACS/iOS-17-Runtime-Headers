
@interface WKColorPicker : NSObject <UIColorPickerViewControllerDelegate, UIPopoverPresentationControllerDelegate, WKFormControl> {
    struct RetainPtr<UIColorPickerViewController> { 
        void *m_ptr; 
    }  _colorPickerViewController;
    WKContentView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)colorPickerViewControllerDidFinish:(id)arg1;
- (void)colorPickerViewControllerDidSelectColor:(id)arg1;
- (void)configurePresentation;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (id)focusedElementSuggestedColors;
- (id)initWithView:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)selectColor:(id)arg1;
- (void)updateColorPickerState;

@end
