
@interface MLContentRating : NSObject <NSCopying> {
    NSMutableDictionary * _dictionary;
}

@property (nonatomic, copy) NSString *ratingDescription;
@property (nonatomic, copy) NSString *ratingLabel;
@property (nonatomic, retain) NSNumber *ratingRank;
@property (nonatomic, copy) NSString *ratingSystem;

- (void).cxx_destruct;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (void)_setValueCopy:(id)arg1 forKey:(id)arg2;
- (id)copyStringRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithContentRatingDictionary:(id)arg1;
- (id)initWithStringRepresentation:(id)arg1;
- (id)ratingDescription;
- (id)ratingLabel;
- (id)ratingRank;
- (id)ratingSystem;
- (void)setRatingDescription:(id)arg1;
- (void)setRatingLabel:(id)arg1;
- (void)setRatingRank:(id)arg1;
- (void)setRatingSystem:(id)arg1;

@end
