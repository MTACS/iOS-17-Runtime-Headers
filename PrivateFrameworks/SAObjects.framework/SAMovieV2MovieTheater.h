
@interface SAMovieV2MovieTheater : SADomainObject

@property (nonatomic, retain) SALocalSearchBusiness2 *business;
@property (nonatomic, copy) NSArray *movies;

+ (id)movieTheater;
+ (id)movieTheaterWithDictionary:(id)arg1 context:(id)arg2;

- (id)business;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)movies;
- (void)setBusiness:(id)arg1;
- (void)setMovies:(id)arg1;

@end
