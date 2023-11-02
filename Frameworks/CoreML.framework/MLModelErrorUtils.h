
@interface MLModelErrorUtils : NSObject

+ (id)IOErrorWithFormat:(id)arg1;
+ (id)customLayerErrorWithUnderlyingError:(id)arg1 withFormat:(id)arg2;
+ (id)errorWithCode:(long long)arg1 format:(id)arg2;
+ (id)errorWithCode:(long long)arg1 format:(id)arg2 args:(char *)arg3;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 format:(id)arg3;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 format:(id)arg3 args:(char *)arg4;
+ (id)errorWithIntegerCode:(long long)arg1 underlyingError:(id)arg2 format:(id)arg3 args:(char *)arg4;
+ (id)featureTypeErrorWithFormat:(id)arg1;
+ (id)genericErrorWithFormat:(id)arg1;
+ (id)modelDecryptionErrorWithUnderlyingError:(id)arg1 format:(id)arg2;
+ (id)modelDecryptionKeyFetchErrorWithUnderlyingError:(id)arg1 format:(id)arg2;
+ (id)modelEncryptionErrorWithUnderlyingError:(id)arg1 format:(id)arg2;
+ (id)parameterErrorWithUnderlyingError:(id)arg1 format:(id)arg2;
+ (id)privateErrorWithCode:(long long)arg1 underlyingError:(id)arg2 format:(id)arg3 args:(char *)arg4;
+ (id)programEvaluationErrorWithUnderlyingError:(id)arg1 format:(id)arg2;
+ (id)programParsingAtLoadErrorWithReason:(int)arg1 format:(id)arg2;
+ (id)programValidationAtLoadErrorWithReason:(int)arg1 format:(id)arg2;
+ (id)updateErrorWithFormat:(id)arg1;

@end
