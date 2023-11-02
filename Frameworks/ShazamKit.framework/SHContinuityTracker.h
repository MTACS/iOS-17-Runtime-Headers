
@interface SHContinuityTracker : NSObject

+ (id)buildSignatureAlignment:(id)arg1;
+ (long long)mergePolicyToSignatureAlignmentMergeMode:(long long)arg1;
+ (id)trackQuerySignature:(id)arg1 inReferenceSignature:(id)arg2 error:(id*)arg3;
+ (id)trackQuerySignature:(id)arg1 inReferenceSignature:(id)arg2 usingMergePolicy:(long long)arg3 error:(id*)arg4;

@end
