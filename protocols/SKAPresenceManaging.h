
@protocol SKAPresenceManaging <NSObject>

@required

- (void)channelReceivedIncomingPayloadUpdate:(NSData *)arg1 channel:(SKADatabaseChannel *)arg2;
- (void)createPresenceChannelForPresenceIdentifier:(void *)arg1 options:(void *)arg2 databaseContext:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, SKPresenceOptions *, NSManagedObjectContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKADatabaseChannel *, NSError *, void*
- (void)findOrCreatePresenceChannelForPresenceIdentifier:(void *)arg1 options:(void *)arg2 databaseContext:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, SKPresenceOptions *, NSManagedObjectContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKADatabaseChannel *, NSError *, void*
- (void)findPresenceChannelForPresenceIdentifier:(void *)arg1 isPersonal:(void *)arg2 databaseContext:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, bool, NSManagedObjectContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SKADatabaseChannel *, NSError *, void*
- (void)presentDevicesForPresenceIdentifier:(void *)arg1 isPersonal:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)releaseAllPresenceAssertionsAssociatedWithClient:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <SKAClientConnectionRepresentable> *, SKPresenceOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)releasePresenceAssertionForPresenceIdentifier:(void *)arg1 options:(void *)arg2 client:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, SKPresenceOptions *, <SKAClientConnectionRepresentable> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)retainPresenceAssertionForPresenceIdentifier:(void *)arg1 withPresencePayload:(void *)arg2 options:(void *)arg3 client:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSString *, SKPresencePayload *, SKPresenceOptions *, <SKAClientConnectionRepresentable> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
