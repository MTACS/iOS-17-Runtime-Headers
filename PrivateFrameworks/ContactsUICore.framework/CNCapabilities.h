
@interface CNCapabilities : NSObject <CNCapabilities>

@property (nonatomic, readonly) bool areTelephonyCallsSupported;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isExpanseSupported;
@property (nonatomic, readonly) bool isFaceTimeAudioSupported;
@property (nonatomic, readonly) bool isFaceTimeVideoSupported;
@property (nonatomic, readonly) bool isPaySupported;
@property (nonatomic, readonly) bool isiMessageSupported;
@property (readonly) Class superclass;

+ (bool)shouldUseLegacyMessages;

- (bool)areTelephonyCallsSupported;
- (bool)isExpanseSupported;
- (bool)isFaceTimeAudioSupported;
- (bool)isFaceTimeVideoSupported;
- (bool)isPaySupported;
- (bool)isiMessageSupported;

@end
