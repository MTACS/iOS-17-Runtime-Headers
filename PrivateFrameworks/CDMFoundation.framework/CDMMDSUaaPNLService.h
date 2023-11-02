
@interface CDMMDSUaaPNLService : CDMUaaPNLProtoService

+ (id)getAssetFolderNamesByTrialFactorNames;
+ (bool)isAssetRequired;
+ (bool)isEnabled;

- (int)getOverrideNamespace;
- (id)setup:(id)arg1;

@end
