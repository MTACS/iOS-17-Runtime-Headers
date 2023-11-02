
@protocol BCSActionPrivate <BCSAction>

@required

- (NSArray *)appLinks;
- (CPSClipMetadataRequest *)clipMetadataRequest;
- (long long)codeType;
- (NSDictionary *)debugDescriptionDictionary;
- (NSString *)extraPreviewText;
- (bool)hasSensitiveURL;
- (bool)isAMSAction;
- (bool)isAirplayPairingAction;
- (bool)isContinuityCameraAction;
- (bool)isInvalidDataAction;
- (bool)isLiveCameraOnlyAction;
- (bool)isPasskeyAction;
- (bool)isPasskeyAssertionAction;
- (bool)isPasskeyRegistrationAction;
- (bool)isWiFiAction;
- (void)setClipMetadataRequest:(CPSClipMetadataRequest *)arg1;
- (bool)shouldRequireUserToPickTargetApp;

@end
