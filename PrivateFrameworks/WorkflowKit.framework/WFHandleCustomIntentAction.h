
@interface WFHandleCustomIntentAction : WFHandleIntentAction <WFCustomIntentDynamicEnumerationDataSource, WFDynamicResolveParameterDataSource, WFIntentDynamicResolverDataSource> {
    NSString * _appIdentifier;
    INIntentCodableDescription * _codableDescription;
    NSDictionary * _descriptionDictionary;
    WFIntentDynamicResolver * _dynamicResolver;
    NSDictionary * _inputDictionary;
    INIntent * _intent;
    INIntentDescriptor * _intentDescriptor;
    WFIntentDynamicResolutionRequest * _lastDynamicResolutionRequest;
    NSString * _localizedKeyParameterDisplayName;
    NSString * _localizedName;
    NSDictionary * _outputDictionary;
    NSArray * _parameterDefinitions;
    id  _parameterSummaryDefinition;
    INIntentResponseCodableDescription * _responseCodableDescription;
    INSchema * _schema;
}

@property (nonatomic, readonly, copy) NSString *appIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WFIntentDynamicResolver *dynamicResolver;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, retain) WFIntentDynamicResolutionRequest *lastDynamicResolutionRequest;
@property (nonatomic, readonly) INSchema *schema;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionForAppIdentifier:(id)arg1;
- (id)appIdentifier;
- (id)codableDescription;
- (void)configureResourcesForParameter:(id)arg1;
- (id)copyWithSerializedParameters:(id)arg1;
- (id)createBundleAccessGrant;
- (id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2;
- (id)descriptionDictionary;
- (id)disabledOnPlatforms;
- (void)dynamicResolveParameterDidEndResolutionSession:(id)arg1;
- (id)dynamicResolver;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (bool)enumerationAllowsMultipleValues:(id)arg1;
- (void)generateSkeletonIntentForDynamicResolver:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)generatedIntentWithIdentifier:(id)arg1 input:(id)arg2 processedParameters:(id)arg3 error:(id*)arg4;
- (id)generatedResourceNodes;
- (bool)hasLocationParameter;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 schema:(id)arg4 intent:(id)arg5 className:(id)arg6 bundleIdentifier:(id)arg7 stringLocalizer:(id)arg8;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 schema:(id)arg4 intent:(id)arg5 resolvedIntentDescriptor:(id)arg6 stringLocalizer:(id)arg7;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 stringLocalizer:(id)arg4;
- (id)initWithIdentifier:(id)arg1 intent:(id)arg2 className:(id)arg3 bundleIdentifier:(id)arg4;
- (void)initializeParameters;
- (id)inputDictionary;
- (id)intent;
- (long long)intentCategory;
- (id)intentDescription;
- (id)intentDescriptor;
- (bool)intentDescriptorIsSyncedFromOtherDevices;
- (bool)isDiscontinued;
- (id)lastDynamicResolutionRequest;
- (void)loadDefaultSerializedRepresentationForEnumeration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)localizedConfigurationPromptDialogForPamameter:(id)arg1;
- (void)localizedDisambiguationPromptForItems:(id)arg1 intent:(id)arg2 dynamicResolveParameter:(id)arg3 completion:(id /* block */)arg4;
- (id)localizedKeyParameterDisplayName;
- (id)localizedName;
- (id)name;
- (id)outputDictionary;
- (void)parameterDefaultSerializedRepresentationDidChange:(id)arg1;
- (id)parameterDefinitions;
- (id)parameterKeysIgnoredForParameterSummary;
- (id)parameterSummaryDefinition;
- (id)parametersByIntentSlotName;
- (bool)populatesInputFromInputParameter;
- (id)prettyErrorForIntentsExtensionError:(id)arg1;
- (id)requiredResourcesForIntentAvailableResource;
- (void)resolveOptionsForUserInput:(id)arg1 forDynamicResolveParameter:(id)arg2 completion:(id /* block */)arg3;
- (id)resolver;
- (id)responseCodableDescription;
- (id)schema;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(bool)arg2;
- (void)setIntentDescriptor:(id)arg1;
- (void)setLastDynamicResolutionRequest:(id)arg1;
- (void)setUpResolverIfNeededForParameter:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)setupParameter:(id)arg1;
- (bool)shouldInsertExpandingParameterForParameter:(id)arg1;
- (id)slots;
- (void)startExecutingIntent:(id)arg1;
- (id)titleForINShortcut:(id)arg1;

@end