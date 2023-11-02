
@protocol FPUIAuthenticationConnectionFlowDelegate <NSObject>

@required

- (void)authenticationDelegate:(id <FPUIAuthenticationDelegate>)arg1 didEncounterError:(NSError *)arg2;
- (void)authenticationDelegate:(void *)arg1 didFinishWithError:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: <FPUIAuthenticationDelegate> *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)authenticationDelegate:(id <FPUIAuthenticationDelegate>)arg1 didReceiveCredentialDescriptors:(NSArray *)arg2;
- (void)authenticationDelegate:(id <FPUIAuthenticationDelegate>)arg1 didReceiveVolumeMountRepresentations:(NSArray *)arg2;

@end
