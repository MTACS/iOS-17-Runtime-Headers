
@protocol CNCapabilities <NSObject>

@required

+ (bool)shouldUseLegacyMessages;

- (bool)areTelephonyCallsSupported;
- (bool)isExpanseSupported;
- (bool)isFaceTimeAudioSupported;
- (bool)isFaceTimeVideoSupported;
- (bool)isPaySupported;
- (bool)isiMessageSupported;

@end
