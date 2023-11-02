
@interface MLModelDescriptionUtils : NSObject

+ (void)copyFeatureDescriptionFrom:(id)arg1 to:(void*)arg2 error:(id*)arg3;
+ (void*)createFeatureTypeFromFeatureDescription:(id)arg1 error:(id*)arg2;
+ (void*)createMetaData:(id)arg1;
+ (void*)createModelDescription:(id)arg1 error:(id*)arg2;
+ (void*)getArrayFeatureTypeFromConstraint:(id)arg1;
+ (void*)getDictionaryFeatureTypeFromConstraint:(id)arg1 error:(id*)arg2;
+ (void*)getImageFeatureTypeFromConstraint:(id)arg1;
+ (void*)getSequenceFeatureTypeFromConstraint:(id)arg1 error:(id*)arg2;
+ (bool)saveModelDescription:(id)arg1 toSpecification:(void*)arg2 error:(id*)arg3;
+ (bool)validateAllFeatureDescriptions:(id)arg1 hasAnyFeatureTypeIn:(id)arg2 minimalCount:(unsigned long long)arg3 maximumCount:(unsigned long long)arg4 debugLabel:(id)arg5 error:(id*)arg6;

@end
