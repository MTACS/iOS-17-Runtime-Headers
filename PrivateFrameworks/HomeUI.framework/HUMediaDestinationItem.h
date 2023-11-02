
@interface HUMediaDestinationItem : HFItem {
    HUHomeTheaterAudioItemModule * _homeTheaterAudioItemModule;
    <HMMediaDestination> * _thisDestination;
}

@property (readonly) HUHomeTheaterAudioItemModule *homeTheaterAudioItemModule;
@property (readonly) <HMMediaDestination> *thisDestination;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)homeTheaterAudioItemModule;
- (id)iconForAudioDestination:(id)arg1;
- (id)init;
- (id)initWithDestination:(id)arg1 withModule:(id)arg2;
- (id)thisDestination;

@end
