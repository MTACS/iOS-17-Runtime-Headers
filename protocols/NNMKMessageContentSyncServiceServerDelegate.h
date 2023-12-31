
@protocol NNMKMessageContentSyncServiceServerDelegate <NSObject>

@required

- (void)messageContentSyncServiceServer:(NNMKMessageContentSyncServiceServer *)arg1 didFailSendingProtobufWithIDSIdentifier:(NSString *)arg2 errorCode:(long long)arg3;
- (void)messageContentSyncServiceServer:(NNMKMessageContentSyncServiceServer *)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(NSString *)arg2;

@end
