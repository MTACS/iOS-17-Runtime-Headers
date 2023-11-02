
@interface HFHomeKitSettingsAdapterManager : NSObject {
    NSMutableDictionary * _adaptersByID;
    <HFHomeKitSettingsVendor> * _homeKitSettingsVendor;
}

@property (nonatomic, readonly) NSMutableDictionary *adaptersByID;
@property (nonatomic, readonly) <HFHomeKitSettingsVendor> *homeKitSettingsVendor;

- (void).cxx_destruct;
- (id)_createAdapterForIdentifier:(id)arg1;
- (id)adapterForIdentifier:(id)arg1;
- (id)adaptersByID;
- (id)homeKitSettingsVendor;
- (id)init;
- (id)initWithHomeKitSettingsVendor:(id)arg1;

@end
