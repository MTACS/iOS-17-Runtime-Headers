
@interface PFCameraAdjustmentsSerialization : NSObject

+ (id)_errorWithMessage:(id)arg1 code:(long long)arg2;
+ (bool)deserializeDictionary:(id)arg1 toFilters:(id*)arg2 portraitMetadata:(id*)arg3 error:(id*)arg4;
+ (id)deserializedAdjustmentsFromData:(id)arg1 error:(id*)arg2;
+ (id)serializedAdjustments:(id)arg1 error:(id*)arg2;
+ (id)serializedDictionaryForFilters:(id)arg1 portraitMetadata:(id)arg2 error:(id*)arg3;
+ (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;

@end
