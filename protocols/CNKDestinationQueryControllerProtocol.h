
@protocol CNKDestinationQueryControllerProtocol

@required

- (void)addRecipient:(id <CNKDestinationVendingProtocol>)arg1;
- (<CNKDestinationQueryControllerDelegate> *)delegate;
- (long long)isAudioAllowedFor:(id <CNKDestinationVendingProtocol>)arg1;
- (long long)isFaceTimeAllowedFor:(id <CNKDestinationVendingProtocol>)arg1;
- (long long)isMultiwayAllowedFor:(id <CNKDestinationVendingProtocol>)arg1;
- (long long)isVideoAllowedFor:(id <CNKDestinationVendingProtocol>)arg1;
- (long long)isWebCapableFor:(id <CNKDestinationVendingProtocol>)arg1;
- (long long)presentationStyleFor:(id <CNKDestinationVendingProtocol>)arg1;
- (void)queryAddresses:(NSSet *)arg1;
- (void)removeRecipient:(id <CNKDestinationVendingProtocol>)arg1;
- (void)reset;
- (void)setDelegate:(id <CNKDestinationQueryControllerDelegate>)arg1;

@end
