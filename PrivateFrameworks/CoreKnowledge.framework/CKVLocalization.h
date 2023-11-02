
@interface CKVLocalization : NSObject <NSSecureCoding> {
    int  _assetRequestCount;
    bool  _assetResolved;
    NSURL * _cachedAssetPath;
    NSSet * _dictationLanguageCodes;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _siriLanguageCode;
}

+ (id)defaultLocalization;
+ (id)supportedLanguageCodeFromLocale:(id)arg1;
+ (long long)supportedLocaleFromLanguageCode:(id)arg1;
+ (id)supportedNSLocaleFromLanguageCode:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_locateMorphunAssetForLocale:(id)arg1 outAssetPath:(id*)arg2;
- (id)allLanguageCodes;
- (id)dictationLanguageCodes;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSiriLanguageCode:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLocalization:(id)arg1;
- (long long)locateMorphunAssetForSiriLanguage:(id*)arg1;
- (void)refresh;
- (id)siriLanguageCode;

@end
