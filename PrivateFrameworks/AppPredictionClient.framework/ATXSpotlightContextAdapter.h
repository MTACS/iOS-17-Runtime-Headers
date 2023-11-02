
@interface ATXSpotlightContextAdapter : NSObject {
    NSDate * _nowDate;
}

+ (bool)isSpotlightRecentSectionIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_absoluteDateContextTitleWithSuggestion:(id)arg1 eventTitle:(id)arg2;
- (bool)_hourIsOneWithDate:(id)arg1;
- (id)_stringWithInterval:(double)arg1;
- (id)contextCodeIdentifierWithSectionBundleIdentifier:(id)arg1;
- (id)contextTitleWithSuggestion:(id)arg1 eventTitle:(id)arg2;
- (id)init;
- (id)initWithNowDate:(id)arg1;
- (bool)isSportsGameSectionIdentifier:(id)arg1;
- (id)nsuaSectionIdentifier;
- (id)sectionIdentifierForContextCode:(long long)arg1;
- (id)topAutoShortcutSectionIdentifier;

@end
