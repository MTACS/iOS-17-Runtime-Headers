
@protocol SRAuthorizationPromptClientInterface <NSObject>

@required

- (void)authorizationRequestCompleted;
- (void)authorizationRequestDidDisappear;
- (void)authorizationRequestFailedWithError:(NSError *)arg1;
- (void)authorizationRequestWillDisappear;
- (void)authorizationUIReadyForDisplayModally:(bool)arg1;

@end
