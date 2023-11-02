
@interface HUPersonalRequestsActivityNotificationsFooterItem : HFItem {
    HULocationDeviceManager * _locationDeviceManager;
}

@property (nonatomic, readonly) HULocationDeviceManager *locationDeviceManager;

- (void).cxx_destruct;
- (id)_itemUpdateOutcomeForLocationDeviceText:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)init;
- (id)locationDeviceManager;

@end
