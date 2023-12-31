
@interface TVPMediaItemAdvisoryInfo : NSObject {
    NSString * _ratingDescription;
    NSString * _ratingName;
}

@property (nonatomic, readonly) NSString *ratingDescription;
@property (nonatomic, retain) NSString *ratingName;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRatingDescription:(id)arg1;
- (id)ratingDescription;
- (id)ratingName;
- (void)setRatingName:(id)arg1;

@end
