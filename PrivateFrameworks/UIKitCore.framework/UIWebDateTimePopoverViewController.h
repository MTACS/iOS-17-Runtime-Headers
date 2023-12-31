
@interface UIWebDateTimePopoverViewController : UIViewController {
    <UIWebFormControl> * _innerWebDateTimeControl;
}

@property (nonatomic, retain) <UIWebFormControl> *_innerWebDateTimeControl;

- (id)_innerWebDateTimeControl;
- (void)dealloc;
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;
- (void)loadView;
- (void)set_innerWebDateTimeControl:(id)arg1;

@end
