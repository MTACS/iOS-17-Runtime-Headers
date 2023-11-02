
@protocol CADSourceInterface

@required

- (void)CADCountCalendarItemsOfType:(void *)arg1 inSource:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: int, CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned long long, void*
- (void)CADDatabaseGetLocalBirthdaySource:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, CADObjectID *, void*
- (void)CADDatabaseGetLocalSourceWithEnableIfNeeded:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, CADObjectID *, void*
- (void)CADDatabaseGetSourcesWithFaultedProperties:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, NSArray *, void*
- (void)CADObjectGetConstraints:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSData *, void*
- (void)CADRemoveCalendarItemsOlderThanDate:(void *)arg1 ofType:(void *)arg2 inSource:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSDate *, int, CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADSourceAddExchangeDelegateWithName:(void *)arg1 emailAddress:(void *)arg2 toSourceWithID:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 11: NSString *, NSString *, CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, CADObjectID *, long long, void*
- (void)CADSourceGetGrantedDelegatesList:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADSourceGetNotificationCollection:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, CADObjectID *, void*
- (void)CADSourceRefresh:(void *)arg1 isUserRequested:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CADObjectID *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, void*
- (void)CADSourceRemoveExchangeDelegateWithID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADSourceUpdateGrantedDelegate:(void *)arg1 action:(void *)arg2 sourceID:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: CalGrantedDelegate *, long long, CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end
