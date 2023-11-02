
@interface AKAuthorizationValidator : NSObject

+ (bool)_requirePasscodeSet;
+ (bool)canPerformAuthorizationRequest:(id)arg1 error:(id*)arg2;
+ (bool)canPerformCredentialRequest:(id)arg1 error:(id*)arg2;
+ (bool)canPerformPasswordRequest:(id)arg1 error:(id*)arg2;
+ (bool)shouldContinueWithResponse:(id)arg1 error:(id*)arg2;

@end
