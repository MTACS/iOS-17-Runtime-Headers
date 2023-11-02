
@interface _DKPrivacyMaintainer : NSObject

+ (unsigned long long)deleteMalformedNotificationUsageEvents:(id)arg1;
+ (id)deletionPredicateForBundleID:(id)arg1;
+ (void)maintainPrivacyWithKnowledgeStorage:(id)arg1 installedApps:(id)arg2 installedAppExtensions:(id)arg3 deleteMaxCount:(unsigned long long)arg4 objectMaxCount:(unsigned long long)arg5 objectMaxLifespan:(double)arg6 activity:(id)arg7;

@end
