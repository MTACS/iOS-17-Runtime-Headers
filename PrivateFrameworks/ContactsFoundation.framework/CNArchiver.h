
@interface CNArchiver : NSObject

+ (id)decodeObjectOfClass:(Class)arg1 associatedClasses:(id)arg2 data:(id)arg3 error:(id*)arg4;
+ (id)decodeObjectOfClass:(Class)arg1 data:(id)arg2 error:(id*)arg3;
+ (id)encodeObject:(id)arg1 error:(id*)arg2;
+ (id)os_log;

@end
