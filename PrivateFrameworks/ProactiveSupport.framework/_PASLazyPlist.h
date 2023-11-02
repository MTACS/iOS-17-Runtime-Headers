
@interface _PASLazyPlist : NSObject

+ (id)arrayWithData:(id)arg1 error:(id*)arg2;
+ (id)arrayWithPath:(id)arg1 error:(id*)arg2;
+ (id)dataWithPropertyList:(id)arg1 error:(id*)arg2;
+ (id)dataWithPropertyList:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3;
+ (id /* block */)deserializationStatsHandler;
+ (id)dictionaryWithData:(id)arg1 error:(id*)arg2;
+ (id)dictionaryWithPath:(id)arg1 error:(id*)arg2;
+ (id)fileBackedDataWithPropertyList:(id)arg1 appendedToFd:(int)arg2 format:(unsigned long long)arg3 startOfs:(long long*)arg4 error:(id*)arg5;
+ (id)fileBackedDataWithPropertyList:(id)arg1 appendedToFd:(int)arg2 startOfs:(long long*)arg3 error:(id*)arg4;
+ (id)fileBackedDataWithPropertyList:(id)arg1 writtenToPath:(id)arg2 error:(id*)arg3;
+ (id)fileBackedDataWithPropertyList:(id)arg1 writtenToPath:(id)arg2 format:(unsigned long long)arg3 error:(id*)arg4;
+ (bool)isLazyPlistLikelyContainedInData:(id)arg1 format:(unsigned long long*)arg2;
+ (bool)isLazyPlistLikelyContainedInFileAtPath:(id)arg1 format:(unsigned long long*)arg2;
+ (id)lazyPlistArrayWithPlistArray:(id)arg1;
+ (id)lazyPlistDictionaryWithPlistDictionary:(id)arg1;
+ (id)lazyPlistWithPlist:(id)arg1;
+ (id)propertyListWithData:(id)arg1 error:(id*)arg2;
+ (id)propertyListWithPath:(id)arg1 error:(id*)arg2;
+ (id)propertyListWithPath:(id)arg1 fileRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 error:(id*)arg3;
+ (id /* block */)serializationStatsHandler;
+ (void)setDeserializationStatsHandler:(id /* block */)arg1;
+ (void)setSerializationStatsHandler:(id /* block */)arg1;

- (id)init;

@end
