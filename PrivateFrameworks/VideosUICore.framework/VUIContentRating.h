
@interface VUIContentRating : NSObject {
    unsigned long long  _rank;
    NSString * _ratingDescription;
    NSString * _ratingLabel;
    long long  _ratingSystem;
}

@property (getter=isExplicitContent, nonatomic, readonly) bool explicitContent;
@property (nonatomic, readonly) unsigned long long rank;
@property (nonatomic, readonly, copy) NSString *ratingDescription;
@property (nonatomic, readonly, copy) NSString *ratingLabel;
@property (nonatomic, readonly) long long ratingSystem;
@property (nonatomic, readonly) long long ratingSystemKind;
@property (nonatomic, readonly, copy) NSString *ratingSystemString;
@property (nonatomic, readonly, copy) NSString *stringRepresentation;

+ (id)new;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRatingSystem:(long long)arg1 explicitContent:(bool)arg2;
- (id)initWithRatingSystem:(long long)arg1 ratingLabel:(id)arg2 rank:(unsigned long long)arg3 ratingDescription:(id)arg4;
- (id)initWithRatingSystemString:(id)arg1 ratingLabel:(id)arg2 rank:(unsigned long long)arg3 ratingDescription:(id)arg4;
- (id)initWithStringRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitContent;
- (unsigned long long)rank;
- (id)ratingDescription;
- (id)ratingLabel;
- (long long)ratingSystem;
- (long long)ratingSystemKind;
- (id)ratingSystemString;
- (id)stringRepresentation;

@end
