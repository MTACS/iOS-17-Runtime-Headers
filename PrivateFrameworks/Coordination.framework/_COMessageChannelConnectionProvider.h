
@interface _COMessageChannelConnectionProvider : NSObject <COMessageChannelConnectionProvider> {
    NSXPCConnection * _messageChannelServiceConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCConnection *messageChannelServiceConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)messageChannelServiceConnection;

@end
