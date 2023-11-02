
@interface SHSheetActivityItemsResult : NSObject {
    UIActivity * _activity;
    NSArray * _activityItemURLValues;
    NSArray * _activityItemValues;
    NSString * _initialSocialText;
    bool  _isPlaceholder;
    UISUISecurityContext * _securityScopedURLs;
    NSString * _subject;
    NSData * _suggestedImageData;
    NSArray * _suggestionAssetIdentifiers;
}

@property (nonatomic, readonly) UIActivity *activity;
@property (nonatomic, copy) NSArray *activityItemURLValues;
@property (nonatomic, readonly, copy) NSArray *activityItemValues;
@property (nonatomic, copy) NSString *initialSocialText;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic, retain) UISUISecurityContext *securityScopedURLs;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSData *suggestedImageData;
@property (nonatomic, copy) NSArray *suggestionAssetIdentifiers;

- (void).cxx_destruct;
- (id)activity;
- (id)activityItemURLValues;
- (id)activityItemValues;
- (id)initWithActivity:(id)arg1 activityItemValues:(id)arg2;
- (id)initialSocialText;
- (bool)isPlaceholder;
- (id)securityScopedURLs;
- (void)setActivityItemURLValues:(id)arg1;
- (void)setInitialSocialText:(id)arg1;
- (void)setSecurityScopedURLs:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setSuggestedImageData:(id)arg1;
- (void)setSuggestionAssetIdentifiers:(id)arg1;
- (id)subject;
- (id)suggestedImageData;
- (id)suggestionAssetIdentifiers;

@end
