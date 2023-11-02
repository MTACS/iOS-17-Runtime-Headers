
@interface HUQuickControlTVInputSourceViewController : HUQuickControlSingleControlViewController

@property (nonatomic, readonly) HFTVInputControlItem *controlItem;

+ (Class)controlItemClass;
+ (id)controlItemPredicate;

- (id)_filterInputValues:(id)arg1;
- (bool)_shouldWriteInputValue:(id)arg1;
- (id)_toPickerViewItems:(id)arg1;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;

@end
