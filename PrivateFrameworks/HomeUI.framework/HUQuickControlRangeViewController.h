
@interface HUQuickControlRangeViewController : HUQuickControlSingleControlViewController

@property (nonatomic, readonly) HFRangeControlItem *controlItem;
@property (nonatomic, readonly) HUQuickControlSliderViewProfile *viewProfile;

+ (Class)controlItemClass;

- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;

@end
