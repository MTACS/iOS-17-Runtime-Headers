
@protocol _GCGenericDeviceDBServiceXPCInterface

@required

- (void)hasModelForDevice:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: GCHIDDeviceSnapshot *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)preparedModelForDevice:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: GCHIDDeviceSnapshot *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GCGenericDeviceModel *, NSError *, void*

@end
