
@interface CNPropertyListSerialization : NSObject

+ (id)dataWithObject:(id)arg1;
+ (id)dataWithObject:(id)arg1 error:(id*)arg2;
+ (id)mutableObjectWithData:(id)arg1;
+ (id)mutableObjectWithData:(id)arg1 error:(id*)arg2;
+ (id)objectWithData:(id)arg1;
+ (id)objectWithData:(id)arg1 error:(id*)arg2;
+ (id)objectWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end
