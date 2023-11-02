
@interface HUQuickControlPrimaryStateViewController : HUQuickControlSingleControlViewController

@property (nonatomic, readonly) HFControlItem<HFPrimaryStateWriter> *controlItem;

+ (Class)controlItemClass;
+ (id)controlItemPredicate;

- (bool)_isCharacteristicTypeRotationDirection;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (void)viewWillAppear:(bool)arg1;

@end
