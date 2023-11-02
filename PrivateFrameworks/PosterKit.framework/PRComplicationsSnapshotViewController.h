
@interface PRComplicationsSnapshotViewController : UIViewController <BSInvalidatable, PRComplicationDisplaying> {
    NSArray * _complicationDescriptors;
    long long  _layoutStyle;
    FBSScene * _scene;
    UIView * _touchBlockingView;
    BSUIVibrancyConfiguration * _vibrancyConfiguration;
    NSMutableDictionary * _widgetViewControllersByUniqueIdentifier;
}

@property (nonatomic, retain) NSArray *complicationDescriptors;
@property (getter=isComplicationUserInteractionEnabled, nonatomic) bool complicationUserInteractionEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) BSUIVibrancyConfiguration *vibrancyConfiguration;

- (void).cxx_destruct;
- (id)_hostViewControllerForComplicationDescriptor:(id)arg1;
- (void)_updateTintParametersForWidgetHostViewController:(id)arg1;
- (id)complicationDescriptors;
- (void)complicationsDidEndDisplaying;
- (void)complicationsWillDisplay;
- (id)initWithComplicationDescriptors:(id)arg1 layoutStyle:(long long)arg2;
- (id)initWithScene:(id)arg1 complicationLayoutProvider:(id)arg2;
- (void)invalidate;
- (bool)isComplicationUserInteractionEnabled;
- (void)setComplicationDescriptors:(id)arg1;
- (void)setComplicationUserInteractionEnabled:(bool)arg1;
- (void)setVibrancyConfiguration:(id)arg1;
- (id)vibrancyConfiguration;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
