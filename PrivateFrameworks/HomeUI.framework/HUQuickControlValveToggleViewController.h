
@interface HUQuickControlValveToggleViewController : HUQuickControlSingleControlViewController {
    HUQuickControlValveToggleView * _controlView;
}

@property (nonatomic, readonly) HFControlItem<HFPrimaryStateWriter> *controlItem;
@property (nonatomic, retain) HUQuickControlValveToggleView *controlView;

+ (Class)controlItemClass;
+ (id)controlItemPredicate;

- (void).cxx_destruct;
- (id)controlToViewValueTransformer;
- (id)controlView;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (void)setControlView:(id)arg1;

@end
