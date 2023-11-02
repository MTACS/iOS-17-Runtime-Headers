
@protocol COCompanionLinkClientFactoryProtocol <NSObject>

@required

- (<COCompanionLinkClientProtocol> *)companionLinkClientForCurrentDevice;
- (<COCompanionLinkClientProtocol> *)companionLinkClientForDevice:(RPCompanionLinkDevice *)arg1 withIDSIdentifier:(NSString *)arg2;

@end
