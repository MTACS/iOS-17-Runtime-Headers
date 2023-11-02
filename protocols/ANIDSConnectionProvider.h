
@protocol ANIDSConnectionProvider <ANConnectionProvider>

@required

- (NSError *)sendMessage:(NSDictionary *)arg1 messageUUIDString:(NSString *)arg2 destination:(id <IDSDestinationProtocol>)arg3;
- (IDSService *)service;

@end
