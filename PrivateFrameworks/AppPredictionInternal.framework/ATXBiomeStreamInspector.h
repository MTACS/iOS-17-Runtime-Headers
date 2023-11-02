
@interface ATXBiomeStreamInspector : NSObject

+ (void)_makeStreamJSONForStream:(id)arg1 publisher:(id)arg2 maxNumEvents:(unsigned long long)arg3 callback:(id /* block */)arg4;
+ (void)makeJSONRepresentationForStreamWithBlock:(id /* block */)arg1;
+ (void)makeJSONRepresentationForStreamWithBlock:(id /* block */)arg1 blendingPublisher:(id)arg2 clientPublisher:(id)arg3 uiPublisher:(id)arg4 spotlightUIPublisher:(id)arg5 appLaunchPublisher:(id)arg6 appIntentPublisher:(id)arg7 inferredModePublisher:(id)arg8;

@end
