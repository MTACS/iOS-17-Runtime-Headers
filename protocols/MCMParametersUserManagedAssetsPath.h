
@protocol MCMParametersUserManagedAssetsPath <MCMParametersWithContainer>

@required

- (bool)createIfNecessary;
- (bool)isRelative;

@end
