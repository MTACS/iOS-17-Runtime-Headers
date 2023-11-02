
@interface DIError : NSObject

+ (id)copyDefaultLocalizedStringForDIErrorCode:(long long)arg1;
+ (id)errorWithDIException:(const void*)arg1 description:(id)arg2 prefix:(id)arg3 error:(id*)arg4;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 verboseInfo:(id)arg4 error:(id*)arg5;
+ (id)errorWithEnumValue:(long long)arg1 verboseInfo:(id)arg2;
+ (id)errorWithPOSIXCode:(int)arg1 verboseInfo:(id)arg2;
+ (bool)failWithDIException:(const void*)arg1 description:(id)arg2 error:(id*)arg3;
+ (bool)failWithDIException:(const void*)arg1 prefix:(id)arg2 error:(id*)arg3;
+ (bool)failWithEnumValue:(long long)arg1 description:(id)arg2 error:(id*)arg3;
+ (bool)failWithEnumValue:(long long)arg1 verboseInfo:(id)arg2 error:(id*)arg3;
+ (bool)failWithOSStatus:(int)arg1 description:(id)arg2 error:(id*)arg3;
+ (bool)failWithOSStatus:(int)arg1 verboseInfo:(id)arg2 error:(id*)arg3;
+ (bool)failWithPOSIXCode:(int)arg1 description:(id)arg2 error:(id*)arg3;
+ (bool)failWithPOSIXCode:(int)arg1 error:(id*)arg2;
+ (bool)failWithPOSIXCode:(int)arg1 verboseInfo:(id)arg2 error:(id*)arg3;
+ (id)frameworkBundle;
+ (bool)mandatoryArgumentFailWithError:(id*)arg1;
+ (id)nilWithDIException:(const void*)arg1 description:(id)arg2 error:(id*)arg3;
+ (id)nilWithDIException:(const void*)arg1 prefix:(id)arg2 error:(id*)arg3;
+ (id)nilWithEnumValue:(long long)arg1 description:(id)arg2 error:(id*)arg3;
+ (id)nilWithEnumValue:(long long)arg1 verboseInfo:(id)arg2 error:(id*)arg3;
+ (id)nilWithOSStatus:(int)arg1 verboseInfo:(id)arg2 error:(id*)arg3;
+ (id)nilWithPOSIXCode:(int)arg1 description:(id)arg2 error:(id*)arg3;
+ (id)nilWithPOSIXCode:(int)arg1 verboseInfo:(id)arg2 error:(id*)arg3;

@end
