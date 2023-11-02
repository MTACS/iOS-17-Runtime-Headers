
@interface ATXSpotlightZKWTrialClientWrapper : ATXTrialClientWrapper {
    _PASLock * _lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (long long)alternateRecentsRanking;
- (id)codePathForAlternateRecentsControl;
- (id)codePathForAlternateRecentsTreatment;
- (id)codePathIdForSuggestionsMaxCount;
- (id)codepathIDs;
- (id)initWithClientIdentifier:(int)arg1;
- (bool)matchesAlternateRecentsControlCodePath;
- (bool)matchesAlternateRecentsTreatmentCodePath;
- (bool)matchesSuggestionsMaxCount;
- (bool)nsuaSuggestions;
- (bool)showNSUASuggestionsAsAppLaunches;
- (long long)suggestionsMaxCount;
- (void)updateFactors;

@end
