
@interface SASTMovieStatItem : AceObject <SASTTemplateItem>

@property (nonatomic, copy) NSString *contentRating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SASTTemplatePercentageRating *reviewerRating;
@property (readonly) Class superclass;

+ (id)movieStatItem;
+ (id)movieStatItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)contentRating;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)reviewerRating;
- (void)setContentRating:(id)arg1;
- (void)setReviewerRating:(id)arg1;

@end
