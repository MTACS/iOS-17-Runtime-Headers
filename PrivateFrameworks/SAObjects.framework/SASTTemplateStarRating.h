
@interface SASTTemplateStarRating : SASTTemplateRating

@property (nonatomic) double maximumValue;
@property (nonatomic) double value;

+ (id)templateStarRating;
+ (id)templateStarRatingWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (double)maximumValue;
- (void)setMaximumValue:(double)arg1;
- (void)setValue:(double)arg1;
- (double)value;

@end
