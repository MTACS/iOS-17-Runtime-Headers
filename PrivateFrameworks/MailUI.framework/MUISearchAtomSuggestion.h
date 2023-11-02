
@interface MUISearchAtomSuggestion : MUISearchSuggestion {
    NSDate * _lastUsedTime;
    UIColor * _tintColor;
}

@property (nonatomic, readonly) UIImage *atomImage;
@property (nonatomic, readonly, copy) NSString *atomTitle;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) UIColor *focusedTintColor;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) NSDate *lastUsedTime;
@property (nonatomic, readonly) long long option;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)allMailboxesSuggestionFromSpotlightSuggestion:(id)arg1;
+ (id)log;
+ (id)suggestionFromSpotlightSuggestion:(id)arg1 shouldShowAvaters:(bool)arg2;

- (void).cxx_destruct;
- (id)atomImage;
- (id)atomTitle;
- (id)contactIdentifier;
- (id)debugDescription;
- (id)description;
- (id)ef_publicDescription;
- (id)focusedTintColor;
- (id)image;
- (id)lastUsedTime;
- (long long)option;
- (id)predicateWithSelectedScope:(id)arg1;
- (void)setLastUsedTime:(id)arg1;
- (id)subtitle;
- (id)tintColor;
- (id)title;

@end
