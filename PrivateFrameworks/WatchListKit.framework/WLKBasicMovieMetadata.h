
@interface WLKBasicMovieMetadata : WLKBasicContentMetadata {
    double  _duration;
    NSDate * _releaseDate;
    WLKRottenTomatoesRating * _rottenTomatoesRating;
    NSString * _studio;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) WLKRottenTomatoesRating *rottenTomatoesRating;
@property (nonatomic, readonly, copy) NSString *studio;

- (void).cxx_destruct;
- (double)duration;
- (id)initWithDictionary:(id)arg1;
- (id)releaseDate;
- (id)rottenTomatoesRating;
- (id)studio;

@end
