
@protocol HMBAPSConnectionDelegate <NSObject>

@required

- (void)connection:(id <HMBAPSConnection>)arg1 didReceiveIncomingMessage:(APSIncomingMessage *)arg2;
- (void)connection:(id <HMBAPSConnection>)arg1 didReceivePublicToken:(NSData *)arg2;
- (void)connection:(id <HMBAPSConnection>)arg1 didReceiveToken:(NSData *)arg2 forTopic:(NSString *)arg3 identifier:(NSString *)arg4;

@end
