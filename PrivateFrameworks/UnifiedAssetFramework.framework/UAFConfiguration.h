
@interface UAFConfiguration : NSObject

+ (bool)autoAssetFeatureEnabled:(id)arg1;
+ (bool)isValid:(id)arg1 fileType:(id)arg2 fileVersions:(id)arg3 error:(id*)arg4;
+ (bool)isValidValue:(id)arg1 key:(id)arg2 kind:(Class)arg3 required:(bool)arg4 error:(id*)arg5;

@end
