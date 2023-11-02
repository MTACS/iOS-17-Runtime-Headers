
@interface _UITextFormattingDeferredFontPickingDelegate : NSObject <UIFontPickerViewControllerDelegate> {
    double  _fontSize;
    <UIResponderStandardEditActions> * _inputController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double fontSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UIResponderStandardEditActions> *inputController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_removeAssociatedDelegate;
- (void)fontPickerViewControllerDidCancel:(id)arg1;
- (void)fontPickerViewControllerDidPickFont:(id)arg1;
- (double)fontSize;
- (id)inputController;
- (void)setFontSize:(double)arg1;
- (void)setInputController:(id)arg1;

@end
