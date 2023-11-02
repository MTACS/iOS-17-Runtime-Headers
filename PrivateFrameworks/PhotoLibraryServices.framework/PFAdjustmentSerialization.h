
@interface PFAdjustmentSerialization : NSObject

+ (id)deserializeAdjustmentsFromData:(id)arg1 error:(id*)arg2;
+ (id)deserializeDictionaryFromData:(id)arg1 error:(id*)arg2;
+ (id)serializeAdjustments:(id)arg1 error:(id*)arg2;
+ (id)serializeDictionary:(id)arg1 error:(id*)arg2;
+ (bool)validateArchive:(id)arg1 containsEntryWithKey:(id)arg2 ofType:(Class)arg3 errors:(id)arg4;
+ (bool)validateValue:(id)arg1 isOfType:(Class)arg2 errors:(id)arg3;

@end