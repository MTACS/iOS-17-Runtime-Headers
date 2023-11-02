
@protocol ATXCandidateRelevanceModelTrainerProtocol <NSObject>

@required

+ (id)new;

- (void)generateAndSaveDatasetWithFilename:(NSString *)arg1;
- (id)init;
- (id)initWithConfig:(ATXCandidateRelevanceModelConfig *)arg1;
- (void)trainWithXPCActivity:(id <ATXActivityDeferrableProtocol>)arg1 disregardDatasetMetadataRequirements:(bool)arg2;

@end
