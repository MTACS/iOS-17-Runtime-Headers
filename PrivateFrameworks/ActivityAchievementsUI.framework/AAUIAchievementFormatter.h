
@interface AAUIAchievementFormatter : NSObject {
    ACHAchievement * _achievement;
    bool  _formatsForFriend;
    AAUIAchievementLocalizationProvider * _locProvider;
    long long  _style;
}

@property (nonatomic, retain) ACHAchievement *achievement;
@property (nonatomic) bool formatsForFriend;
@property (nonatomic, retain) AAUIAchievementLocalizationProvider *locProvider;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (id)achievement;
- (id)backsideAttributesWithSizeVariant:(long long)arg1;
- (id)descriptionAttributes;
- (bool)formatsForFriend;
- (id)initWithStyle:(long long)arg1 achievement:(id)arg2 localizationProvider:(id)arg3;
- (id)locProvider;
- (id)localizedAttributedBacksideString;
- (id)localizedAttributedBacksideStringWithDateSizeVariant:(long long)arg1;
- (id)localizedAttributedCombinedString;
- (id)localizedAttributedCombinedStringShowingProgress:(bool)arg1;
- (id)localizedAttributedCombinedStringWithoutProgress;
- (id)localizedAttributedDescriptionString;
- (id)localizedAttributedShortDescriptionString;
- (id)localizedAttributedShortenedBacksideString;
- (id)localizedAttributedTitleString;
- (void)setAchievement:(id)arg1;
- (void)setFormatsForFriend:(bool)arg1;
- (void)setLocProvider:(id)arg1;
- (void)setStyle:(long long)arg1;
- (bool)shouldShowEarnedShortDescription;
- (long long)style;
- (id)titleAttributes;

@end
