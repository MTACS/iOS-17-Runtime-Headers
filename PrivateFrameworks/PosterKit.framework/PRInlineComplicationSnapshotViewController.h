
@interface PRInlineComplicationSnapshotViewController : UIViewController <BSInvalidatable, PRComplicationDisplaying> {
    PRComplicationDescriptor * _complicationDescriptor;
    CHUISWidgetHostViewController * _hostViewController;
    FBSScene * _scene;
    UIView * _touchBlockingView;
    BSUIVibrancyConfiguration * _vibrancyConfiguration;
}

@property (nonatomic, retain) PRComplicationDescriptor *complicationDescriptor;
@property (getter=isComplicationUserInteractionEnabled, nonatomic) bool complicationUserInteractionEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) BSUIVibrancyConfiguration *vibrancyConfiguration;

- (void).cxx_destruct;
- (id)_hostViewControllerForComplicationDescriptor:(id)arg1;
- (id)complicationDescriptor;
- (void)complicationsDidEndDisplaying;
- (void)complicationsWillDisplay;
- (id)initWithComplicationDescriptor:(id)arg1;
- (id)initWithScene:(id)arg1 complicationLayoutProvider:(id)arg2;
- (void)invalidate;
- (bool)isComplicationUserInteractionEnabled;
- (void)setComplicationDescriptor:(id)arg1;
- (void)setComplicationUserInteractionEnabled:(bool)arg1;
- (void)setVibrancyConfiguration:(id)arg1;
- (id)vibrancyConfiguration;
- (void)viewDidLoad;

@end
