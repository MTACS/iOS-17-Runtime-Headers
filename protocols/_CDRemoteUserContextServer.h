
@protocol _CDRemoteUserContextServer

@required

- (void)fetchPropertiesOfRemoteKeyPaths:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)requestActivateDevicesWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSUUID *)sourceDeviceUUID;
- (void)subscribeToContextValueChangeNotificationsWithRegistration:(void *)arg1 deviceIDs:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: _CDContextualChangeRegistration *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)unsubscribeFromContextValueChangeNotificationsWithRegistration:(void *)arg1 deviceIDs:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: _CDContextualChangeRegistration *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
