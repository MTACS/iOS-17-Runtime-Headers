
@interface LSServerOpenStagingIOPersonality : NSObject <LSOpenStagingDirectoryManagerIOPersonality>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)mainSystemContainerURL;
- (id)mainUserContainerURL;
- (id)makeStagingDirectoryNodeInContainer:(id)arg1 error:(id*)arg2;
- (struct optional<LaunchServices::StagingDirectoryInfo> { union { BOOL x_1_1_1; struct StagingDirectoryInfo { id x_2_2_1; id x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; bool x2; })stagingDirectoryInfoForPersonaUniqueString:(id)arg1 error:(id*)arg2;
- (struct optional<unsigned long long> { union { BOOL x_1_1_1; unsigned long long x_1_1_2; } x1; bool x2; })stagingDirectoryKeyForFileHandle:(id)arg1 error:(id*)arg2;
- (struct optional<unsigned long long> { union { BOOL x_1_1_1; unsigned long long x_1_1_2; } x1; bool x2; })stagingDirectoryKeyForNode:(id)arg1 error:(id*)arg2;

@end
