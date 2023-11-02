
@interface DYKeyedUnarchiver : NSObject

+ (id)allClassSet;
+ (id)captureArchiveClassSet;
+ (id)graphicsAPIInfosClassSet;
+ (void)registerRuntimeClass:(id)arg1 withSet:(id)arg2;
+ (id)unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3;
+ (id)unarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3;

@end
