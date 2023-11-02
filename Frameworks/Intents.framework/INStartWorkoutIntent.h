
@interface INStartWorkoutIntent : INIntent <INStartWorkoutIntentExport>

@property (nonatomic, copy) NSArray *associatedItems;
@property (nonatomic, copy) INWorkoutCustomization *customization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *goalValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *isBuiltInWorkoutType;
@property (nonatomic, readonly, copy) NSNumber *isOpenEnded;
@property (nonatomic, copy) NSNumber *isVoiceOnly;
@property (nonatomic) long long sequenceLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long workoutGoalUnitType;
@property (nonatomic, readonly) long long workoutLocationType;
@property (nonatomic, readonly, copy) INSpeakableString *workoutName;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_ignoredParameters;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (id)_goalValueIntentSlotDescription;
- (long long)_intentCategory;
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg1 context:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (id)_typedBackingStore;
- (id)associatedItems;
- (id)customization;
- (id)domain;
- (id)goalValue;
- (id)initWithWorkoutName:(id)arg1 goalValue:(id)arg2 workoutGoalUnitType:(long long)arg3 workoutLocationType:(long long)arg4 isOpenEnded:(id)arg5;
- (id)isBuiltInWorkoutType;
- (id)isOpenEnded;
- (id)isVoiceOnly;
- (id)localizeValueOfSlotDescription:(id)arg1 withLocalizer:(id)arg2;
- (id)parametersByName;
- (long long)sequenceLabel;
- (void)setAssociatedItems:(id)arg1;
- (void)setCustomization:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setGoalValue:(id)arg1;
- (void)setIsBuiltInWorkoutType:(id)arg1;
- (void)setIsOpenEnded:(id)arg1;
- (void)setIsVoiceOnly:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setSequenceLabel:(long long)arg1;
- (void)setVerb:(id)arg1;
- (void)setWorkoutGoalUnitType:(long long)arg1;
- (void)setWorkoutLocationType:(long long)arg1;
- (void)setWorkoutName:(id)arg1;
- (id)verb;
- (long long)workoutGoalUnitType;
- (long long)workoutLocationType;
- (id)workoutName;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)atx_getArgsInto:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport

- (void)requestCard:(id)arg1 reply:(id /* block */)arg2;
- (unsigned long long)servicePriorityForCardRequest:(id)arg1;

@end
