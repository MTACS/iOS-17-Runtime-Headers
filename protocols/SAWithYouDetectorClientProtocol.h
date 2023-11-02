
@protocol SAWithYouDetectorClientProtocol

@required

- (void)didForceUpdateWithYouStatus;
- (void)updatedWithYouStatusFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forDeviceWithUUID:(NSUUID *)arg3;

@end
