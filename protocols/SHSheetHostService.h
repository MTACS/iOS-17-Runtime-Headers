
@protocol SHSheetHostService <NSObject>

@required

- (void)favoriteUserDefaultsActivity:(bool)arg1 withIdentifier:(NSUUID *)arg2 activityCategory:(long long)arg3;
- (void)longPressShareActivityWithIdentifier:(NSUUID *)arg1;
- (void)performActionActivityWithIdentifier:(NSUUID *)arg1;
- (void)performEditAction;
- (void)performPersonSuggestionWithIdentifier:(NSUUID *)arg1;
- (void)performShareActivityWithIdentifier:(NSUUID *)arg1;
- (void)performUserDefaultsActivityWithIdentifier:(NSUUID *)arg1 activityCategory:(long long)arg2;
- (void)provideFeedbackForPeopleSugestionIdentifier:(NSString *)arg1;
- (void)removePersonSuggestionWithIdentifier:(NSUUID *)arg1;
- (void)toggleUserDefaultsActivityWithIdentifier:(NSUUID *)arg1 activityCategory:(long long)arg2;
- (void)updateUserDefaultsFavorites:(NSArray *)arg1 activityCategory:(long long)arg2;

@end
