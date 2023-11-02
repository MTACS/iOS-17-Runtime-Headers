
@protocol PowerUISmartChargeManagingPrivate <PowerUISmartChargeManaging>

@required

- (void)batteryGaugingStatusWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)client:(void *)arg1 setChargingStatus:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)currentLeewayWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)engageFrom:(void *)arg1 until:(void *)arg2 repeatUntil:(void *)arg3 overrideAllSignals:(void *)arg4 withHandler:(void *)arg5; // needs 5 arg types, found 10: NSDate *, NSDate *, NSDate *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)resetEngagementOverrideWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
