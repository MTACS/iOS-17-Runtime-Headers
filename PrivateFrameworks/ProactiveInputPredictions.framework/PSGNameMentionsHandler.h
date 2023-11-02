
@interface PSGNameMentionsHandler : NSObject

+ (id)sharedInstance;

- (id)getNameMentionsTriggerForContext:(id)arg1 recipientNames:(id)arg2 availableApps:(id)arg3 localeIdentifier:(id)arg4 explanationSet:(id)arg5;
- (id)getPredictedItemsForTrigger:(id)arg1 recipientNames:(id)arg2 bundleIdentifier:(id)arg3 maxItems:(unsigned long long)arg4;

@end
