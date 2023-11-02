
@interface EMFEmojiPreferences : NSObject <EMFEmojiPreferenceActions> {
    NSMutableDictionary * _categoryIndexes;
    long long  _currentSequence;
    NSMutableDictionary * _defaults;
    bool  _isDefaultDirty;
    unsigned long long  _maximumRecentsCount;
    NSMutableArray * _recents;
    NSMutableDictionary * _skinToneBaseKeyPreferences;
    NSMutableDictionary * _typingNames;
    NSMutableDictionary * _usageHistory;
}

@property (nonatomic, readonly) NSArray *allRecents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasDisplayedSkinToneHelp;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maximumRecentsCount;
@property (nonatomic, readonly) NSString *previouslyUsedCategory;
@property (nonatomic, readonly) NSArray *recentEmojis;
@property (readonly) Class superclass;

+ (id)_allRecentStrings;
+ (id)_cacheDomain;
+ (id)_cachedFlagCategoryEmoji:(id /* block */)arg1;
+ (id)_recentEmojiStrings;
+ (id)_recentStringsInCharacterSet:(id)arg1;
+ (id)defaultsDomain;
+ (bool)deviceStateIsLocked;

- (void).cxx_destruct;
- (void)_checkForDingbatDuplicates;
- (void)_cleanUpOldFlagsCaches;
- (void)_pruneInvalidEmojiFromHistory;
- (void)_pruneOldestEmojiUsageFromHistory;
- (void)_readPreferencesFromDefaults;
- (void)_setRecentStrings:(id)arg1;
- (id)allRecents;
- (void)didDisplaySkinToneHelp;
- (void)didUseEmoji:(id)arg1;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2 typingName:(id)arg3;
- (void)didUseEmoji:(id)arg1 usageSource:(unsigned long long)arg2 replacementContext:(id)arg3 searchQuery:(id)arg4 resultPosition:(id)arg5 numberSearchQueriesRun:(id)arg6 wasPositiveEngagement:(bool)arg7;
- (void)didUseEmojiInCharacterPickerExtended:(id)arg1 finalQuery:(id)arg2 resultIndex:(id)arg3;
- (void)didUseEmojiInCharacterPickerLightweight:(id)arg1 replacementContext:(id)arg2;
- (void)didUseEmojiInCharacterPickerPopover:(id)arg1 finalQuery:(id)arg2 resultIndex:(id)arg3;
- (void)didUseEmojiInDFRBar:(id)arg1 replacementContext:(id)arg2;
- (void)didUseEmojiInDictation:(id)arg1 replacementContext:(id)arg2;
- (void)didUseEmojiInEmojiKeyboardPalette:(id)arg1 wasFromRecentsSection:(bool)arg2;
- (void)didUseEmojiInEmojiKeyboardSearch:(id)arg1 finalQuery:(id)arg2 resultIndex:(id)arg3;
- (void)didUseEmojiInHandwriting:(id)arg1 replacementContext:(id)arg2;
- (void)didUseEmojiInKeyboardCandidateBar:(id)arg1 replacementContext:(id)arg2;
- (void)didViewEmojiIndex:(long long)arg1 forCategory:(id)arg2;
- (bool)hasDisplayedSkinToneHelp;
- (bool)hasLastUsedVariantForEmoji:(id)arg1;
- (id)init;
- (id)lastUsedVariantEmojiForEmoji:(id)arg1;
- (void)loadDefaultsIfNecessary;
- (unsigned long long)maximumRecentsCount;
- (void)migrateFromMajorOSVersion:(long long)arg1;
- (void)migrateInDidDisplaySkinToneHelp:(bool)arg1;
- (void)migrateInPreviouslyUsedCategory:(id)arg1;
- (void)migrateInPreviouslyUsedCategoryIndexes:(id)arg1;
- (void)migrateInRecentEmoji:(id)arg1 usages:(id)arg2 typingNames:(id)arg3;
- (void)migrateInSkinTonePreferences:(id)arg1;
- (id)previouslyUsedCategory;
- (unsigned long long)previouslyUsedIndexInCategory:(id)arg1;
- (void)readEmojiDefaults;
- (id)recentEmojis;
- (id)recentVariantEmojiForEmoji:(id)arg1;
- (id)recentsInCharacterSet:(id)arg1;
- (void)resetEmojiDefaults;
- (double)scoreForEmojiString:(id)arg1;
- (double)scoreForSequence:(long long)arg1;
- (void)setMaximumRecentsCount:(unsigned long long)arg1;
- (bool)shouldCountEmojiStringForUsageHistory:(id)arg1;
- (id)typingNameForEmoji:(id)arg1;
- (void)writeEmojiDefaults;
- (void)writeEmojiDefaultsAndNotify:(bool)arg1;

@end
