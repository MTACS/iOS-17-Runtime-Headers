
@protocol ASFriendListQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverFriendList:(NSData *)arg1 queryUUID:(NSUUID *)arg2;

@end
