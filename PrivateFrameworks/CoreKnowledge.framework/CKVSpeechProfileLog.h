
@interface CKVSpeechProfileLog : NSObject {
    long long  _locale;
    KVDictionaryLog * _log;
}

@property (nonatomic, readonly) long long locale;

+ (id)allLogsInProfileDirectory:(id)arg1;

- (void).cxx_destruct;
- (id)_updateVersion:(id)arg1 forKeys:(id)arg2 logKey:(id)arg3;
- (id)description;
- (id)init;
- (id)initWithProfileDirectory:(id)arg1 locale:(long long)arg2;
- (id)lastCompletedVersionForOriginAppId:(id)arg1;
- (id)lastCompletedVersionForSpeechCategory:(id)arg1;
- (id)lastRegisteredVersionForSpeechCategory:(id)arg1;
- (long long)locale;
- (void)recordUpdateCompletedForSpeechCategories:(id)arg1 originAppIds:(id)arg2 version:(id)arg3;
- (void)registerUpdateForSpeechCategories:(id)arg1 version:(id)arg2;
- (bool)remove;

@end
