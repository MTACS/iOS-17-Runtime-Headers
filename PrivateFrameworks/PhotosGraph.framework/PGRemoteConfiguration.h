
@interface PGRemoteConfiguration : NSObject {
    NSArray * _configurationSources;
    NSMutableDictionary * _remoteConfigurationCache;
}

- (void).cxx_destruct;
- (void)_cacheFallbackValueForKey:(id)arg1 withValue:(id)arg2;
- (id)_configValueForKey:(id)arg1 withFallbackValue:(id)arg2;
- (bool)_isValidFilePath:(id)arg1;
- (id)arrayValueForKey:(id)arg1 withFallbackValue:(id)arg2;
- (bool)boolValueForKey:(id)arg1 withFallbackValue:(bool)arg2;
- (id)dictionaryValueForKey:(id)arg1 withFallbackValue:(id)arg2;
- (double)doubleValueForKey:(id)arg1 withFallbackValue:(double)arg2;
- (id)fileValueForKey:(id)arg1 withFallbackValue:(id)arg2;
- (id)init;
- (id)initWithConfigurationSources:(id)arg1;
- (id)initWithTrialNamespace:(unsigned short)arg1 onDiskResourceFile:(id)arg2;
- (long long)longValueForKey:(id)arg1 withFallbackValue:(long long)arg2;
- (id)onDiskConfigurationPathForResourceFileName:(id)arg1;
- (id)stringValueForKey:(id)arg1 withFallbackValue:(id)arg2;

@end
