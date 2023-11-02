
@interface NDOServerVersionUtilities : NSObject

+ (void)_dictionaryFromURL:(id)arg1 shouldRetry:(bool)arg2 withCompletion:(id /* block */)arg3;
+ (void)_supportedVersionsForClientAndServer:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
+ (void)getDecodedParamsForPath:(id)arg1 withCompletion:(id /* block */)arg2;
+ (id)getValidServerVersionCache;
+ (bool)isHighServerVersionFeaturesetEnabled;
+ (void)isHighServerVersionFeaturesetEnabled:(id /* block */)arg1;
+ (void)isHighServerVersionFeaturesetEnabled:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
+ (id)readULWebURLOverride;
+ (id)readWebURLOverride;
+ (void)serverVersionSupported:(id /* block */)arg1;

@end
