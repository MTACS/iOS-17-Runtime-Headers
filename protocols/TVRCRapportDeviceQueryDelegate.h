
@protocol TVRCRapportDeviceQueryDelegate <NSObject>

@optional

- (void)rapportDeviceQuery:(TVRCRapportDeviceQuery *)arg1 addedDevice:(TVRCRPCompanionLinkClientWrapper *)arg2;
- (void)rapportDeviceQuery:(TVRCRapportDeviceQuery *)arg1 removedDevice:(TVRCRPCompanionLinkClientWrapper *)arg2;

@end
