
@interface PKSearchResult : NSObject {
    void episodes;
    void shows;
}

@property (nonatomic, readonly) NSArray *episodes;
@property (nonatomic, readonly) NSArray *shows;

- (void).cxx_destruct;
- (id)episodes;
- (id)init;
- (id)initWithEpisodes:(id)arg1 shows:(id)arg2;
- (id)shows;

@end
