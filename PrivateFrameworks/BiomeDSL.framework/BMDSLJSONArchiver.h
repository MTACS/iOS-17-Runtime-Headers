
@interface BMDSLJSONArchiver : NSCoder

+ (id)archiveCompatibleObjectWithObject:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3;
+ (id)archivedDataWithDSL:(id)arg1;
+ (id)archivedDataWithObject:(id)arg1;
+ (id)archivedStringWithDSL:(id)arg1;
+ (id)archivedStringWithObject:(id)arg1;
+ (void)registerJSONTransformers;

@end
