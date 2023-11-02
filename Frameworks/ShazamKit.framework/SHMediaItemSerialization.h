
@interface SHMediaItemSerialization : NSObject

+ (id)dateFormatter;
+ (bool)isInternalMediaItemProperty:(id)arg1;
+ (id)propertiesFromSerializationFormat:(id)arg1 error:(id*)arg2;
+ (id)serializationFormatForProperties:(id)arg1 error:(id*)arg2;
+ (id)serializedFormatFromArrayValues:(id)arg1 property:(id)arg2;
+ (id)transformArrayValue:(id)arg1 property:(id)arg2 shouldSerialize:(bool)arg3;
+ (id)transformProperties:(id)arg1 toSerializationFormat:(bool)arg2 error:(id*)arg3;
+ (id)transformValue:(id)arg1 forProperty:(id)arg2 toSerializationFormat:(bool)arg3 error:(id*)arg4;

@end
