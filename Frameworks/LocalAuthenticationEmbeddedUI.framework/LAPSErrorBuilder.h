
@interface LAPSErrorBuilder : NSObject

+ (id)_errorWithCode:(long long)arg1 debugDescription:(id)arg2;
+ (id)_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)_genericErrorWithDebugDescription:(id)arg1;
+ (id)_genericErrorWithUserInfo:(id)arg1;
+ (id)clientCanceledError;
+ (id)genericError;
+ (id)genericErrorWithDebugDescription:(id)arg1;
+ (id)genericErrorWithUnderlyingError:(id)arg1;
+ (id)invalidPasscodeErrorWithFailedAttemptsCount:(long long)arg1;
+ (id)invalidPasscodeErrorWithFailedAttemptsCount:(long long)arg1 backoffTimeout:(long long)arg2;
+ (id)newPasscodeDoesNotMeetRequirementsErrorWithLocalizedDescription:(id)arg1;
+ (id)newPasscodeIsTooEasyError;
+ (id)tooManyAttemptsError;
+ (id)userCanceledError;

@end
