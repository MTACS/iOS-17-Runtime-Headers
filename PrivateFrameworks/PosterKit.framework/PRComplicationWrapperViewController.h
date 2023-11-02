
@interface PRComplicationWrapperViewController : UIViewController {
    bool  _backgroundHidden;
    UIView * _backgroundView;
    PRComplicationDescriptor * _complicationDescriptor;
    <PRComplicationWrapperViewControllerDelegate> * _delegate;
    PREditingMinusCloseBoxButton * _removeButton;
    BSUIVibrancyConfiguration * _vibrancyConfiguration;
    CHUISWidgetHostViewController * _widgetHostViewController;
}

@property (getter=isBackgroundHidden, nonatomic) bool backgroundHidden;
@property (nonatomic, readonly) PRComplicationDescriptor *complicationDescriptor;
@property (nonatomic) <PRComplicationWrapperViewControllerDelegate> *delegate;
@property (nonatomic, retain) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (nonatomic, readonly) CHUISWidgetHostViewController *widgetHostViewController;

- (void).cxx_destruct;
- (void)_removeButtonTapped;
- (void)_tapGestureRecognized:(id)arg1;
- (id)complicationDescriptor;
- (id)delegate;
- (id)initWithComplicationDescriptor:(id)arg1;
- (bool)isBackgroundHidden;
- (void)loadView;
- (void)setBackgroundHidden:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setVibrancyConfiguration:(id)arg1;
- (id)vibrancyConfiguration;
- (void)viewDidLoad;
- (id)widgetHostViewController;

@end
