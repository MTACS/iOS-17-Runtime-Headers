
@interface ATXCandidateRelevanceModelTrainingCoordinator : NSObject <ATXCandidateRelevanceModelTrainingCoordinatorProtocol> {
    NSArray * _configs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConfigs:(id)arg1;
- (void)trainUsingConfig:(id)arg1 xpcActivity:(id)arg2 disregardDatasetMetadataRequirements:(bool)arg3;
- (void)trainWithXPCActivity:(id)arg1 disregardDatasetMetadataRequirements:(bool)arg2;

@end
