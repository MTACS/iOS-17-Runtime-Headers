
@protocol ASCOffer <NSObject, NSCopying>

@required

- (NSNumber *)ageRating;
- (long long)flags;
- (ASCAdamID *)id;
- (NSArray *)metrics;
- (id)offerWithMetrics:(NSArray *)arg1;
- (NSDictionary *)subtitles;
- (NSDictionary *)titles;

@end
