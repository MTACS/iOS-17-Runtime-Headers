
@interface ICSearchSuggestion : NSObject <NSCopying> {
    CSSuggestion * _csSuggestion;
    NSString * _subQueryString;
    NSString * _suggestionItemTitle;
    NSArray * _tokens;
    unsigned long long  _type;
}

@property (nonatomic, retain) CSSuggestion *csSuggestion;
@property (nonatomic, readonly) _UISearchSuggestionItem_dci *dciSuggestion;
@property (nonatomic, readonly) UIImage *iconImage;
@property (nonatomic, readonly) NSString *iconImageName;
@property (nonatomic, readonly) NSString *subQueryString;
@property (nonatomic, readonly) NSString *suggestionItemTitle;
@property (nonatomic, readonly) NSArray *tokens;
@property (nonatomic, readonly) unsigned long long type;

+ (id)iconImageForToken:(id)arg1;
+ (id)orderedDefaultSearchSuggestions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)csSuggestion;
- (id)dciSuggestion;
- (id)description;
- (id)iconImage;
- (id)iconImageName;
- (id)initWithSuggestion:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCsSuggestion:(id)arg1;
- (id)subQueryString;
- (id)suggestionItemTitle;
- (id)tokens;
- (unsigned long long)type;

@end
