
@interface ATXModeFaceSuggestionGenerator : NSObject <ATXSuggestedSpacesEnvironment> {
    NSDictionary * _appLaunchCounts;
    NSSet * _suggestedApps;
    ATXSuggestedPagesTunableConstants * _tunableConstants;
}

@property (nonatomic, readonly) NSDictionary *appLaunchCounts;
@property (nonatomic, readonly) NSSet *suggestedApps;
@property (nonatomic, readonly) ATXSuggestedPagesTunableConstants *tunableConstants;

- (void).cxx_destruct;
- (id)_facesForModeType:(long long)arg1 modeUUID:(id)arg2 allDescriptors:(id)arg3;
- (id)_firstDescriptorWithExtension:(id)arg1 focus:(long long)arg2 allDescriptors:(id)arg3;
- (id)_firstDescriptorWithExtension:(id)arg1 identifier:(id)arg2 allDescriptors:(id)arg3;
- (id)_firstPhotosDescriptorMatchingSubtype:(long long)arg1 allDescriptors:(id)arg2;
- (id)_posterCandidatesForModeType:(long long)arg1 allDescriptors:(id)arg2;
- (id)appLaunchCounts;
- (id)facesForMode:(id)arg1 allDescriptors:(id)arg2;
- (void)generateAndCacheFacesFromDescriptors:(id)arg1;
- (id)generateFacesFromDescriptors:(id)arg1;
- (id)init;
- (id)suggestedApps;
- (id)tunableConstants;

@end
