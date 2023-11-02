
@protocol NNMKAccountsSyncServiceServerDelegate <NSObject>

@required

- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didChangeAccountSourceType:(NNMKProtoAccountSourceType *)arg2;
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didFailSendingProtobufWithIDSIdentifier:(NSString *)arg2 errorCode:(long long)arg3;
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didReceivedAccountAuthenticationStatus:(NSDictionary *)arg2 requestTime:(double)arg3;
- (void)accountsSyncServiceServer:(NNMKAccountsSyncServiceServer *)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(NSString *)arg2;

@end
