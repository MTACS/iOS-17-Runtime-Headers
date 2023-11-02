
@interface SAMovieV2ShowtimeSnippet : SAUISnippet

@property (nonatomic, retain) SAUIImageResource *attributionLogo;
@property (nonatomic, copy) NSString *movieName;
@property (nonatomic, copy) NSArray *showtimes;
@property (nonatomic, retain) SALocalSearchBusiness2 *theater;
@property (nonatomic, copy) NSString *theaterName;

+ (id)showtimeSnippet;
+ (id)showtimeSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributionLogo;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)movieName;
- (void)setAttributionLogo:(id)arg1;
- (void)setMovieName:(id)arg1;
- (void)setShowtimes:(id)arg1;
- (void)setTheater:(id)arg1;
- (void)setTheaterName:(id)arg1;
- (id)showtimes;
- (id)theater;
- (id)theaterName;

@end
