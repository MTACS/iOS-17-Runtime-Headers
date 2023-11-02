
@interface _LTTextLanguageDetectionResult : NSObject <NSSecureCoding> {
    NSLocale * _dominantLocale;
    NSCountedSet * _localeDetectionCount;
    NSCountedSet * _unsupportedLanguageCounts;
}

@property (nonatomic, copy) NSLocale *dominantLocale;
@property (nonatomic, retain) NSCountedSet *localeDetectionCount;
@property (nonatomic, retain) NSCountedSet *unsupportedLanguageCounts;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dominantLocale;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localeDetectionCount;
- (void)setDominantLocale:(id)arg1;
- (void)setLocaleDetectionCount:(id)arg1;
- (void)setUnsupportedLanguageCounts:(id)arg1;
- (id)unsupportedLanguageCounts;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (void)sendAnalytics:(id)arg1 isSupported:(bool)arg2;

- (id)initWithDetectedLocales:(id)arg1 unknownLanguages:(id)arg2;
- (id)initWithDetectionCounts:(id)arg1 availableLocales:(id)arg2;
- (id)initWithScorer:(id)arg1;

@end
