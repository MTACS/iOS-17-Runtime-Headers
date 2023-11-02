
@interface CSUError : NSError

+ (void)CSUAssert:(bool)arg1 log:(id)arg2;
+ (id)errorForDataUnavailableWithLocalizedDescription:(id)arg1;
+ (id)errorForDataUnavailableWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForEspressoErrorInfo:(struct { int x1; int x2; char *x3; })arg1 localizedDescription:(id)arg2;
+ (id)errorForEspressoReturnStatus:(int)arg1 localizedDescription:(id)arg2;
+ (id)errorForFailedEspressoPlan:(void*)arg1 localizedDescription:(id)arg2;
+ (id)errorForInternalErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForInternalErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForInvalidArgument:(id)arg1 named:(id)arg2;
+ (id)errorForInvalidArgumentWithLocalizedDescription:(id)arg1;
+ (id)errorForInvalidModelWithLocalizedDescription:(id)arg1;
+ (id)errorForInvalidModelWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForMemoryAllocationFailure;
+ (id)errorForMemoryAllocationFailureWithLocalizedDescription:(id)arg1;
+ (id)errorForOSStatus:(int)arg1 localizedDescription:(id)arg2;
+ (id)errorForUnknownErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForUnsupportedRevision:(id)arg1;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3;
+ (void)logInternalError:(id)arg1;

@end
