
@interface ATXCandidateRelevanceModelTrainer : NSObject <ATXCandidateRelevanceModelTrainerProtocol> {
    ATXCandidateRelevanceModelConfig * _config;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)generateAndSaveDatasetWithFilename:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (void)trainWithXPCActivity:(id)arg1 disregardDatasetMetadataRequirements:(bool)arg2;

@end
