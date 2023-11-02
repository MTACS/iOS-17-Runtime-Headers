
@interface HUPresenceUserOptionItem : HFItem {
    HULocationDeviceManager * _locationDeviceManager;
    HUPresenceCurrentUserLocationDevice * _selectedLocationDevice;
    HFUserItem * _userItem;
}

@property (nonatomic, readonly) HULocationDeviceManager *locationDeviceManager;
@property (nonatomic, retain) HUPresenceCurrentUserLocationDevice *selectedLocationDevice;
@property (nonatomic, readonly) HFUserItem *userItem;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithUserItem:(id)arg1 selectedLocationDevice:(id)arg2 locationDeviceManager:(id)arg3;
- (id)locationDeviceManager;
- (id)selectedLocationDevice;
- (void)setSelectedLocationDevice:(id)arg1;
- (id)userItem;

@end
