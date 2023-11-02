
@interface HMBSQLFile : HMFObject

+ (void)close:(id)arg1;
+ (id)contexts;
+ (id)open:(id)arg1;
+ (id)open:(id)arg1 readOnly:(bool)arg2 error:(id*)arg3 initializer:(id /* block */)arg4;
+ (id)open:(id)arg1 readOnly:(bool)arg2 using:(Class)arg3 error:(id*)arg4;
+ (void)removeDatastoreAtURL:(id)arg1;

@end
