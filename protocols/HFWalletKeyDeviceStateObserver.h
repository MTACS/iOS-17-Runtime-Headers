
@protocol HFWalletKeyDeviceStateObserver <NSObject>

@optional

- (void)walletKeyDeviceStateUpdated:(HMHomeWalletKeyDeviceState *)arg1 inHome:(HMHome *)arg2;

@end
