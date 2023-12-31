
@interface UIWebFormDateTimePeripheral : NSObject <UIFormPeripheral> {
    <UIWebFormControl> * _control;
    DOMHTMLInputElement * _inputElement;
}

@property (nonatomic, retain) <UIWebFormControl> *_control;
@property (nonatomic, retain) DOMHTMLInputElement *_inputElement;

+ (id)createPeripheralWithDOMHTMLInputElement:(id)arg1;

- (id)_control;
- (long long)_datePickerModeForInputType:(id)arg1;
- (id)_inputElement;
- (id)assistantView;
- (void)beginEditing;
- (void)dealloc;
- (void)endEditing;
- (id)initWithDOMHTMLInputElement:(id)arg1;
- (void)set_control:(id)arg1;
- (void)set_inputElement:(id)arg1;

@end
