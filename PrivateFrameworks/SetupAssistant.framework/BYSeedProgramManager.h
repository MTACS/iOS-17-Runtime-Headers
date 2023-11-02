
@interface BYSeedProgramManager : NSObject

@property (nonatomic, readonly) NSDictionary *currentEnrollmentMetadata;

- (id)currentEnrollmentMetadata;
- (long long)currentSeedProgram;
- (void)enrollInSeedProgramNamed:(id)arg1 withAssetAudience:(id)arg2 programID:(id)arg3 completion:(id /* block */)arg4;

@end
