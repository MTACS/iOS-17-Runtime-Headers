
@interface INRunVoiceCommandIntent : INIntent <INEnumerable, INRunVoiceCommandIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INIntentExecutionResult *executionResult;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INVoiceCommandDeviceInformation *originDevice;
@property (nonatomic, readonly, copy) NSString *previousIntentIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INSpeakableString *voiceCommand;

- (id)_dictionaryRepresentation;
- (bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(id /* block */)arg2;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)executionResult;
- (id)initWithVoiceCommand:(id)arg1 originDevice:(id)arg2;
- (id)initWithVoiceCommand:(id)arg1 originDevice:(id)arg2 executionResult:(id)arg3;
- (id)initWithVoiceCommand:(id)arg1 originDevice:(id)arg2 executionResult:(id)arg3 previousIntentIdentifier:(id)arg4;
- (id)originDevice;
- (id)parametersByName;
- (id)previousIntentIdentifier;
- (void)setDomain:(id)arg1;
- (void)setExecutionResult:(id)arg1;
- (void)setOriginDevice:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPreviousIntentIdentifier:(id)arg1;
- (void)setVerb:(id)arg1;
- (void)setVoiceCommand:(id)arg1;
- (id)verb;
- (id)voiceCommand;

@end
