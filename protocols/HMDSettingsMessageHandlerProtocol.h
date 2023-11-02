
@protocol HMDSettingsMessageHandlerProtocol <NSObject>

@required

- (void)setPrivateMessageController:(id <HMDSettingsMessageController>)arg1;
- (void)setSharedMessageController:(id <HMDSettingsMessageController>)arg1;

@end
