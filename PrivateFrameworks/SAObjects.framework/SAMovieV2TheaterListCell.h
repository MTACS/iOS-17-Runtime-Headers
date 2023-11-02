
@interface SAMovieV2TheaterListCell : SADomainObject

@property (nonatomic, retain) SADistance *relativeDistance;
@property (nonatomic, copy) NSString *theaterAddress;
@property (nonatomic, copy) NSString *theaterName;
@property (nonatomic, retain) SAMovieV2MovieListSnippet *theaterShowtimeListSnippet;

+ (id)theaterListCell;
+ (id)theaterListCellWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)relativeDistance;
- (void)setRelativeDistance:(id)arg1;
- (void)setTheaterAddress:(id)arg1;
- (void)setTheaterName:(id)arg1;
- (void)setTheaterShowtimeListSnippet:(id)arg1;
- (id)theaterAddress;
- (id)theaterName;
- (id)theaterShowtimeListSnippet;

@end
