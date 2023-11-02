
@interface SBPIPAnalytics : NSObject <PGPictureInPictureAnalyticsDelegate> {
    NSMutableDictionary * _analyticsSessionAssistants;
    NSMutableDictionary * _analyticsSourceAssistants;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assistantForUUID:(id)arg1;
- (void)pictureInPictureAnalyticsSourceWithUUID:(id)arg1 didBecomePossible:(bool)arg2;
- (void)pictureInPictureDidActivateAnalyticsSessionWithUUID:(id)arg1 analyticsSourceUUID:(id)arg2 automatically:(bool)arg3;
- (void)pictureInPictureDidChangeStashStateForAnalyticsSessionWithUUID:(id)arg1 stashed:(bool)arg2;
- (void)pictureInPictureDidCreateAnalyticsSessionWithUUID:(id)arg1 bundleIdentifier:(id)arg2 contentType:(long long)arg3;
- (void)pictureInPictureDidCreateAnalyticsSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 contentType:(long long)arg3;
- (void)pictureInPictureDidDeactivateAnalyticsSessionWithUUID:(id)arg1 analyticsSourceUUID:(id)arg2 appStoppedSession:(bool)arg3 restoredFullScreen:(bool)arg4;
- (void)pictureInPictureDidDestroyAnalyticsSessionWithUUID:(id)arg1;
- (void)pictureInPictureDidDestroyAnalyticsSourceWithUUID:(id)arg1;

@end
