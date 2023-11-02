
@interface SAMovieV2ReviewListCell : SADomainObject

@property (nonatomic, copy) NSString *reviewAuthor;
@property (nonatomic, copy) NSDate *reviewDate;
@property (nonatomic, copy) NSString *reviewText;

+ (id)reviewListCell;
+ (id)reviewListCellWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)reviewAuthor;
- (id)reviewDate;
- (id)reviewText;
- (void)setReviewAuthor:(id)arg1;
- (void)setReviewDate:(id)arg1;
- (void)setReviewText:(id)arg1;

@end
