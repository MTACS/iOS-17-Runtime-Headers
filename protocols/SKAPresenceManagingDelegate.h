
@protocol SKAPresenceManagingDelegate <NSObject>

@required

- (void)presenceManager:(id <SKAPresenceManaging>)arg1 didCreateChannel:(SKADatabaseChannel *)arg2;
- (void)presenceManager:(id <SKAPresenceManaging>)arg1 didReceivePresentDevicesUpdateForPresenceIdentifier:(NSString *)arg2;
- (void)presenceManager:(id <SKAPresenceManaging>)arg1 didRequestToRollChannel:(SKADatabaseChannel *)arg2;

@end
