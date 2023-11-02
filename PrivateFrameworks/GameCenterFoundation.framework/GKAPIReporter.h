
@interface GKAPIReporter : NSObject

+ (id)reporter;

- (void)recordClickWithAction:(id)arg1 targetId:(id)arg2 targetType:(id)arg3 pageId:(id)arg4 pageType:(id)arg5;
- (void)recordClickWithAction:(id)arg1 targetId:(id)arg2 targetType:(id)arg3 pageId:(id)arg4 pageType:(id)arg5 additionalFields:(id)arg6;
- (void)recordMultiplayerActivityMetrics:(id)arg1;
- (void)recordMultiplayerErrorID:(id)arg1;
- (void)recordPageWithID:(id)arg1 pageContext:(id)arg2 pageType:(id)arg3;
- (void)recordPerformanceMetrics:(id)arg1;
- (void)recordVoiceChat;
- (void)sendMetrics:(id)arg1;
- (void)sendPerformanceMetrics:(id)arg1;
- (id)utilityService;

@end
