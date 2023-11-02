
@interface NGMKeyValidator : NSObject

+ (bool)isValidKeyValidator:(id)arg1 receiversIdentity:(id)arg2 sendersIdentity:(id)arg3 error:(id*)arg4;
+ (id)keyValidatorWithReceiversIdentity:(id)arg1 sendersIdentity:(id)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOnPublicKey;
+ (unsigned long long)validatorLength;
+ (id)versionByte;

@end
