
@protocol CRKClassSessionBeaconBrowserDelegate <NSObject>

@required

- (void)beaconBrowser:(CRKClassSessionBeaconBrowser *)arg1 didFailWithError:(NSError *)arg2;
- (void)beaconBrowser:(CRKClassSessionBeaconBrowser *)arg1 didFindBeaconForClassSession:(DMFControlSessionIdentifier *)arg2 flags:(unsigned short)arg3;
- (void)beaconBrowser:(CRKClassSessionBeaconBrowser *)arg1 didFindBeaconForInvitationSessionWithEndpoint:(CRKRemoteEndpoint *)arg2;

@end
