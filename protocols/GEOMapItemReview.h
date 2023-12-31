
@protocol GEOMapItemReview <NSObject>

@required

- (NSDate *)_date;
- (NSString *)_identifier;
- (NSString *)_localizedSnippet;
- (NSString *)_localizedSnippetLocale;
- (double)_maxScore;
- (double)_normalizedScore;
- (NSString *)_reviewerImageURLString;
- (NSString *)_reviewerName;
- (double)_score;

@end
