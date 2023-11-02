
@protocol HAP2Accessory <NSObject>

@required

- (<HAP2PairedAccessoryServer> *)accessoryServer;
- (unsigned long long)category;
- (unsigned long long)connectionState;
- (<HAP2AccessoryDelegate> *)delegate;
- (<HAP2Cancelable> *)disableNotificationsForCharacteristics:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (<HAP2Cancelable> *)enableNotificationsForCharacteristics:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSString *)firmwareVersion;
- (NSString *)identifier;
- (<HAP2Cancelable> *)identifyWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (unsigned long long)instanceID;
- (bool)isPrimary;
- (NSString *)manufacturer;
- (NSString *)model;
- (NSString *)name;
- (NSString *)productData;
- (<HAP2Cancelable> *)readValuesForCharacteristics:(void *)arg1 timeout:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSString *)serialNumber;
- (NSArray *)services;
- (void)setDelegate:(id <HAP2AccessoryDelegate>)arg1;
- (double)sleepInterval;
- (<HAP2Cancelable> *)writeValuesForCharacteristics:(void *)arg1 timeout:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
