
@interface HUAccessorySettingsDetailsAnalyticsDataViewController : UIViewController <HUAccessorySettingsDetailsViewControllerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)hu_preloadContent;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (void)viewDidLoad;

@end
