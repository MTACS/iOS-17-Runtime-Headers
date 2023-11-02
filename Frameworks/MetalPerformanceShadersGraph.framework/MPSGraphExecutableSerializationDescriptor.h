
@interface MPSGraphExecutableSerializationDescriptor : MPSGraphObject {
    bool  _append;
    unsigned long long  _deploymentPlatform;
    NSString * _minimumDeploymentTarget;
}

@property bool append;
@property unsigned long long deploymentPlatform;
@property (retain) NSString *minimumDeploymentTarget;

- (void).cxx_destruct;
- (bool)append;
- (unsigned long long)deploymentPlatform;
- (struct MPSGraphVersion { long long x1; long long x2; long long x3; })getDeploymentTargetAsOSVersion;
- (id)getPackageVersionString;
- (id)init;
- (id)minimumDeploymentTarget;
- (void)setAppend:(bool)arg1;
- (void)setDeploymentPlatform:(unsigned long long)arg1;
- (void)setMinimumDeploymentTarget:(id)arg1;
- (void)validateMinimumDeploymentTargetForPlatform;

@end
