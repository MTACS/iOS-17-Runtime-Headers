
@protocol CAMIrisRequest <NSObject>

@required

- (NSString *)irisIdentifierForEV0:(bool)arg1;
- (NSURL *)irisLocalVideoDestinationURLForEV0:(bool)arg1;
- (long long)irisMode;
- (NSString *)irisStillImagePersistenceUUIDForEV0:(bool)arg1;
- (NSString *)irisVideoPersistenceUUIDForEV0:(bool)arg1;
- (bool)isEV0LocalVideoDestinationURL:(NSURL *)arg1;

@end
