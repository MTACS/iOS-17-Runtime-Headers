
@protocol ICDelegationConsumerNetServiceDelegate <NSObject>

@optional

- (void)delegationConsumerNetService:(ICDelegationConsumerNetService *)arg1 didAcceptConnectionWithInputStream:(NSInputStream *)arg2 outputStream:(NSOutputStream *)arg3;

@end
