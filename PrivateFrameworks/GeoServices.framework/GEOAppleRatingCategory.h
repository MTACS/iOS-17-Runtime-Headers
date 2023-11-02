
@interface GEOAppleRatingCategory : NSObject {
    GEOPDRatingCategory * _ratingCategory;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly, copy) NSString *localizedTitle;

- (void).cxx_destruct;
- (id)initWithRatingCategory:(id)arg1;
- (id)key;
- (id)localizedTitle;

@end
