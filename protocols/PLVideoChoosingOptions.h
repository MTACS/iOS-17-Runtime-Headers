
@protocol PLVideoChoosingOptions <NSObject>

@required

- (bool)hasValidTimeRange;
- (bool)isExplicitUserAction;
- (bool)isMediumHighQualityAllowed;
- (bool)isNetworkAccessAllowed;
- (bool)isStreamingAllowed;
- (bool)restrictToPlayableOnCurrentDevice;
- (long long)videoDeliveryMode;
- (long long)videoVersion;

@end
