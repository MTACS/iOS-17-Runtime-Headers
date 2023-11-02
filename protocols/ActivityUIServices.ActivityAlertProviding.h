
@protocol ActivityUIServices.ActivityAlertProviding

@required

- (long long)action;
- (TLAlertConfiguration *)configuration;
- (NSString *)identifier;
- (NSString *)payloadIdentifier;
- (ACAlertPresentationOptions *)presentationOptions;

@end
