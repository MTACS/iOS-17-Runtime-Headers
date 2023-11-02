
@interface WFArriveLocationTrigger : WFLocationTrigger

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)displayGlyph;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (long long)triggerBacking;

- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;

@end
