
@interface CDMFoundation.CDMCATIUSOParseHelpers : NSObject

+ (id)buildCrisisSupportParseWithAppBundleId:(id)arg1 guid:(id)arg2 intentName:(id)arg3 ensembleType:(id)arg4;
+ (id)buildCrisisSupportParseWithAppBundleId:(id)arg1 guid:(id)arg2 intentName:(id)arg3 ensembleType:(id)arg4 addEntitySpans:(bool)arg5;
+ (id)buildSocialConversationParseWithAppBundleId:(id)arg1 guid:(id)arg2 intentName:(id)arg3 ensembleType:(id)arg4;
+ (id)buildSocialConversationParseWithAppBundleId:(id)arg1 guid:(id)arg2 intentName:(id)arg3 ensembleType:(id)arg4 addEntitySpans:(bool)arg5;

- (id)init;

@end
