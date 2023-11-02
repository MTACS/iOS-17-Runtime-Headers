
@interface HULocationTriggerSelectedLocationItem : HFItem {
    HFEventTriggerBuilder * _triggerBuilder;
}

@property (nonatomic, readonly) bool locationCanBeEdited;
@property (nonatomic, readonly) HFEventTriggerBuilder *triggerBuilder;

- (void).cxx_destruct;
- (bool)_locationIsHome;
- (id)_locationTitle;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)init;
- (id)initWithTriggerBuilder:(id)arg1;
- (bool)locationCanBeEdited;
- (id)triggerBuilder;

@end
