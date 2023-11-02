
@protocol PowerUISmartChargeManagingAudioAccessories <NSObject>

@required

- (void)client:(void *)arg1 connectAndDisableOBCforDevice:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)client:(void *)arg1 setState:(void *)arg2 forDevice:(void *)arg3 withHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)client:(void *)arg1 timeSeriesForDevice:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)client:(void *)arg1 updateOBCDeadline:(void *)arg2 forDevice:(void *)arg3 withHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSDate *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fullChargeDeadlineForDevice:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*
- (void)isSmartChargingCurrentlyEnabledForDevice:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)unfilteredDeadlineForDevice:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*

@end
