
@interface VCScreenCapturePicker : VCObject {
    bool  _active;
    <VCScreenCapturePickerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    SCContentSharingPicker * _picker;
    SCContentSharingPickerConfiguration * _pickerConfiguration;
}

@property (nonatomic) bool active;
@property (nonatomic, readonly) SCContentSharingPickerConfiguration *pickerConfiguration;

- (bool)active;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (id)pickerConfiguration;
- (void)setActive:(bool)arg1;
- (void)setRepickingAllowed:(bool)arg1;
- (void)showWithStream:(id)arg1;

@end
