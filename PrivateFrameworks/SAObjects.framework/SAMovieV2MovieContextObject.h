
@interface SAMovieV2MovieContextObject : SADomainObject

@property (nonatomic, copy) NSString *movieName;

+ (id)movieContextObject;
+ (id)movieContextObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)movieName;
- (void)setMovieName:(id)arg1;

@end
