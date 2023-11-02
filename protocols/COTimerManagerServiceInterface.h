
@protocol COTimerManagerServiceInterface <NSObject>

@required

- (void)addObserverForNotificationName:(void *)arg1 asAccessory:(void *)arg2 asInstance:(void *)arg3 constraints:(void *)arg4 withCallback:(void *)arg5; // needs 5 arg types, found 10: NSString *, COHomeKitAccessoryMemento *, NSUUID *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addTimer:(void *)arg1 asAccessory:(void *)arg2 asInstance:(void *)arg3 withCallback:(void *)arg4; // needs 4 arg types, found 9: MTTimer *, COHomeKitAccessoryMemento *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)canDispatchAsAccessory:(void *)arg1 asInstance:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: COHomeKitAccessoryMemento *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)dismissTimerWithIdentifier:(void *)arg1 asAccessory:(void *)arg2 withCallback:(void *)arg3; // needs 3 arg types, found 8: NSString *, COHomeKitAccessoryMemento *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeObserverForNotificationName:(void *)arg1 asAccessory:(void *)arg2 withCallback:(void *)arg3; // needs 3 arg types, found 8: NSString *, COHomeKitAccessoryMemento *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeTimer:(void *)arg1 asAccessory:(void *)arg2 withCallback:(void *)arg3; // needs 3 arg types, found 8: MTTimer *, COHomeKitAccessoryMemento *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)timersAsAccessory:(void *)arg1 asInstance:(void *)arg2 withCallback:(void *)arg3; // needs 3 arg types, found 9: COHomeKitAccessoryMemento *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)timersAsAccessory:(void *)arg1 forAccessories:(void *)arg2 callback:(void *)arg3; // needs 3 arg types, found 9: COHomeKitAccessoryMemento *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)updateTimer:(void *)arg1 asAccessory:(void *)arg2 withCallback:(void *)arg3; // needs 3 arg types, found 8: MTTimer *, COHomeKitAccessoryMemento *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
