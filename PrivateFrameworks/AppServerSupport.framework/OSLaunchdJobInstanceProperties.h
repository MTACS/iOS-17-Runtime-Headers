
@interface OSLaunchdJobInstanceProperties : NSObject {
    NSDictionary * _environmentVariables;
    NSString * _sandboxProfile;
}

@property (nonatomic, retain) NSDictionary *environmentVariables;
@property (nonatomic, retain) NSString *sandboxProfile;

- (void).cxx_destruct;
- (id)environmentVariables;
- (id)sandboxProfile;
- (void)setEnvironmentVariables:(id)arg1;
- (void)setSandboxProfile:(id)arg1;

@end
