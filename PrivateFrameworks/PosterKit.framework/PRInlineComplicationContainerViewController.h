
@interface PRInlineComplicationContainerViewController : UIViewController <BSInvalidatable> {
    PRComplicationDescriptor * _complicationDescriptor;
    <PRInlineComplicationContainerViewControllerDelegate> * _delegate;
    bool  _focused;
    CHUISWidgetHostViewController * _hostViewController;
    BSUIVibrancyConfiguration * _vibrancyConfiguration;
}

@property (nonatomic, retain) PRComplicationDescriptor *complicationDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRInlineComplicationContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isFocused, nonatomic) bool focused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) BSUIVibrancyConfiguration *vibrancyConfiguration;

- (void).cxx_destruct;
- (void)_tapGestureRecognized:(id)arg1;
- (id)complicationDescriptor;
- (id)delegate;
- (id)initWithComplicationDescriptor:(id)arg1;
- (void)invalidate;
- (bool)isFocused;
- (void)setComplicationDescriptor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFocused:(bool)arg1;
- (void)setFocused:(bool)arg1 animated:(bool)arg2;
- (void)setFocused:(bool)arg1 animationSettings:(id)arg2;
- (void)setVibrancyConfiguration:(id)arg1;
- (id)vibrancyConfiguration;
- (void)viewDidLoad;

@end
