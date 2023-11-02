
@interface CDMFeatureFlags : NSObject

+ (bool)globalOverridesAreEnabled;
+ (bool)isAmbiguityRefactorEnabled;
+ (bool)isCATIEnabled;
+ (bool)isCATIMultiTurnEnabled;
+ (bool)isCDMClientXPCEnabled;
+ (bool)isCbrUnrestrictedByRDEnabled;
+ (bool)isCcqrAerCbrEnabled;
+ (bool)isContextUpdateEnabled;
+ (bool)isContextualSpanMatcherEnabled;
+ (bool)isFeatureStoreEnabled;
+ (bool)isFeatureStoreEnabledForExternalBuilds;
+ (bool)isInterpretationGroupFilteringEnabled;
+ (bool)isLVCEnabled;
+ (bool)isLighthouseAPIEnabled;
+ (bool)isLogNluEnabled;
+ (bool)isMarrsMentionDetectorEnabled;
+ (bool)isMarrsMentionResolverEnabled;
+ (bool)isMentionResolverRewriterEnabled;
+ (bool)isPSCEnabled;
+ (bool)isRepetitionDetectionEnabled;
+ (bool)isSSUCacheUpdateOnEveryRequestEnabled;
+ (bool)isSSUEnableIndexingEnabled;
+ (bool)isSSUEnabled;
+ (bool)isShortcutsNLv4FollowupEnabled;
+ (bool)isSiriMiniEnabled;
+ (bool)isTrieOverridesEnabled;
+ (bool)isUAFAssetsEnabled;
+ (bool)isUaaPEnabled;
+ (bool)isUaaPPreferred;
+ (bool)isUsoEntitySpanEnabled;

@end
