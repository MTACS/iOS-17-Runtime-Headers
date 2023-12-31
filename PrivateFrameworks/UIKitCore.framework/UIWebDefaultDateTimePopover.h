
@interface UIWebDefaultDateTimePopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl> {
    UIWebDateTimePopoverViewController * _webDateTimeViewController;
}

@property (nonatomic, retain) UIWebDateTimePopoverViewController *_webDateTimeViewController;

- (id)_webDateTimeViewController;
- (void)clear:(id)arg1;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;
- (void)set_webDateTimeViewController:(id)arg1;

@end
