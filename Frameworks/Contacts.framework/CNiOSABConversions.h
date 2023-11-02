
@interface CNiOSABConversions : NSObject

+ (id)arrayByMappingTransform:(id /* block */)arg1 onCFArray:(struct __CFArray { }*)arg2;
+ (id)contactFromABPerson:(void*)arg1 uniqueKeysToConvert:(id)arg2 mutable:(bool)arg3;
+ (id)dataFromABBytes:(char *)arg1 length:(unsigned long long)arg2;
+ (id)dateFromABBytes:(char *)arg1 length:(unsigned long long)arg2;
+ (void)initialize;
+ (id)numberFromIntegerABBytes:(char *)arg1 length:(unsigned long long)arg2;
+ (id)os_log;
+ (id)stringFromABBytes:(char *)arg1 length:(unsigned long long)arg2;
+ (void)updateContact:(id)arg1 fromABPerson:(void*)arg2 keysToConvert:(id)arg3 availableKeyDescriptor:(id*)arg4;

@end
