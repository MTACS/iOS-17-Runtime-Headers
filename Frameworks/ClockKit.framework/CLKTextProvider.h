
@interface CLKTextProvider : NSObject <NSCopying, NSSecureCoding, REContentEncodable> {
    CLKClockTimerToken * _30fpsTimerToken;
    NSString * _accessibilityLabel;
    NSMutableDictionary * _cachesByKey;
    CLKTextProviderCache * _defaultCache;
    bool  _finalized;
    NSArray * _fontFeatures;
    bool  _ignoreUppercaseStyle;
    bool  _italicized;
    CLKClockTimerToken * _minuteTimerToken;
    bool  _monospacedNumbers;
    unsigned long long  _nextUpdateToken;
    bool  _paused;
    NSMutableArray * _recentCacheKeys;
    CLKClockTimerToken * _secondTimerToken;
    long long  _shrinkTextPreference;
    long long  _timeTravelUpdateFrequency;
    UIColor * _tintColor;
    NSMutableDictionary * _updateHandlersByToken;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly) NSString *contentEncodedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *fontFeatures;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreUppercaseStyle;
@property (nonatomic) bool italicized;
@property (nonatomic) bool monospacedNumbers;
@property (nonatomic) bool paused;
@property (nonatomic) long long shrinkTextPreference;
@property (readonly) Class superclass;
@property (nonatomic) long long timeTravelUpdateFrequency;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, readonly) long long updateFrequency;

// Image: /System/Library/Frameworks/ClockKit.framework/ClockKit

+ (id)localizableTextProviderWithStringsFileFormatKey:(id)arg1 textProviders:(id)arg2;
+ (id)localizableTextProviderWithStringsFileTextKey:(id)arg1;
+ (id)localizableTextProviderWithStringsFileTextKey:(id)arg1 shortTextKey:(id)arg2;
+ (id)new;
+ (id)providerWithJSONObjectRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)textProviderWithFormat:(id)arg1;
+ (id)textProviderWithFormat:(id)arg1 arguments:(char *)arg2;

- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)_cacheForKey:(id)arg1;
- (void)_commonInit;
- (id)_defaultCache;
- (id)_description;
- (void)_endSession;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)_italicize:(id)arg1;
- (void)_localeChanged;
- (id)_localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2;
- (void)_maybeStartOrStopUpdates;
- (id)_monospacedNumbers:(id)arg1;
- (void)_pruneCacheKeysIfNecessary;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (id)_sessionCacheKey;
- (void)_startSessionWithDate:(id)arg1;
- (id)_timeFormatByRemovingDesignatorOfTimeFormat:(id)arg1;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 andRemovingDesignator:(bool)arg2 designatorExists:(bool*)arg3;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)arg1 designatorExists:(bool*)arg2;
- (void)_update;
- (long long)_updateFrequency;
- (bool)_validate;
- (id)accessibilityLabel;
- (id)attributedString;
- (id)attributedTextAndSize:(struct CGSize { double x1; double x2; }*)arg1 forMaxWidth:(double)arg2 withStyle:(id)arg3 now:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)finalizedCopy;
- (id)fontFeatures;
- (unsigned long long)hash;
- (bool)ignoreUppercaseStyle;
- (id)init;
- (id)initPrivate;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)italicized;
- (id)localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2;
- (struct CGSize { double x1; double x2; })minimumSizeWithStyle:(id)arg1 now:(id)arg2;
- (bool)monospacedNumbers;
- (bool)paused;
- (id)sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setFontFeatures:(id)arg1;
- (void)setIgnoreUppercaseStyle:(bool)arg1;
- (void)setItalicized:(bool)arg1;
- (void)setMonospacedNumbers:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setShrinkTextPreference:(long long)arg1;
- (void)setTimeTravelUpdateFrequency:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (long long)shrinkTextPreference;
- (id)startUpdatesWithHandler:(id /* block */)arg1;
- (void)stopUpdatesForToken:(id)arg1;
- (long long)timeTravelUpdateFrequency;
- (id)tintColor;
- (long long)updateFrequency;
- (bool)validate;

// Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI

- (id)contentEncodedString;

@end
