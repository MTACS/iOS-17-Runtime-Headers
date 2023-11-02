
@interface MLModelIOUtils : NSObject

+ (id)descriptionFromProto:(const void*)arg1;
+ (bool)deserializeInterfaceFormat:(void*)arg1 archive:(void*)arg2 error:(id*)arg3;
+ (id)deserializeMetadataAndInterfaceFromArchive:(void*)arg1 error:(id*)arg2;
+ (id)deserializeVersionInfoFromArchive:(void*)arg1 error:(id*)arg2;
+ (id)inputDescriptionFromInterface:(void*)arg1;
+ (id)loadFromModelSpecificationInArchive:(void*)arg1 withClass:(Class)arg2 versionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
+ (id)orderedFeatureNamesFromInterface:(void*)arg1 forInput:(bool)arg2;
+ (id)orderedNamesFromProto:(const void*)arg1;
+ (id)outputDescriptionFromInterface:(void*)arg1;
+ (id)populateConstraintsForFeatureDescription:(const void*)arg1;
+ (id)populateConstraintsForImageFeatureDescription:(const void*)arg1;
+ (id)populateConstraintsForImageFeatureDescriptionElement:(void*)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeFromAllowedSizeRangeProtoMessage:(const void*)arg1;
+ (bool)serializeInterfaceFormat:(void*)arg1 archive:(void*)arg2 error:(id*)arg3;
+ (bool)serializeMetadataAndInterfaceFromSpecification:(void*)arg1 archive:(void*)arg2 error:(id*)arg3;
+ (id)serializeSpecification:(void*)arg1 toArchive:(void*)arg2 error:(id*)arg3;
+ (bool)serializeVersionInfo:(id)arg1 archive:(void*)arg2 error:(id*)arg3;
+ (id)specificationURLFromModelAtURL:(id)arg1 error:(id*)arg2;
+ (id)trainingInputDescriptionFromInterface:(void*)arg1;
+ (id)versionForSerializedSpecification:(void*)arg1 options:(id)arg2 error:(id*)arg3;

@end
