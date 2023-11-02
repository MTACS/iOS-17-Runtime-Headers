
@interface SFSuggestionEngagementFeedback : SFFeedback {
    SFSearchSuggestion * _suggestion;
}

@property (nonatomic, copy) NSDictionary *VI_suggestionsBySuggestionType;
@property (nonatomic, retain) SFSearchSuggestion *suggestion;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestion:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (id)suggestion;

// Image: /System/Library/PrivateFrameworks/VisualIntelligence.framework/VisualIntelligence

- (id)VI_searchSuggestionForSuggestionType:(id)arg1;
- (id)VI_suggestionsBySuggestionType;
- (void)setVI_suggestionsBySuggestionType:(id)arg1;

@end
