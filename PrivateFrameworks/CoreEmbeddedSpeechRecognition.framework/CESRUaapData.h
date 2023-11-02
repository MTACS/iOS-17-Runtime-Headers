
@interface CESRUaapData : NSObject

+ (id)readUaapOovsForLanguage:(id)arg1;
+ (bool)removeUaapOovsForLanguage:(id)arg1 bundleId:(id)arg2;
+ (bool)writeUaapOovsForLanguage:(id)arg1 bundleId:(id)arg2 customProns:(id)arg3 newOovs:(id)arg4 error:(id*)arg5;

@end
