
@protocol DNDSContactMonitorListener <NSObject>

@required

- (NSData *)contactHistoryToken;
- (void)contactMonitor:(id <DNDSContactMonitoring>)arg1 didReceiveUpdatedContacts:(NSArray *)arg2 deletedContactIdentifiers:(NSArray *)arg3 withContactHistoryToken:(NSData *)arg4;
- (void)contactMonitor:(id <DNDSContactMonitoring>)arg1 didReceiveUpdatedContactsForContactsWithoutIdentifiers:(NSDictionary *)arg2;
- (NSSet *)monitoredContacts;
- (void)setContactHistoryToken:(NSData *)arg1;

@end
