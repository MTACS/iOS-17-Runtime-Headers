
@protocol ACMExternalAuthenticationControllerDelegate <NSObject>

@required

- (void)authenticationController:(void *)arg1 perform2StepVerificationWithRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ACMExternalAuthenticationController *, ACFMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, <ACCSSOTokenProtocol> *, void*
- (void)authenticationController:(void *)arg1 scheduleHandler:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: ACMExternalAuthenticationController *, ACCHTTPHandler *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
