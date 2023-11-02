
@protocol PowerUISmartChargeClientManagingAudioAccessories <NSObject>

@required

- (bool)connectAndDisableOBCforDevice:(NSString *)arg1 withError:(id*)arg2;
- (void)connectAndDisableOBCforDevice:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)disableSmartChargingForDevice:(NSString *)arg1 withError:(id*)arg2;
- (void)disableSmartChargingForDevice:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)enableSmartChargingForDevice:(NSString *)arg1 withError:(id*)arg2;
- (void)enableSmartChargingForDevice:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSDate *)fullChargeDeadlineForDevice:(NSString *)arg1 withError:(id*)arg2;
- (void)fullChargeDeadlineForDevice:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*
- (id)initWithClientName:(NSString *)arg1;
- (unsigned long long)isSmartChargingCurrentlyEnabledForDevice:(NSString *)arg1 withError:(id*)arg2;
- (void)isSmartChargingCurrentlyEnabledForDevice:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (bool)temporarilyDisableSmartChargingForDevice:(NSString *)arg1 withError:(id*)arg2;
- (void)temporarilyDisableSmartChargingForDevice:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)temporarilyEnableChargingForDevice:(NSString *)arg1 withError:(id*)arg2;
- (void)temporarilyEnableChargingForDevice:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSDate *)unfilteredDeadlineForDevice:(NSString *)arg1 withError:(id*)arg2;
- (void)unfilteredDeadlineForDevice:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*
- (bool)updateOBCDeadline:(NSDate *)arg1 forDevice:(NSString *)arg2 withError:(id*)arg3;
- (void)updateOBCDeadline:(void *)arg1 forDevice:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 9: NSDate *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
