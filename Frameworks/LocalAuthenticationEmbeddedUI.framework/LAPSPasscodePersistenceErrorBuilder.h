
@interface LAPSPasscodePersistenceErrorBuilder : NSObject

+ (id)_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)genericErrorWithDebugDescription:(id)arg1;
+ (id)genericErrorWithUserInfo:(id)arg1;
+ (id)invalidPasscodeError;
+ (bool)isInvalidPasscodeError:(id)arg1;

@end
