
@interface ExportedMessageChannel : NSObject <AUAudioUnitMessageChannelProtocol> {
    AUMessageChannel_XPC * _messageChannel;
}

- (void).cxx_destruct;
- (id)initWithMessageChannel:(id)arg1;
- (void)onCallRemoteAU:(id)arg1 reply:(id /* block */)arg2;

@end
