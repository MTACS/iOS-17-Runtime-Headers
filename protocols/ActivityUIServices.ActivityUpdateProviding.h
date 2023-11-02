
@protocol ActivityUIServices.ActivityUpdateProviding

@required

- (long long)activityState;
- (ACActivityDescriptor *)descriptor;
- (NSString *)identifier;

@end
