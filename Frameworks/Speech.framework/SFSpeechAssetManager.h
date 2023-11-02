
@interface SFSpeechAssetManager : NSObject

+ (id)_assetQueryForLanguage:(id)arg1;
+ (id)assetPathForLanguage:(id)arg1;
+ (id)assetPathForLanguage:(id)arg1 clientIdentifier:(id)arg2;
+ (id)configParametersForVoicemailWithLanguage:(id)arg1;
+ (id)configParametersForVoicemailWithLanguage:(id)arg1 clientIdentifier:(id)arg2;
+ (void)fetchAssetsForLanguage:(id)arg1 clientIdentifier:(id)arg2 urgent:(bool)arg3 forceUpgrade:(bool)arg4 detailedProgress:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)fetchAssetsForLanguage:(id)arg1 clientIdentifier:(id)arg2 urgent:(bool)arg3 forceUpgrade:(bool)arg4 progress:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)fetchAssetsForLanguage:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)fetchAssetsForLanguage:(id)arg1 urgent:(bool)arg2 forceUpgrade:(bool)arg3 detailedProgress:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)fetchAssetsForLanguage:(id)arg1 urgent:(bool)arg2 forceUpgrade:(bool)arg3 progress:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)fetchAssetsForLanguage:(id)arg1 urgent:(bool)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (id)installedLanguages;
+ (void)installedLanguagesWithCompletion:(id /* block */)arg1;
+ (void)promoteAssets;
+ (void)purgeAssetsForLanguage:(id)arg1 clientIdentifier:(id)arg2 error:(id*)arg3;
+ (void)purgeAssetsForLanguage:(id)arg1 error:(id*)arg2;
+ (void)setAssetsAsProvisional;
+ (void)setAssetsPurgeability:(bool)arg1 forLanguages:(id)arg2 error:(id*)arg3;

@end
