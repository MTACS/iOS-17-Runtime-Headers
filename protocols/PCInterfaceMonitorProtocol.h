
@protocol PCInterfaceMonitorProtocol <NSObject>

@required

- (long long)interfaceIdentifier;
- (bool)isBadLinkQuality;
- (bool)isInterfaceHistoricallyUsable;
- (bool)isInterfaceUsable;
- (bool)isInternetReachable;
- (bool)isNetworkingPowerExpensiveToUse;
- (bool)isPoorLinkQuality;
- (bool)isRadioHot;
- (int)linkQuality;
- (NSString *)linkQualityString;

@optional

- (int)currentRAT;
- (unsigned long long)interface5GMode;
- (bool)isLTEWithCDRX;
- (NSString *)networkCode;
- (struct __CFString { }*)wwanInterfaceName;

@end
