
@interface BLTObjectSerializer : NSObject

+ (id)serializeObject:(id)arg1 nulls:(id*)arg2 error:(id*)arg3;
+ (unsigned long long)sizeOfObject:(id)arg1;
+ (id)unserializeObject:(id)arg1 nulls:(id)arg2 error:(id*)arg3;

@end
