
@interface BLItemContentRating : NSObject <NSCopying> {
    NSMutableDictionary * _dictionary;
}

@property (nonatomic, readonly) NSDictionary *contentRatingDictionary;
@property (nonatomic) long long rank;
@property (nonatomic, copy) NSString *ratingDescription;
@property (nonatomic, copy) NSString *ratingLabel;
@property (nonatomic) long long ratingSystem;

+ (long long)ratingSystemFromString:(id)arg1;
+ (id)stringForRatingSystem:(long long)arg1;

- (void).cxx_destruct;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)_setValueCopy:(id)arg1 forProperty:(id)arg2;
- (id)contentRatingDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (long long)rank;
- (id)ratingDescription;
- (id)ratingLabel;
- (long long)ratingSystem;
- (void)setRank:(long long)arg1;
- (void)setRatingDescription:(id)arg1;
- (void)setRatingLabel:(id)arg1;
- (void)setRatingSystem:(long long)arg1;
- (id)valueForProperty:(id)arg1;

@end
