
@interface HUPresenceUserPickerItemModuleOptions : NSObject {
    bool  _customLocationSelected;
    HUPresenceCurrentUserLocationDevice * _locationDevice;
}

@property (nonatomic, readonly) bool customLocationSelected;
@property (nonatomic, readonly) HUPresenceCurrentUserLocationDevice *locationDevice;

- (void).cxx_destruct;
- (bool)customLocationSelected;
- (id)initWithLocationDevice:(id)arg1 customLocationSelected:(bool)arg2;
- (id)locationDevice;

@end
