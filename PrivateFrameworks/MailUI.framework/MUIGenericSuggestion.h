
@interface MUIGenericSuggestion : MUISearchAtomSuggestion {
    bool  _isAllMailboxes;
    CSSuggestion * _spotlightSuggestion;
}

@property (nonatomic, readonly) NSAttributedString *attributedTitle;
@property (nonatomic, readonly) UIColor *imageTintColor;
@property (nonatomic, readonly) bool isRecent;
@property (nonatomic, readonly) long long resultCount;

+ (id)allMailboxesSuggestionWithSpotlightSuggestion:(id)arg1;
+ (id)genericSuggestionWithSpotlightSuggestion:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_allMailboxesSuggestionTitle;
- (id)_joinRecentsTitleComponents:(id)arg1;
- (id)_recentsTitle;
- (id)accessibilityDescription;
- (id)attributedTitle;
- (id)category;
- (id)contactIdentifier;
- (id)description;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)imageTintColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpotlightSuggestion:(id)arg1 isAllMailboxes:(bool)arg2;
- (bool)isAllMailboxes;
- (bool)isRecent;
- (long long)resultCount;
- (id)spotlightSuggestion;
- (id)subtitle;
- (id)title;

@end
