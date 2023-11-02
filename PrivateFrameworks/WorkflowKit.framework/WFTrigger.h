
@interface WFTrigger : NSObject <NSCopying, NSSecureCoding>

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)displayGlyph;
+ (double)displayGlyphCornerRadius;
+ (id)displayGlyphHierarchicalColors;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (id)inputTypeDescriptionForClass:(Class)arg1;
+ (bool)isAllowedToRunAutomatically;
+ (bool)isSupportedOnThisDevice;
+ (bool)isUserInitiated;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (id)offIcon;
+ (id)offIconTintColor;
+ (id)offLabel;
+ (id)onIcon;
+ (id)onIconTintColor;
+ (id)onLabel;
+ (bool)requiresNotification;
+ (bool)supportsSecureCoding;
+ (long long)triggerBacking;
+ (id)triggerWithSerializedData:(id)arg1;

- (void)configureWithConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayGlyph;
- (double)displayGlyphCornerRadius;
- (id)displayGlyphHierarchicalColors;
- (id)displayGlyphName;
- (id)displayGlyphTintColor;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedDisplayExplanation;
- (id)localizedDisplayName;
- (id)localizedPastTenseDescription;
- (id)serializedData;
- (Class)shortcutInputContentItemClass;
- (id)suggestedActions;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

+ (id)powerLogEventKindForTrigger:(id)arg1;
+ (bool)unregisterContextSyncClient;

- (id)contentCollectionWithEventInfo:(id)arg1;
- (id)contextStoreKeyPathForCurrentState;
- (id)contextStorePredicate;
- (unsigned int)contextStoreQualityOfService;
- (bool)contextStoreRegistrationIsForWatch;
- (id)eventInfoForEvent:(id)arg1;
- (void)eventInfoForEvent:(id)arg1 completion:(id /* block */)arg2;
- (bool)hasRemotePublisher;
- (bool)needsRegistrationAfterFiring;
- (id)publisherWithScheduler:(id)arg1;
- (id)remotePublisherWithScheduler:(id)arg1;
- (bool)requiresEventInfoAsInput;
- (void)shouldFireInResponseToEvent:(id)arg1 triggerIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (bool)shouldFireTriggerWithEventInfo:(id)arg1 error:(out id*)arg2;

@end
