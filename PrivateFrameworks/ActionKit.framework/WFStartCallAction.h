
@interface WFStartCallAction : WFHandleSystemIntentAction

- (id)airplaneModeError;
- (id)appConfigurationRequiredError;
- (long long)callCapability;
- (id)callingServiceNotAvailableError;
- (bool)canOfferSuggestionsForParameterWithKey:(id)arg1;
- (id)communicationMethod;
- (id)contactNotSupportedByAppErrorForContacts:(id)arg1;
- (id)contentDestinationWithError:(id*)arg1;
- (id)disabledOnPlatforms;
- (id)errorFromConfirmResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromHandleResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3;
- (id)errorFromStartCallResponse:(id)arg1 intent:(id)arg2;
- (void)fetchFavoriteCallDestinationsWithCompletion:(id /* block */)arg1;
- (void)fetchRecentCallDestinationWithTelephony:(bool)arg1 completion:(id /* block */)arg2;
- (void)fetchSuggestedEntititiesForParameterWithKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)generatedIntentWithIdentifier:(id)arg1 input:(id)arg2 processedParameters:(id)arg3 error:(id*)arg4;
- (id)icon;
- (id)intentDescriptorFromParameterState;
- (id)intentDescriptorWithIntentClassName:(id)arg1 launchableBundleId:(id)arg2;
- (bool)isRunningOniPad;
- (id)localizedCallServiceName;
- (id)localizedKeyParameterDisplayName;
- (bool)populatesInputFromInputParameter;
- (long long)preferredCallProvider;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(bool)arg2;
- (bool)shouldOpenAppThroughSiriForIntent:(id)arg1 intentResponse:(id)arg2;
- (bool)skipsProcessingHiddenParameters;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (id)suggestedEntityFromCallDescriptor:(id)arg1;
- (id)supportedIdentifiers;
- (id)systemEntityCollectionIdentifierForDisambiguatingParameterWithKey:(id)arg1;

@end
