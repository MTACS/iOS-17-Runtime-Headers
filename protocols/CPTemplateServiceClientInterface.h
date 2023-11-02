
@protocol CPTemplateServiceClientInterface <CPBannerDelegate>

@required

- (void)clientAssistantCellUnavailableWithError:(NSError *)arg1;
- (void)clientExceededAudioMetadataThrottleLimit;
- (void)clientExceededHierarchyDepthLimit;
- (void)clientExceededTabBarTabLimit;
- (void)clientPushNowPlayingTemplateAnimated:(bool)arg1;
- (void)clientPushedIllegalTemplateOfClass:(NSString *)arg1;
- (void)templateIdentifierDidDismiss:(NSUUID *)arg1;
- (void)templateIdentifierDidPop:(NSUUID *)arg1;
- (void)updateInterestingLayoutGuideWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
