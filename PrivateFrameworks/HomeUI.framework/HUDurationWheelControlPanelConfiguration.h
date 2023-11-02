
@interface HUDurationWheelControlPanelConfiguration : NSObject <HUControlPanelConfiguration>

@property (nonatomic, readonly) Class cellClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HUControlPanelRule> *rule;
@property (readonly) Class superclass;

+ (id)_valuesBetweenMinValue:(id)arg1 maxValue:(id)arg2 stepValue:(id)arg3;

- (id)_characteristicTypesFromControlPanelItem:(id)arg1;
- (Class)cellClass;
- (id)rule;
- (id)sectionFooterForItem:(id)arg1 forSourceItem:(id)arg2;
- (id)sectionTitleForItem:(id)arg1 forSourceItem:(id)arg2;
- (void)setupControlsForCell:(id)arg1 item:(id)arg2;
- (bool)shouldShowSectionFooterForItem:(id)arg1;
- (bool)shouldShowSectionTitleForItem:(id)arg1;

@end
