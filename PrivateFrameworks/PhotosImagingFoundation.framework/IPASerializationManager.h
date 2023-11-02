
@interface IPASerializationManager : NSObject

+ (id)_serializerForFormat:(id)arg1 formatVersion:(id)arg2 error:(id*)arg3;
+ (BOOL)adjustmentTypeForFormat:(id)arg1 formatVersion:(id)arg2;
+ (BOOL)debug_adjustmentTypeFromEnvelopeDictionary:(id)arg1;
+ (id)debug_deserializeEnvelopeDictionary:(id)arg1 error:(id*)arg2;
+ (id)debug_serializeEnvelope:(id)arg1 error:(id*)arg2;
+ (id)deserialize:(id)arg1 originator:(id)arg2 format:(id)arg3 formatVersion:(id)arg4 error:(id*)arg5;
+ (id)formatForAdjustmentStack:(id)arg1;
+ (void)initialize;
+ (id)serialize:(id)arg1 error:(id*)arg2;
+ (id)serialize:(id)arg1 format:(id)arg2 formatVersion:(id)arg3 error:(id*)arg4;
+ (id)serializeWithCurrentDefaultFormat:(id)arg1 error:(id*)arg2;
+ (id)serializeWithCurrentDefaultFormat:(id)arg1 format:(id*)arg2 formatVersion:(id*)arg3 error:(id*)arg4;
+ (id)serializerMap;

@end
