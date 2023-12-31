
@interface SASTRatingItem : AceObject <SASTTemplateItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SASTTemplateRating *rating;
@property (readonly) Class superclass;

+ (id)ratingItem;
+ (id)ratingItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)rating;
- (void)setRating:(id)arg1;

@end
