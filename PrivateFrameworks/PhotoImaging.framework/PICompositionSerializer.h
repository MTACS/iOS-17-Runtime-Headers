
@interface PICompositionSerializer : NSObject

+ (bool)_addDummySourceToCompositionIfNeeded:(id)arg1;
+ (void)_sanitizeComposition:(id)arg1;
+ (id)_serializeComposition:(id)arg1 versionInfo:(id)arg2 needsGeometry:(bool)arg3 error:(out id*)arg4;
+ (bool)_validateValueTypesForKeys:(id)arg1 requiredKeys:(id)arg2 inDictionary:(id)arg3 error:(out id*)arg4;
+ (id)adjustmentInformationForComposition:(id)arg1 error:(out id*)arg2;
+ (id)adjustmentInformationForComposition:(id)arg1 needsGeometry:(bool)arg2 error:(out id*)arg3;
+ (bool)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2;
+ (id)deserializeCompositionFromAdjustments:(id)arg1 metadata:(id)arg2 formatIdentifier:(id)arg3 formatVersion:(id)arg4 error:(out id*)arg5;
+ (id)deserializeCompositionFromData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 error:(out id*)arg4;
+ (id)deserializeDictionaryFromData:(id)arg1 error:(out id*)arg2;
+ (void)disableApertureEffects:(bool)arg1;
+ (void)initialize;
+ (id)serializeComposition:(id)arg1 versionInfo:(id)arg2 error:(out id*)arg3;
+ (id)serializeComposition:(id)arg1 versionInfo:(id)arg2 serializerMetadata:(id)arg3 error:(out id*)arg4;
+ (id)serializeDictionary:(id)arg1 error:(out id*)arg2;
+ (bool)validateAdjustmentsEnvelope:(id)arg1 error:(out id*)arg2;
+ (bool)validateCompositionWithMissingSource:(id)arg1 error:(out id*)arg2;

@end
