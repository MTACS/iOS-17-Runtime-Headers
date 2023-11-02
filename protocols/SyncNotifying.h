
@protocol SyncNotifying

@required

- (void)notifyClientsOfProgress:(NSDictionary *)arg1;
- (void)notifyClientsOfState:(NSDictionary *)arg1;

@end
