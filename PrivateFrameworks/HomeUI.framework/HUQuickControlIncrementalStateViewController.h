
@interface HUQuickControlIncrementalStateViewController : HUQuickControlSingleControlViewController

@property (nonatomic, readonly) HFIncrementalStateControlItem *controlItem;

+ (Class)controlItemClass;

- (id)_createControlView;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (void)viewWillAppear:(bool)arg1;

@end
