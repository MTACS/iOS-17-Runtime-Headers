
@interface VNError : NSObject

+ (void)VNAssert:(bool)arg1 log:(id)arg2;
+ (void)VNAssertClass:(Class)arg1 needsToOverrideMethod:(SEL)arg2;
+ (id)errorForCVReturnCode:(int)arg1 localizedDescription:(id)arg2;
+ (id)errorForCVReturnCode:(int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelFormat:(unsigned int)arg4 localizedDescription:(id)arg5;
+ (id)errorForCancellationOfRequest:(id)arg1;
+ (id)errorForDataUnavailableWithLocalizedDescription:(id)arg1;
+ (id)errorForDataUnavailableWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForEspressoErrorInfo:(struct { int x1; int x2; char *x3; })arg1 localizedDescription:(id)arg2;
+ (id)errorForEspressoReturnStatus:(int)arg1 localizedDescription:(id)arg2;
+ (id)errorForExecutionTimeoutWithLocalizedDescription:(id)arg1;
+ (id)errorForExecutionTimeoutWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForFailedEspressoPlan:(void*)arg1 localizedDescription:(id)arg2;
+ (id)errorForGPURequiredByRequest:(id)arg1;
+ (id)errorForInternalErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForInternalErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForInvalidArgument:(id)arg1 named:(id)arg2;
+ (id)errorForInvalidArgumentWithLocalizedDescription:(id)arg1;
+ (id)errorForInvalidFormatErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForInvalidImageFailure;
+ (id)errorForInvalidImageFailureWithLocalizedDescription:(id)arg1;
+ (id)errorForInvalidModelWithLocalizedDescription:(id)arg1;
+ (id)errorForInvalidModelWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForInvalidOperationForRequestClass:(Class)arg1 revision:(unsigned long long)arg2;
+ (id)errorForInvalidOperationForRequestSpecifier:(id)arg1;
+ (id)errorForInvalidOperationWithLocalizedDescription:(id)arg1;
+ (id)errorForInvalidOption:(id)arg1 named:(id)arg2;
+ (id)errorForInvalidOption:(id)arg1 named:(id)arg2 localizedDescription:(id)arg3;
+ (id)errorForInvalidOptionWithLocalizedDescription:(id)arg1;
+ (id)errorForMemoryAllocationFailure;
+ (id)errorForMemoryAllocationFailureWithLocalizedDescription:(id)arg1;
+ (id)errorForMissingOptionNamed:(id)arg1;
+ (id)errorForOSStatus:(int)arg1 localizedDescription:(id)arg2;
+ (id)errorForOperationFailedErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForOperationFailedErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForOutOfBoundsErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForUnavailableSession;
+ (id)errorForUnimplementedFunctionWithLocalizedDescription:(id)arg1;
+ (id)errorForUnimplementedMethod:(SEL)arg1 ofObject:(id)arg2;
+ (id)errorForUnknownErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForUnsupportedComputeDevice:(id)arg1;
+ (id)errorForUnsupportedComputeDeviceWithLocalizedDescription:(id)arg1;
+ (id)errorForUnsupportedComputeStage:(id)arg1;
+ (id)errorForUnsupportedConfigurationOfRequest:(id)arg1;
+ (id)errorForUnsupportedProcessingDevice:(id)arg1;
+ (id)errorForUnsupportedRequestClassName:(id)arg1;
+ (id)errorForUnsupportedRequestSpecifier:(id)arg1;
+ (id)errorForUnsupportedRevision:(unsigned long long)arg1 ofRequest:(id)arg2;
+ (id)errorForUnsupportedRevision:(unsigned long long)arg1 ofRequestClass:(Class)arg2;
+ (id)errorForUnsupportedSerializingHeaderVersion:(unsigned int)arg1;
+ (id)errorForVImageError:(long long)arg1 localizedDescription:(id)arg2;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (void)logInternalError:(id)arg1;

@end
