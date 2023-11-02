
@protocol MUOverallRatingPlatterViewModel <NSObject>

@required

- (NSAttributedString *)attributionText;
- (unsigned long long)numberOfVotes;
- (double)rating;

@end
