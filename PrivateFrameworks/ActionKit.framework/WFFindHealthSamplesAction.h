
@interface WFFindHealthSamplesAction : WFContentItemFilterAction

@property (nonatomic, readonly) NSString *readableSampleType;

- (id)configurationData;
- (id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2;
- (void)finishRunningWithError:(id)arg1;
- (void)finishRunningWithNoSamples;
- (id)generatedResourceNodes;
- (void)initializeParameters;
- (id)parameterDefinitions;
- (id)query;
- (id)readableSampleType;
- (void)resourceAvailabilityChanged;
- (id)sampleTypeName;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)updateParameterVisibility;
- (void)updateSourcesForSampleType:(id)arg1;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;

@end
