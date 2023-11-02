
@interface MUPlaceReviewViewModel : NSObject {
    MUPlaceReviewAvatarGenerator * _avatarGenerator;
    <MKMapItemProviderRatingSnippet> * _ratingSnippet;
}

@property (nonatomic, readonly) NSString *authorText;
@property (nonatomic, readonly) double normalizedScore;
@property (nonatomic, readonly) NSDate *reviewDate;
@property (nonatomic, readonly) NSString *reviewText;

- (void).cxx_destruct;
- (id)authorText;
- (id)initWithRatingSnippet:(id)arg1 avatarGenerator:(id)arg2;
- (void)loadUserIconWithPointSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (double)normalizedScore;
- (id)reviewDate;
- (id)reviewText;

@end
