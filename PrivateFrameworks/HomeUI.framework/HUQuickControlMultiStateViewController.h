
@interface HUQuickControlMultiStateViewController : HUQuickControlSingleControlViewController

@property (nonatomic, readonly) HFMultiStateControlItem *controlItem;

+ (Class)controlItemClass;

- (bool)_isCharacteristicTypeRotationDirection;
- (bool)_shouldUseWheelPickerView;
- (bool)_useOverrideStatusText;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (void)modelValueDidChange;
- (id)overrideStatusText;
- (void)viewWillAppear:(bool)arg1;

@end
