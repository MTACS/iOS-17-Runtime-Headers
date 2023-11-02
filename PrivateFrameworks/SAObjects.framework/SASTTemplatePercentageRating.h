
@interface SASTTemplatePercentageRating : SASTTemplateRating

@property (nonatomic, retain) SAUILocalImageResource *localImageResource;
@property (nonatomic, retain) SAUIDecoratedText *value;

+ (id)templatePercentageRating;
+ (id)templatePercentageRatingWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)localImageResource;
- (void)setLocalImageResource:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
