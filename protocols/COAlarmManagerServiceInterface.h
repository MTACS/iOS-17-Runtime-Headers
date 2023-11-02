
@protocol COAlarmManagerServiceInterface <NSObject>

@required

- (void)addAlarm:(void *)arg1 asAccessory:(void *)arg2 asInstance:(void *)arg3 withCallback:(void *)arg4; // needs 4 arg types, found 9: MTAlarm *, COHomeKitAccessoryMemento *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addObserverForNotificationName:(void *)arg1 asAccessory:(void *)arg2 asInstance:(void *)arg3 constraints:(void *)arg4 withCallback:(void *)arg5; // needs 5 arg types, found 10: NSString *, COHomeKitAccessoryMemento *, NSUUID *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)alarmsAsAccessory:(void *)arg1 asInstance:(void *)arg2 forAccessories:(void *)arg3 callback:(void *)arg4; // needs 4 arg types, found 10: COHomeKitAccessoryMemento *, NSUUID *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)alarmsAsAccessory:(void *)arg1 asInstance:(void *)arg2 withCallback:(void *)arg3; // needs 3 arg types, found 9: COHomeKitAccessoryMemento *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)canDispatchAsAccessory:(void *)arg1 asInstance:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: COHomeKitAccessoryMemento *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)dismissAlarmWithIdentifier:(void *)arg1 asAccessory:(void *)arg2 asInstance:(void *)arg3 withCallback:(void *)arg4; // needs 4 arg types, found 9: NSString *, COHomeKitAccessoryMemento *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeAlarm:(void *)arg1 asAccessory:(void *)arg2 asInstance:(void *)arg3 withCallback:(void *)arg4; // needs 4 arg types, found 9: MTAlarm *, COHomeKitAccessoryMemento *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeObserverForNotificationName:(void *)arg1 asAccessory:(void *)arg2 asInstance:(void *)arg3 withCallback:(void *)arg4; // needs 4 arg types, found 9: NSString *, COHomeKitAccessoryMemento *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)snoozeAlarmWithIdentifier:(void *)arg1 asAccessory:(void *)arg2 asInstance:(void *)arg3 withCallback:(void *)arg4; // needs 4 arg types, found 9: NSString *, COHomeKitAccessoryMemento *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateAlarm:(void *)arg1 asAccessory:(void *)arg2 asInstance:(void *)arg3 withCallback:(void *)arg4; // needs 4 arg types, found 9: MTAlarm *, COHomeKitAccessoryMemento *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
