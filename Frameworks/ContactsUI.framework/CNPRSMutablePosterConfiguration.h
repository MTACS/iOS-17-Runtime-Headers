
@interface CNPRSMutablePosterConfiguration : CNPRSPosterConfiguration {
    PRSMutablePosterConfiguration * _wrappedMutablePosterConfiguration;
}

@property (nonatomic, copy) NSURL *assetDirectory;
@property (nonatomic, readonly, copy) PRSMutablePosterConfiguration *wrappedMutablePosterConfiguration;

- (void).cxx_destruct;
- (id)assetDirectory;
- (id)init;
- (bool)storeUserInfo:(id)arg1 error:(out id*)arg2;
- (id)wrappedMutablePosterConfiguration;

@end
