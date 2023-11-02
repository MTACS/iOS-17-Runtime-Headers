
@interface WFHUShortcutsTriggerViewAccessoryViewController : UIViewController {
    UIViewController * _accessoryPickerViewController;
    <WFHUShortcutsTriggerViewAccessoryViewControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) UIViewController *accessoryPickerViewController;
@property (nonatomic) <WFHUShortcutsTriggerViewAccessoryViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)accessoryPickerViewController;
- (void)cancelEditor;
- (id)delegate;
- (void)dismissEditor;
- (id)initWithHome:(id)arg1 services:(id)arg2;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
