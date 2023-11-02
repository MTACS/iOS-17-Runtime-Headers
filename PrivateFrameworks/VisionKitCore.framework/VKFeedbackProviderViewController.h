
@interface VKFeedbackProviderViewController : UIViewController {
    NSArray * _attachments;
    <VKFeedbackProviderViewControllerDelegate> * _delegate;
    unsigned long long  _options;
    NSMutableSet * _selectedAttachments;
    UIWindow * _window;
}

@property <VKFeedbackProviderViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_contentRowButtonWithTitle:(id)arg1 tag:(long long)arg2 allowToggle:(bool)arg3;
- (void)_createContentView;
- (void)_toggleContentRowButton:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithOptions:(unsigned long long)arg1 attachments:(id)arg2;
- (void)loadView;
- (void)present;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
