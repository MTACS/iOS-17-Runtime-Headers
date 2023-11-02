
@interface HULocationEventSelectedLocationItem : HFItem {
    HFEventBuilder<HFLocationEventBuilder> * _eventBuilder;
    HMHome * _home;
    bool  _locationCanBeEdited;
}

@property (nonatomic, retain) HFEventBuilder<HFLocationEventBuilder> *eventBuilder;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) bool locationCanBeEdited;

- (void).cxx_destruct;
- (bool)_locationIsHome;
- (id)_locationTitle;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)eventBuilder;
- (id)home;
- (id)init;
- (id)initWithEvent:(id)arg1 inHome:(id)arg2;
- (bool)locationCanBeEdited;
- (void)setEventBuilder:(id)arg1;
- (void)setLocationCanBeEdited:(bool)arg1;

@end
