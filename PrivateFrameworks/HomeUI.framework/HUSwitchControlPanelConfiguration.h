
@interface HUSwitchControlPanelConfiguration : NSObject <HUControlPanelConfiguration>

@property (nonatomic, readonly) Class cellClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HUControlPanelRule> *rule;
@property (readonly) Class superclass;

- (Class)cellClass;
- (id)rule;
- (void)setupControlsForCell:(id)arg1 item:(id)arg2;
- (bool)shouldShowSectionTitleForItem:(id)arg1;
- (id)valueTransformerForControlItem:(id)arg1;

@end